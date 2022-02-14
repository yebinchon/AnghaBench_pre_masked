
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long uint64_t ;
typedef unsigned long uint32_t ;
typedef unsigned long u64 ;
struct ttm_place {unsigned long lpfn; int flags; int fpfn; } ;
struct ttm_mem_type_manager {unsigned long size; struct amdgpu_vram_mgr* priv; int bdev; } ;
struct ttm_mem_reg {unsigned long num_pages; unsigned long page_alignment; struct drm_mm_node* mm_node; scalar_t__ start; } ;
struct ttm_buffer_object {int dummy; } ;
struct drm_mm_node {int dummy; } ;
struct drm_mm {int dummy; } ;
struct amdgpu_vram_mgr {int usage; int lock; int vis_usage; struct drm_mm mm; } ;
struct TYPE_2__ {scalar_t__ mc_vram_size; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;
typedef enum drm_mm_insert_mode { ____Placeholder_drm_mm_insert_mode } drm_mm_insert_mode ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct amdgpu_device* FUNC_1 (int ) ;
 int FUNC_2 (struct ttm_mem_reg*,struct drm_mm_node*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*,struct drm_mm_node*) ;
 int FUNC_4 (unsigned long,int *) ;
 scalar_t__ FUNC_5 (unsigned long,int *) ;
 int FUNC_6 (unsigned long,int *) ;
 int FUNC_7 (struct drm_mm*,struct drm_mm_node*,unsigned long,unsigned long,int ,int ,unsigned long,int) ;
 int FUNC_8 (struct drm_mm_node*) ;
 int FUNC_9 (struct drm_mm_node*) ;
 struct drm_mm_node* FUNC_10 (unsigned long,int,int) ;
 unsigned long FUNC_11 (unsigned long,unsigned long) ;
 unsigned long FUNC_12 (unsigned long,unsigned long) ;
 unsigned long FUNC_13 (unsigned long) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct ttm_mem_type_manager *VAR_10,
          struct ttm_buffer_object *VAR_11,
          const struct ttm_place *VAR_12,
          struct ttm_mem_reg *VAR_13)
{
 struct amdgpu_device *VAR_14 = FUNC_1(VAR_10->bdev);
 struct amdgpu_vram_mgr *VAR_15 = VAR_10->priv;
 struct drm_mm *VAR_16 = &VAR_15->mm;
 struct drm_mm_node *VAR_17;
 enum drm_mm_insert_mode VAR_18;
 unsigned long VAR_19, VAR_20, VAR_21, VAR_22;
 uint64_t VAR_23 = 0, VAR_24;
 unsigned VAR_25;
 int VAR_26;

 VAR_19 = VAR_12->lpfn;
 if (!VAR_19)
  VAR_19 = VAR_10->size;


 VAR_24 = (u64)VAR_13->num_pages << VAR_6;
 if (FUNC_5(VAR_24, &VAR_15->usage) > VAR_14->gmc.mc_vram_size) {
  FUNC_6(VAR_24, &VAR_15->usage);
  VAR_13->mm_node = ((void*)0);
  return 0;
 }

 if (VAR_12->flags & VAR_7) {
  VAR_21 = ~0ul;
  VAR_20 = 1;
 } else {




  VAR_21 = (2UL << (20UL - VAR_6));

  VAR_21 = FUNC_11((uint32_t)VAR_21, VAR_13->page_alignment);
  VAR_20 = FUNC_0(VAR_13->num_pages, VAR_21);
 }

 VAR_17 = FUNC_10((uint32_t)VAR_20, sizeof(*VAR_17),
          VAR_4 | VAR_9);
 if (!VAR_17) {
  FUNC_6(VAR_24, &VAR_15->usage);
  return -VAR_2;
 }

 VAR_18 = VAR_0;
 if (VAR_12->flags & VAR_8)
  VAR_18 = VAR_1;

 VAR_13->start = 0;
 VAR_22 = VAR_13->num_pages;

 FUNC_14(&VAR_15->lock);
 for (VAR_25 = 0; VAR_22 >= VAR_21; ++VAR_25) {
  unsigned long VAR_27 = FUNC_13(VAR_22);

  VAR_26 = FUNC_7(VAR_16, &VAR_17[VAR_25], VAR_27,
      VAR_21, 0,
      VAR_12->fpfn, VAR_19,
      VAR_18);
  if (FUNC_16(VAR_26))
   break;

  VAR_23 += FUNC_3(VAR_14, &VAR_17[VAR_25]);
  FUNC_2(VAR_13, &VAR_17[VAR_25]);
  VAR_22 -= VAR_27;
 }

 for (; VAR_22; ++VAR_25) {
  unsigned long VAR_28 = FUNC_12(VAR_22, VAR_21);
  uint32_t VAR_29 = VAR_13->page_alignment;

  if (VAR_28 == VAR_21)
   VAR_29 = VAR_21;

  VAR_26 = FUNC_7(VAR_16, &VAR_17[VAR_25],
      VAR_28, VAR_29, 0,
      VAR_12->fpfn, VAR_19,
      VAR_18);
  if (FUNC_16(VAR_26))
   goto error;

  VAR_23 += FUNC_3(VAR_14, &VAR_17[VAR_25]);
  FUNC_2(VAR_13, &VAR_17[VAR_25]);
  VAR_22 -= VAR_28;
 }
 FUNC_15(&VAR_15->lock);

 FUNC_4(VAR_23, &VAR_15->vis_usage);

 VAR_13->mm_node = VAR_17;

 return 0;

error:
 while (VAR_25--)
  FUNC_8(&VAR_17[VAR_25]);
 FUNC_15(&VAR_15->lock);
 FUNC_6(VAR_13->num_pages << VAR_6, &VAR_15->usage);

 FUNC_9(VAR_17);
 return VAR_26 == -VAR_3 ? 0 : VAR_26;
}
