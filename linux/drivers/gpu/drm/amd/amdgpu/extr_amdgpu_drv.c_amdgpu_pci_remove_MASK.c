
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct drm_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int *) ;

__attribute__((used)) static void
FUNC_6(struct pci_dev *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_4(VAR_0);

 FUNC_0("Device removal is currently not supported outside of fbcon\n");
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_0);
 FUNC_5(VAR_0, ((void*)0));
}
