
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct drm_device {scalar_t__ open_count; } ;


 struct drm_device* FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static bool FUNC_1(struct pci_dev *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_0(VAR_0);






 return VAR_1->open_count == 0;
}
