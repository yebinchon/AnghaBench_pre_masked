
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct drm_device {int dev; TYPE_1__* pdev; void* dev_private; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ) ;
 struct radeon_device* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*,struct drm_device*,TYPE_1__*,unsigned long) ;
 int FUNC_15 (struct drm_device*) ;
 scalar_t__ FUNC_16 () ;
 scalar_t__ FUNC_17 (struct drm_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 scalar_t__ VAR_9 ;

int FUNC_19(struct drm_device *VAR_10, unsigned long VAR_11)
{
 struct radeon_device *VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = FUNC_3(sizeof(struct radeon_device), VAR_2);
 if (VAR_12 == ((void*)0)) {
  return -VAR_1;
 }
 VAR_10->dev_private = (void *)VAR_12;


 if (FUNC_4(VAR_10->pdev, VAR_3)) {
  VAR_11 |= VAR_4;
 } else if (FUNC_5(VAR_10->pdev)) {
  VAR_11 |= VAR_7;
 } else {
  VAR_11 |= VAR_6;
 }

 if ((VAR_9 != 0) &&
     FUNC_16() &&
     ((VAR_11 & VAR_5) == 0) &&
     !FUNC_6(VAR_10->pdev))
  VAR_11 |= VAR_8;







 VAR_13 = FUNC_14(VAR_12, VAR_10, VAR_10->pdev, VAR_11);
 if (VAR_13) {
  FUNC_1(&VAR_10->pdev->dev, "Fatal error during GPU init\n");
  goto out;
 }





 VAR_13 = FUNC_18(VAR_12);
 if (VAR_13)
  FUNC_1(&VAR_10->pdev->dev, "Fatal error during modeset init\n");




 if (!VAR_13) {
  VAR_14 = FUNC_13(VAR_12);
  if (VAR_14)
  FUNC_0(&VAR_10->pdev->dev,
    "Error during ACPI methods call\n");
 }

 if (FUNC_17(VAR_10)) {
  FUNC_2(VAR_10->dev, VAR_0);
  FUNC_12(VAR_10->dev);
  FUNC_11(VAR_10->dev, 5000);
  FUNC_10(VAR_10->dev);
  FUNC_7(VAR_10->dev);
  FUNC_8(VAR_10->dev);
  FUNC_9(VAR_10->dev);
 }

out:
 if (VAR_13)
  FUNC_15(VAR_10);


 return VAR_13;
}
