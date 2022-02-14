
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ttm_mem_type_manager {struct amdgpu_vram_mgr* priv; int bdev; } ;
struct ttm_mem_reg {unsigned int num_pages; struct drm_mm_node* mm_node; } ;
struct drm_mm_node {unsigned int size; } ;
struct amdgpu_vram_mgr {int vis_usage; int usage; int lock; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 struct amdgpu_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*,struct drm_mm_node*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct drm_mm_node*) ;
 int FUNC_4 (struct drm_mm_node*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ttm_mem_type_manager *VAR_1,
    struct ttm_mem_reg *VAR_2)
{
 struct amdgpu_device *VAR_3 = FUNC_0(VAR_1->bdev);
 struct amdgpu_vram_mgr *VAR_4 = VAR_1->priv;
 struct drm_mm_node *VAR_5 = VAR_2->mm_node;
 uint64_t VAR_6 = 0, VAR_7 = 0;
 unsigned VAR_8 = VAR_2->num_pages;

 if (!VAR_2->mm_node)
  return;

 FUNC_5(&VAR_4->lock);
 while (VAR_8) {
  VAR_8 -= VAR_5->size;
  FUNC_3(VAR_5);
  VAR_6 += VAR_5->size << VAR_0;
  VAR_7 += FUNC_1(VAR_3, VAR_5);
  ++VAR_5;
 }
 FUNC_6(&VAR_4->lock);

 FUNC_2(VAR_6, &VAR_4->usage);
 FUNC_2(VAR_7, &VAR_4->vis_usage);

 FUNC_4(VAR_2->mm_node);
 VAR_2->mm_node = ((void*)0);
}
