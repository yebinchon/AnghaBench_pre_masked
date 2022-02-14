
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct drm_device {scalar_t__ switch_power_state; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int hpd_work; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int) ;
 TYPE_1__* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct drm_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (int *) ;
 struct pci_dev* FUNC_8 (struct device*) ;

int
FUNC_9(struct device *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_8(VAR_3);
 struct drm_device *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 if (VAR_5->switch_power_state == VAR_1 ||
     VAR_5->switch_power_state == VAR_0)
  return 0;

 FUNC_6(VAR_4, VAR_2);
 FUNC_4(VAR_4);
 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  return VAR_6;
 FUNC_5(VAR_4);

 VAR_6 = FUNC_0(VAR_5, 0);


 FUNC_7(&FUNC_1(VAR_5)->hpd_work);

 return VAR_6;
}
