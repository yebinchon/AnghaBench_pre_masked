
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
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*,int,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct drm_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 struct pci_dev* FUNC_10 (struct device*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_10(VAR_4);
 struct drm_device *VAR_6 = FUNC_6(VAR_5);
 int VAR_7;

 if (!FUNC_0(VAR_6))
  return -VAR_2;

 VAR_6->switch_power_state = VAR_0;

 if (FUNC_3() ||
     !FUNC_2())
  FUNC_9(VAR_5, VAR_3);
 FUNC_7(VAR_5);
 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7)
  return VAR_7;
 FUNC_8(VAR_5);

 VAR_7 = FUNC_1(VAR_6, 0, 0);
 FUNC_4(VAR_6);
 VAR_6->switch_power_state = VAR_1;
 return 0;
}
