
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct drm_device {int switch_power_state; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct drm_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*,int,int,int) ;
 struct pci_dev* FUNC_11 (struct device*) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_11(VAR_5);
 struct drm_device *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 if (!FUNC_9(VAR_7)) {
  FUNC_6(VAR_5);
  return -VAR_2;
 }

 VAR_7->switch_power_state = VAR_0;
 FUNC_0(VAR_7);

 VAR_8 = FUNC_10(VAR_7, 0, 0, 0);
 FUNC_4(VAR_6);
 FUNC_1(VAR_6);
 FUNC_3(VAR_6);
 if (FUNC_8())
  FUNC_5(VAR_6, VAR_3);
 else if (!FUNC_7())
  FUNC_5(VAR_6, VAR_4);
 VAR_7->switch_power_state = VAR_1;

 return 0;
}
