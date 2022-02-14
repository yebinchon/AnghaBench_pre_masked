
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {TYPE_2__* driver; int dev; } ;
struct net_device {int dummy; } ;
struct bnxt_en_dev {int flags; struct pci_dev* pdev; } ;
struct bnxt {struct bnxt_en_dev* (* ulp_probe ) (struct net_device*) ;} ;
struct TYPE_3__ {int owner; } ;
struct TYPE_4__ {TYPE_1__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bnxt_en_dev* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct bnxt_en_dev*) ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,char*,int ) ;
 struct bnxt* FUNC_4 (struct net_device*) ;
 struct bnxt_en_dev* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static struct bnxt_en_dev *FUNC_7(struct net_device *VAR_4)
{
 struct bnxt *VAR_5 = FUNC_4(VAR_4);
 struct bnxt_en_dev *VAR_6;
 struct pci_dev *VAR_7;


 if (!VAR_5->ulp_probe)
  return FUNC_0(-VAR_1);

 VAR_6 = VAR_5->ulp_probe(VAR_4);
 if (FUNC_1(VAR_6))
  return VAR_6;

 VAR_7 = VAR_6->pdev;
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 if (!(VAR_6->flags & VAR_0)) {
  FUNC_3(&VAR_7->dev,
   "%s: probe error: RoCE is not supported on this device",
   VAR_3);
  return FUNC_0(-VAR_2);
 }


 if (!FUNC_6(VAR_7->driver->driver.owner))
  return FUNC_0(-VAR_2);

 FUNC_2(VAR_4);

 return VAR_6;
}
