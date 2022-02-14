
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
 int FUNC_1 (struct pci_dev*) ;
 struct drm_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*,int,int) ;
 struct pci_dev* FUNC_10 (struct device*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_10(VAR_4);
 struct drm_device *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 if (!FUNC_8(VAR_6))
  return -VAR_2;

 VAR_6->switch_power_state = VAR_0;

 if (FUNC_7() ||
     !FUNC_6())
  FUNC_5(VAR_5, VAR_3);
 FUNC_3(VAR_5);
 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7)
  return VAR_7;
 FUNC_4(VAR_5);

 VAR_7 = FUNC_9(VAR_6, 0, 0);
 FUNC_0(VAR_6);
 VAR_6->switch_power_state = VAR_1;
 return 0;
}
