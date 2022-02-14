
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct drm_device* FUNC_4 (struct pci_dev*) ;
 int VAR_0 ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 struct pci_dev* FUNC_7 (struct device*) ;

int FUNC_8(struct device *VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_7(VAR_1);
 struct drm_device *VAR_3 = FUNC_4(VAR_2);

 FUNC_2(&VAR_0);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
 FUNC_6(VAR_3);
 FUNC_5(VAR_3);
 FUNC_3(&VAR_0);
 return 0;
}
