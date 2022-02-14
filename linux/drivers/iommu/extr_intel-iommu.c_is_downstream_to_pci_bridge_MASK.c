
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {TYPE_3__* bus; TYPE_2__* subordinate; } ;
struct device {int dummy; } ;
struct TYPE_6__ {scalar_t__ number; } ;
struct TYPE_4__ {scalar_t__ end; } ;
struct TYPE_5__ {scalar_t__ number; TYPE_1__ busn_res; } ;


 int FUNC_0 (struct device*) ;
 struct pci_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static bool
FUNC_2(struct device *VAR_0, struct device *VAR_1)
{
 struct pci_dev *VAR_2, *VAR_3;

 if (!FUNC_0(VAR_0) || !FUNC_0(VAR_1))
  return 0;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_1(VAR_1);

 if (VAR_3->subordinate &&
     VAR_3->subordinate->number <= VAR_2->bus->number &&
     VAR_3->subordinate->busn_res.end >= VAR_2->bus->number)
  return 1;

 return 0;
}
