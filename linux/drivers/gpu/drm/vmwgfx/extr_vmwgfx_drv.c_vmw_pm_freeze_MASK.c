
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int suspend_locked; int fman; scalar_t__ enable_fb; scalar_t__ suspend_state; int reservation_sem; int num_fifo_resources; int bdev; int dev; } ;
struct pci_dev {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vmw_private*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct drm_device* FUNC_4 (struct pci_dev*) ;
 struct pci_dev* FUNC_5 (struct device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct vmw_private*) ;
 int FUNC_10 (struct vmw_private*) ;
 int FUNC_11 (struct vmw_private*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct vmw_private*) ;
 int FUNC_14 (struct vmw_private*) ;
 int FUNC_15 (struct drm_device*) ;
 int FUNC_16 (int ) ;
 struct vmw_private* FUNC_17 (struct drm_device*) ;
 int FUNC_18 (struct vmw_private*) ;
 int FUNC_19 (struct vmw_private*) ;
 int FUNC_20 (struct vmw_private*) ;
 int FUNC_21 (struct vmw_private*) ;

__attribute__((used)) static int FUNC_22(struct device *VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_5(VAR_1);
 struct drm_device *VAR_3 = FUNC_4(VAR_2);
 struct vmw_private *VAR_4 = FUNC_17(VAR_3);
 int VAR_5;





 FUNC_8(&VAR_4->reservation_sem);
 VAR_5 = FUNC_16(VAR_4->dev);
 if (VAR_5) {
  FUNC_7(&VAR_4->reservation_sem);
  FUNC_0("Failed to freeze modesetting.\n");
  return VAR_5;
 }
 if (VAR_4->enable_fb)
  FUNC_10(VAR_4);

 FUNC_7(&VAR_4->reservation_sem);
 FUNC_9(VAR_4);
 FUNC_21(VAR_4);
 FUNC_18(VAR_4);
 FUNC_6(&VAR_4->bdev);
 if (VAR_4->enable_fb)
  FUNC_13(VAR_4);
 if (FUNC_3(&VAR_4->num_fifo_resources) != 0) {
  FUNC_0("Can't hibernate while 3D resources are active.\n");
  if (VAR_4->enable_fb)
   FUNC_14(VAR_4);
  FUNC_1(FUNC_20(VAR_4));
  VAR_4->suspend_locked = 0;
  FUNC_8(&VAR_4->reservation_sem);
  if (VAR_4->suspend_state)
   FUNC_15(VAR_3);
  if (VAR_4->enable_fb)
   FUNC_11(VAR_4);
  return -VAR_0;
 }

 FUNC_12(VAR_4->fman);
 FUNC_2(VAR_4);

 FUNC_19(VAR_4);
 return 0;
}
