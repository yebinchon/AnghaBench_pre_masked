
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_type_manager {struct amdgpu_gtt_mgr* priv; int bdev; } ;
struct amdgpu_gtt_mgr {int lock; int mm; } ;
struct amdgpu_device {int dev; } ;


 struct amdgpu_device* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct amdgpu_gtt_mgr*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ttm_mem_type_manager *VAR_2)
{
 struct amdgpu_device *VAR_3 = FUNC_0(VAR_2->bdev);
 struct amdgpu_gtt_mgr *VAR_4 = VAR_2->priv;
 FUNC_4(&VAR_4->lock);
 FUNC_2(&VAR_4->mm);
 FUNC_5(&VAR_4->lock);
 FUNC_3(VAR_4);
 VAR_2->priv = ((void*)0);

 FUNC_1(VAR_3->dev, &VAR_0);
 FUNC_1(VAR_3->dev, &VAR_1);

 return 0;
}
