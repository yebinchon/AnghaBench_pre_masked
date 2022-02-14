
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct ttm_mem_type_manager {struct amdgpu_gtt_mgr* priv; int bdev; } ;
struct amdgpu_gtt_mgr {int available; int lock; int mm; } ;
struct TYPE_2__ {int gart_size; } ;
struct amdgpu_device {int dev; TYPE_1__ gmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct amdgpu_device* FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int,int) ;
 struct amdgpu_gtt_mgr* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ttm_mem_type_manager *VAR_7,
          unsigned long VAR_8)
{
 struct amdgpu_device *VAR_9 = FUNC_1(VAR_7->bdev);
 struct amdgpu_gtt_mgr *VAR_10;
 uint64_t VAR_11, VAR_12;
 int VAR_13;

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_11 = VAR_0 * VAR_1;
 VAR_12 = (VAR_9->gmc.gart_size >> VAR_4) - VAR_11;
 FUNC_4(&VAR_10->mm, VAR_11, VAR_12);
 FUNC_6(&VAR_10->lock);
 FUNC_2(&VAR_10->available, VAR_8);
 VAR_7->priv = VAR_10;

 VAR_13 = FUNC_3(VAR_9->dev, &VAR_5);
 if (VAR_13) {
  FUNC_0("Failed to create device file mem_info_gtt_total\n");
  return VAR_13;
 }
 VAR_13 = FUNC_3(VAR_9->dev, &VAR_6);
 if (VAR_13) {
  FUNC_0("Failed to create device file mem_info_gtt_used\n");
  return VAR_13;
 }

 return 0;
}
