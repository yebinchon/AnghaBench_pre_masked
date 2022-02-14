
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sp_device {struct device* dev; } ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* dev; } ;
struct TYPE_3__ {scalar_t__ number; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static bool FUNC_3(struct sp_device *VAR_1)
{
 struct device *VAR_2, *VAR_3;
 struct pci_dev *VAR_4, *VAR_5;

 VAR_3 = VAR_1->dev;
 VAR_2 = VAR_0->dev;

 VAR_5 = FUNC_2(VAR_3);
 VAR_4 = FUNC_2(VAR_2);

 if (VAR_5->bus->number < VAR_4->bus->number)
  return 1;

 if (FUNC_1(VAR_5->devfn) < FUNC_1(VAR_4->devfn))
  return 1;

 if (FUNC_0(VAR_5->devfn) < FUNC_0(VAR_4->devfn))
  return 1;

 return 0;
}
