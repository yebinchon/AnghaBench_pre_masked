
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int name; } ;
struct device {int dummy; } ;
struct pci_dev {scalar_t__ devfn; TYPE_1__* bus; struct device dev; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int ,char*) ;
 struct resource* FUNC_3 (int,int,char*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct resource *VAR_3;

 if ((!FUNC_2(VAR_0, "MacBookPro11,4") &&
      !FUNC_2(VAR_0, "MacBookPro11,5")) ||
     VAR_1->bus->number != 0 || VAR_1->devfn != FUNC_0(0x1c, 0))
  return;

 VAR_3 = FUNC_3(0x7fa00000, 0x200000,
     "MacBook Pro poweroff workaround");
 if (VAR_3)
  FUNC_1(VAR_2, "claimed %s %pR\n", VAR_3->name, VAR_3);
 else
  FUNC_1(VAR_2, "can't work around MacBook Pro poweroff issue\n");
}
