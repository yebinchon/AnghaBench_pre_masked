
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct nouveau_cli {int dummy; } ;
struct TYPE_6__ {int num_pages; } ;
struct TYPE_8__ {TYPE_1__ mem; } ;
struct TYPE_9__ {int virtual; } ;
struct nouveau_bo {int validate_mapped; TYPE_3__ bo; TYPE_5__ kmap; } ;
struct drm_nouveau_gem_pushbuf_reloc {size_t bo_index; size_t reloc_bo_index; int reloc_bo_offset; int flags; int data; int tor; int vor; } ;
struct TYPE_7__ {int offset; scalar_t__ domain; scalar_t__ valid; } ;
struct drm_nouveau_gem_pushbuf_bo {TYPE_2__ presumed; scalar_t__ user_priv; } ;
struct drm_nouveau_gem_pushbuf {unsigned int nr_relocs; size_t nr_buffers; int relocs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_nouveau_gem_pushbuf_reloc*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct nouveau_cli*,char*,...) ;
 int VAR_5 ;
 int FUNC_2 (struct drm_nouveau_gem_pushbuf_reloc*) ;
 int VAR_6 ;
 int FUNC_3 (struct nouveau_bo*,int,int) ;
 int FUNC_4 (TYPE_3__*,int ,int,TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*,int,int) ;
 int FUNC_6 (struct drm_nouveau_gem_pushbuf_reloc*) ;
 struct drm_nouveau_gem_pushbuf_reloc* FUNC_7 (int ,unsigned int,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct nouveau_cli *VAR_7,
    struct drm_nouveau_gem_pushbuf *VAR_8,
    struct drm_nouveau_gem_pushbuf_bo *VAR_9)
{
 struct drm_nouveau_gem_pushbuf_reloc *VAR_10 = ((void*)0);
 int VAR_11 = 0;
 unsigned VAR_12;

 VAR_10 = FUNC_7(VAR_8->relocs, VAR_8->nr_relocs, sizeof(*VAR_10));
 if (FUNC_0(VAR_10))
  return FUNC_2(VAR_10);

 for (VAR_12 = 0; VAR_12 < VAR_8->nr_relocs; VAR_12++) {
  struct drm_nouveau_gem_pushbuf_reloc *VAR_13 = &VAR_10[VAR_12];
  struct drm_nouveau_gem_pushbuf_bo *VAR_14;
  struct nouveau_bo *VAR_15;
  uint32_t VAR_16;

  if (FUNC_8(VAR_13->bo_index >= VAR_8->nr_buffers)) {
   FUNC_1(VAR_6, VAR_7, "reloc bo index invalid\n");
   VAR_11 = -VAR_0;
   break;
  }

  VAR_14 = &VAR_9[VAR_13->bo_index];
  if (VAR_14->presumed.valid)
   continue;

  if (FUNC_8(VAR_13->reloc_bo_index >= VAR_8->nr_buffers)) {
   FUNC_1(VAR_6, VAR_7, "reloc container bo index invalid\n");
   VAR_11 = -VAR_0;
   break;
  }
  VAR_15 = (void *)(unsigned long)VAR_9[VAR_13->reloc_bo_index].user_priv;

  if (FUNC_8(VAR_13->reloc_bo_offset + 4 >
        VAR_15->bo.mem.num_pages << VAR_5)) {
   FUNC_1(VAR_6, VAR_7, "reloc outside of bo\n");
   VAR_11 = -VAR_0;
   break;
  }

  if (!VAR_15->kmap.virtual) {
   VAR_11 = FUNC_4(&VAR_15->bo, 0, VAR_15->bo.mem.num_pages,
       &VAR_15->kmap);
   if (VAR_11) {
    FUNC_1(VAR_6, VAR_7, "failed kmap for reloc\n");
    break;
   }
   VAR_15->validate_mapped = 1;
  }

  if (VAR_13->flags & VAR_3)
   VAR_16 = VAR_14->presumed.offset + VAR_13->data;
  else
  if (VAR_13->flags & VAR_2)
   VAR_16 = (VAR_14->presumed.offset + VAR_13->data) >> 32;
  else
   VAR_16 = VAR_13->data;

  if (VAR_13->flags & VAR_4) {
   if (VAR_14->presumed.domain == VAR_1)
    VAR_16 |= VAR_13->tor;
   else
    VAR_16 |= VAR_13->vor;
  }

  VAR_11 = FUNC_5(&VAR_15->bo, 0, 0);
  if (VAR_11) {
   FUNC_1(VAR_6, VAR_7, "reloc wait_idle failed: %d\n", VAR_11);
   break;
  }

  FUNC_3(VAR_15, VAR_13->reloc_bo_offset >> 2, VAR_16);
 }

 FUNC_6(VAR_10);
 return VAR_11;
}
