
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct edid {int dummy; } ;
struct drm_connector {TYPE_1__* dev; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 struct edid* FUNC_0 (struct drm_connector*,struct i2c_adapter*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;

struct edid *FUNC_3(struct drm_connector *VAR_0,
         struct i2c_adapter *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_0->dev->pdev;
 struct edid *VAR_3;

 FUNC_1(VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_2);

 return VAR_3;
}
