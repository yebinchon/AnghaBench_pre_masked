
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int suspend_locked; scalar_t__ enable_fb; int dev; scalar_t__ suspend_state; int reservation_sem; int fman; } ;
struct pci_dev {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vmw_private*) ;
 struct drm_device* FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vmw_private*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct vmw_private*) ;
 int FUNC_7 (int ) ;
 struct vmw_private* FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct vmw_private*,int ) ;
 int FUNC_10 (struct vmw_private*) ;
 int FUNC_11 (struct vmw_private*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_2(VAR_2);
 struct drm_device *VAR_4 = FUNC_1(VAR_3);
 struct vmw_private *VAR_5 = FUNC_8(VAR_4);
 int VAR_6;

 FUNC_11(VAR_5, VAR_1, VAR_0);
 (void) FUNC_9(VAR_5, VAR_1);

 if (VAR_5->enable_fb)
  FUNC_6(VAR_5);

 VAR_6 = FUNC_10(VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5->enable_fb)
  FUNC_0(VAR_5);

 FUNC_5(VAR_5->fman);
 VAR_5->suspend_locked = 0;
 FUNC_3(&VAR_5->reservation_sem);
 if (VAR_5->suspend_state)
  FUNC_7(VAR_5->dev);

 if (VAR_5->enable_fb)
  FUNC_4(VAR_5);

 return 0;
}
