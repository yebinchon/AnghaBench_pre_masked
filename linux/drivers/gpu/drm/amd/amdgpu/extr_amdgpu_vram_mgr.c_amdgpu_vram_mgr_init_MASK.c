
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_type_manager {struct amdgpu_vram_mgr* priv; int bdev; } ;
struct amdgpu_vram_mgr {int lock; int mm; } ;
struct amdgpu_device {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct amdgpu_device* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ,unsigned long) ;
 struct amdgpu_vram_mgr* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ttm_mem_type_manager *VAR_6,
    unsigned long VAR_7)
{
 struct amdgpu_device *VAR_8 = FUNC_1(VAR_6->bdev);
 struct amdgpu_vram_mgr *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_3(&VAR_9->mm, 0, VAR_7);
 FUNC_5(&VAR_9->lock);
 VAR_6->priv = VAR_9;


 VAR_10 = FUNC_2(VAR_8->dev, &VAR_4);
 if (VAR_10) {
  FUNC_0("Failed to create device file mem_info_vram_total\n");
  return VAR_10;
 }
 VAR_10 = FUNC_2(VAR_8->dev, &VAR_2);
 if (VAR_10) {
  FUNC_0("Failed to create device file mem_info_vis_vram_total\n");
  return VAR_10;
 }
 VAR_10 = FUNC_2(VAR_8->dev, &VAR_5);
 if (VAR_10) {
  FUNC_0("Failed to create device file mem_info_vram_used\n");
  return VAR_10;
 }
 VAR_10 = FUNC_2(VAR_8->dev, &VAR_3);
 if (VAR_10) {
  FUNC_0("Failed to create device file mem_info_vis_vram_used\n");
  return VAR_10;
 }

 return 0;
}
