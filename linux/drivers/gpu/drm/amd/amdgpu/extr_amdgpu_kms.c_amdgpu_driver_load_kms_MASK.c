
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int dev; TYPE_1__* pdev; void* dev_private; } ;
struct amdgpu_device {scalar_t__ rmmio; } ;
struct TYPE_3__ {int dev; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,struct drm_device*,TYPE_1__*,unsigned long) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int ,int ) ;
 struct amdgpu_device* FUNC_10 (int,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ) ;

int FUNC_19(struct drm_device *VAR_6, unsigned long VAR_7)
{
 struct amdgpu_device *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_10(sizeof(struct amdgpu_device), VAR_4);
 if (VAR_8 == ((void*)0)) {
  return -VAR_3;
 }
 VAR_6->dev_private = (void *)VAR_8;

 if ((VAR_5 != 0) &&
     FUNC_4() &&
     (FUNC_6() ||
      FUNC_5()) &&
     ((VAR_7 & VAR_0) == 0) &&
     !FUNC_11(VAR_6->pdev))
  VAR_7 |= VAR_1;







 VAR_9 = FUNC_1(VAR_8, VAR_6, VAR_6->pdev, VAR_7);
 if (VAR_9) {
  FUNC_8(&VAR_6->pdev->dev, "Fatal error during GPU init\n");
  goto out;
 }




 if (!VAR_9) {
  VAR_10 = FUNC_0(VAR_8);
  if (VAR_10)
   FUNC_7(&VAR_6->pdev->dev,
    "Error during ACPI methods call\n");
 }

 if (FUNC_2(VAR_6)) {
  FUNC_9(VAR_6->dev, VAR_2);
  FUNC_18(VAR_6->dev);
  FUNC_17(VAR_6->dev, 5000);
  FUNC_16(VAR_6->dev);
  FUNC_12(VAR_6->dev);
  FUNC_13(VAR_6->dev);
  FUNC_14(VAR_6->dev);
 }

out:
 if (VAR_9) {

  if (VAR_8->rmmio && FUNC_2(VAR_6))
   FUNC_15(VAR_6->dev);
  FUNC_3(VAR_6);
 }

 return VAR_9;
}
