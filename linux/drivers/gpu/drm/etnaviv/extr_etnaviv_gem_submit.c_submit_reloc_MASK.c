
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct etnaviv_gem_submit_bo {TYPE_3__* mapping; TYPE_2__* obj; } ;
struct etnaviv_gem_submit {int flags; } ;
struct drm_etnaviv_gem_submit_reloc {int submit_offset; int reloc_offset; int reloc_idx; int flags; } ;
struct TYPE_6__ {scalar_t__ iova; } ;
struct TYPE_4__ {int size; } ;
struct TYPE_5__ {TYPE_1__ base; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct etnaviv_gem_submit*,int ,struct etnaviv_gem_submit_bo**) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct etnaviv_gem_submit *VAR_2, void *VAR_3,
  u32 VAR_4, const struct drm_etnaviv_gem_submit_reloc *VAR_5,
  u32 VAR_6)
{
 u32 VAR_7, VAR_8 = 0;
 u32 *VAR_9 = VAR_3;
 int VAR_10;


 if ((VAR_2->flags & VAR_1) && VAR_6 != 0)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  const struct drm_etnaviv_gem_submit_reloc *VAR_11 = VAR_5 + VAR_7;
  struct etnaviv_gem_submit_bo *VAR_12;
  u32 VAR_13;

  if (FUNC_2(VAR_11->flags)) {
   FUNC_0("invalid reloc flags\n");
   return -VAR_0;
  }

  if (VAR_11->submit_offset % 4) {
   FUNC_0("non-aligned reloc offset: %u\n",
      VAR_11->submit_offset);
   return -VAR_0;
  }


  VAR_13 = VAR_11->submit_offset / 4;

  if ((VAR_13 >= VAR_4 ) ||
    (VAR_13 < VAR_8)) {
   FUNC_0("invalid offset %u at reloc %u\n", VAR_13, VAR_7);
   return -VAR_0;
  }

  VAR_10 = FUNC_1(VAR_2, VAR_11->reloc_idx, &VAR_12);
  if (VAR_10)
   return VAR_10;

  if (VAR_11->reloc_offset > VAR_12->obj->base.size - sizeof(*VAR_9)) {
   FUNC_0("relocation %u outside object\n", VAR_7);
   return -VAR_0;
  }

  VAR_9[VAR_13] = VAR_12->mapping->iova + VAR_11->reloc_offset;

  VAR_8 = VAR_13;
 }

 return 0;
}
