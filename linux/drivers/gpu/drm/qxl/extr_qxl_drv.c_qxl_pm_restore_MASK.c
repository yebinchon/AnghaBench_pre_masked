
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_device {int dummy; } ;
struct pci_dev {int dummy; } ;
struct drm_device {struct qxl_device* dev_private; } ;
struct device {int dummy; } ;


 struct drm_device* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct drm_device*,int) ;
 int FUNC_2 (struct qxl_device*) ;
 struct pci_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_3(VAR_0);
 struct drm_device *VAR_2 = FUNC_0(VAR_1);
 struct qxl_device *VAR_3 = VAR_2->dev_private;

 FUNC_2(VAR_3);
 return FUNC_1(VAR_2, 0);
}
