
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_vm {int ib_bo_va; } ;
struct radeon_fpriv {struct radeon_vm vm; } ;
struct TYPE_2__ {int bo; } ;
struct radeon_device {scalar_t__ family; TYPE_1__ ring_tmp_bo; scalar_t__ accel_working; } ;
struct drm_file {struct radeon_fpriv* driver_priv; } ;
struct drm_device {int dev; struct radeon_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct radeon_fpriv*) ;
 struct radeon_fpriv* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct radeon_device*,struct radeon_vm*,int ) ;
 int FUNC_7 (struct radeon_device*,int ,int ,int) ;
 int FUNC_8 (struct radeon_device*,struct radeon_vm*) ;
 int FUNC_9 (struct radeon_device*,struct radeon_vm*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct drm_device *VAR_6, struct drm_file *VAR_7)
{
 struct radeon_device *VAR_8 = VAR_6->dev_private;
 int VAR_9;

 VAR_7->driver_priv = ((void*)0);

 VAR_9 = FUNC_2(VAR_6->dev);
 if (VAR_9 < 0)
  return VAR_9;


 if (VAR_8->family >= VAR_0) {
  struct radeon_fpriv *VAR_10;
  struct radeon_vm *VAR_11;

  VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_2);
  if (FUNC_10(!VAR_10)) {
   VAR_9 = -VAR_1;
   goto out_suspend;
  }

  if (VAR_8->accel_working) {
   VAR_11 = &VAR_10->vm;
   VAR_9 = FUNC_9(VAR_8, VAR_11);
   if (VAR_9) {
    FUNC_0(VAR_10);
    goto out_suspend;
   }

   VAR_9 = FUNC_5(VAR_8->ring_tmp_bo.bo, 0);
   if (VAR_9) {
    FUNC_8(VAR_8, VAR_11);
    FUNC_0(VAR_10);
    goto out_suspend;
   }



   VAR_11->ib_bo_va = FUNC_6(VAR_8, VAR_11,
       VAR_8->ring_tmp_bo.bo);
   VAR_9 = FUNC_7(VAR_8, VAR_11->ib_bo_va,
        VAR_3,
        VAR_4 |
        VAR_5);
   if (VAR_9) {
    FUNC_8(VAR_8, VAR_11);
    FUNC_0(VAR_10);
    goto out_suspend;
   }
  }
  VAR_7->driver_priv = VAR_10;
 }

out_suspend:
 FUNC_3(VAR_6->dev);
 FUNC_4(VAR_6->dev);
 return VAR_9;
}
