
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_device {int release_ring; int command_ring; } ;
struct pci_dev {int dummy; } ;
struct drm_device {struct qxl_device* dev_private; struct pci_dev* pdev; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qxl_device*) ;
 int FUNC_4 (struct qxl_device*,int) ;
 int FUNC_5 (struct qxl_device*) ;
 int FUNC_6 (struct qxl_device*) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;
 struct qxl_device *VAR_2 = VAR_0->dev_private;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3)
  return VAR_3;

 FUNC_3(VAR_2);
 FUNC_5(VAR_2);
 FUNC_6(VAR_2);

 while (!FUNC_2(VAR_2->command_ring));
 while (!FUNC_2(VAR_2->release_ring))
  FUNC_4(VAR_2, 1);

 FUNC_1(VAR_1);

 return 0;
}
