
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ oclass; } ;
struct TYPE_9__ {TYPE_1__ object; } ;
struct nouveau_vmm {TYPE_2__ vmm; int cli; } ;
struct nouveau_vma {int addr; } ;
struct TYPE_13__ {scalar_t__ family; } ;
struct TYPE_14__ {TYPE_6__ info; } ;
struct nouveau_cli {TYPE_7__ device; struct nouveau_vmm vmm; struct nouveau_vmm svm; } ;
struct TYPE_11__ {int vma_node; } ;
struct TYPE_10__ {scalar_t__ mem_type; int num_pages; } ;
struct TYPE_12__ {TYPE_4__ base; TYPE_3__ mem; int offset; } ;
struct nouveau_bo {int kind; int comp; int zeta; scalar_t__ contig; int mode; TYPE_5__ bo; int valid_domains; } ;
struct drm_nouveau_gem_info {int size; int tile_flags; int tile_mode; int map_handle; int offset; int domain; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 struct nouveau_cli* FUNC_2 (struct drm_file*) ;
 struct nouveau_bo* FUNC_3 (struct drm_gem_object*) ;
 struct nouveau_vma* FUNC_4 (struct nouveau_bo*,struct nouveau_vmm*) ;

__attribute__((used)) static int
FUNC_5(struct drm_file *VAR_9, struct drm_gem_object *VAR_10,
   struct drm_nouveau_gem_info *VAR_11)
{
 struct nouveau_cli *VAR_12 = FUNC_2(VAR_9);
 struct nouveau_bo *VAR_13 = FUNC_3(VAR_10);
 struct nouveau_vmm *VAR_14 = VAR_12->svm.cli ? &VAR_12->svm : &VAR_12->vmm;
 struct nouveau_vma *VAR_15;

 if (FUNC_1(VAR_13->valid_domains))
  VAR_11->domain = VAR_13->valid_domains;
 else if (VAR_13->bo.mem.mem_type == VAR_8)
  VAR_11->domain = VAR_1;
 else
  VAR_11->domain = VAR_2;
 VAR_11->offset = VAR_13->bo.offset;
 if (VAR_14->vmm.object.oclass >= VAR_4) {
  VAR_15 = FUNC_4(VAR_13, VAR_14);
  if (!VAR_15)
   return -VAR_0;

  VAR_11->offset = VAR_15->addr;
 }

 VAR_11->size = VAR_13->bo.mem.num_pages << VAR_7;
 VAR_11->map_handle = FUNC_0(&VAR_13->bo.base.vma_node);
 VAR_11->tile_mode = VAR_13->mode;
 VAR_11->tile_flags = VAR_13->contig ? 0 : VAR_3;
 if (VAR_12->device.info.family >= VAR_5)
  VAR_11->tile_flags |= VAR_13->kind << 8;
 else
 if (VAR_12->device.info.family >= VAR_6)
  VAR_11->tile_flags |= VAR_13->kind << 8 | VAR_13->comp << 16;
 else
  VAR_11->tile_flags |= VAR_13->zeta;
 return 0;
}
