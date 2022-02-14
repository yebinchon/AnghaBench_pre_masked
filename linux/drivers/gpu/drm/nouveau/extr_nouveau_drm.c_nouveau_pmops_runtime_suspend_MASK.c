
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
 int FUNC_0 (struct drm_device*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct pci_dev*) ;
 struct drm_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct device*) ;
 struct pci_dev* FUNC_9 (struct device*) ;

__attribute__((used)) static int
FUNC_10(struct device *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_9(VAR_3);
 struct drm_device *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;

 if (!FUNC_1()) {
  FUNC_8(VAR_3);
  return -VAR_1;
 }

 FUNC_2();
 VAR_6 = FUNC_0(VAR_5, 1);
 FUNC_6(VAR_4);
 FUNC_3(VAR_4);
 FUNC_5(VAR_4);
 FUNC_7(VAR_4, VAR_2);
 VAR_5->switch_power_state = VAR_0;
 return VAR_6;
}
