
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 struct drm_device* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct drm_device*,int) ;
 struct pci_dev* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_5(VAR_2);
 struct drm_device *VAR_4 = FUNC_1(VAR_3);

 FUNC_3(VAR_3, VAR_1);
 FUNC_2(VAR_3);
 if (FUNC_0(VAR_3)) {
  return -VAR_0;
 }

 return FUNC_4(VAR_4, 0);
}
