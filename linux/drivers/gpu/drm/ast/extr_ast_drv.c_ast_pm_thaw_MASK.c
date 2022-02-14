
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct drm_device*) ;
 struct drm_device* FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_2(VAR_0);
 struct drm_device *VAR_2 = FUNC_1(VAR_1);
 return FUNC_0(VAR_2);
}
