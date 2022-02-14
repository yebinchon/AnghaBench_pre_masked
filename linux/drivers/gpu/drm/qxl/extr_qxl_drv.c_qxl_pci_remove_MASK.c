
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_device {int dummy; } ;
struct pci_dev {int dummy; } ;
struct drm_device {struct qxl_device* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct qxl_device*) ;
 struct drm_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct qxl_device*) ;
 int FUNC_6 (struct qxl_device*) ;
 int FUNC_7 (struct pci_dev*,int ) ;

__attribute__((used)) static void
FUNC_8(struct pci_dev *VAR_1)
{
 struct drm_device *VAR_2 = FUNC_4(VAR_1);
 struct qxl_device *VAR_3 = VAR_2->dev_private;

 FUNC_1(VAR_2);

 FUNC_6(VAR_3);
 FUNC_5(VAR_3);
 if (FUNC_2(VAR_1))
  FUNC_7(VAR_1, VAR_0);

 VAR_2->dev_private = ((void*)0);
 FUNC_3(VAR_3);
 FUNC_0(VAR_2);
}
