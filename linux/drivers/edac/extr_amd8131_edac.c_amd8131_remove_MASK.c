
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {scalar_t__ devfn; } ;
struct amd8131_dev_info {scalar_t__ inst; scalar_t__ devfn; int dev; TYPE_1__* edac_dev; } ;
struct TYPE_4__ {int (* exit ) (struct amd8131_dev_info*) ;struct amd8131_dev_info* devices; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct amd8131_dev_info*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_2)
{
 struct amd8131_dev_info *VAR_3;

 for (VAR_3 = VAR_1.devices; VAR_3->inst != VAR_0;
  VAR_3++)
  if (VAR_3->devfn == VAR_2->devfn)
   break;

 if (VAR_3->inst == VAR_0)
  return;

 if (VAR_3->edac_dev) {
  FUNC_0(VAR_3->edac_dev->dev);
  FUNC_1(VAR_3->edac_dev);
 }

 if (VAR_1.exit)
  VAR_1.exit(VAR_3);

 FUNC_2(VAR_3->dev);
}
