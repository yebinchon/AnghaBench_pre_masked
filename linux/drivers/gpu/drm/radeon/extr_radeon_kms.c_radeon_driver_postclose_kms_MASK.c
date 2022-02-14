
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_vm {scalar_t__ ib_bo_va; } ;
struct radeon_fpriv {struct radeon_vm vm; } ;
struct TYPE_4__ {int bo; } ;
struct TYPE_3__ {int mutex; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ ring_tmp_bo; scalar_t__ accel_working; TYPE_1__ gem; struct drm_file* cmask_filp; struct drm_file* hyperz_filp; } ;
struct drm_file {struct radeon_fpriv* driver_priv; } ;
struct drm_device {int dev; struct radeon_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct radeon_fpriv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct radeon_device*,struct drm_file*) ;
 int FUNC_9 (struct radeon_device*,struct drm_file*) ;
 int FUNC_10 (struct radeon_device*,scalar_t__) ;
 int FUNC_11 (struct radeon_device*,struct radeon_vm*) ;

void FUNC_12(struct drm_device *VAR_1,
     struct drm_file *VAR_2)
{
 struct radeon_device *VAR_3 = VAR_1->dev_private;

 FUNC_3(VAR_1->dev);

 FUNC_1(&VAR_3->gem.mutex);
 if (VAR_3->hyperz_filp == VAR_2)
  VAR_3->hyperz_filp = ((void*)0);
 if (VAR_3->cmask_filp == VAR_2)
  VAR_3->cmask_filp = ((void*)0);
 FUNC_2(&VAR_3->gem.mutex);

 FUNC_8(VAR_3, VAR_2);
 FUNC_9(VAR_3, VAR_2);


 if (VAR_3->family >= VAR_0 && VAR_2->driver_priv) {
  struct radeon_fpriv *VAR_4 = VAR_2->driver_priv;
  struct radeon_vm *VAR_5 = &VAR_4->vm;
  int VAR_6;

  if (VAR_3->accel_working) {
   VAR_6 = FUNC_6(VAR_3->ring_tmp_bo.bo, 0);
   if (!VAR_6) {
    if (VAR_5->ib_bo_va)
     FUNC_10(VAR_3, VAR_5->ib_bo_va);
    FUNC_7(VAR_3->ring_tmp_bo.bo);
   }
   FUNC_11(VAR_3, VAR_5);
  }

  FUNC_0(VAR_4);
  VAR_2->driver_priv = ((void*)0);
 }
 FUNC_4(VAR_1->dev);
 FUNC_5(VAR_1->dev);
}
