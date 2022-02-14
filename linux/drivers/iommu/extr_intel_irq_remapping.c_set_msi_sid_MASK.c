
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct set_msi_sid_data {int count; int busmatch_count; int alias; TYPE_2__* pdev; } ;
struct pci_dev {TYPE_3__* bus; } ;
struct irte {int dummy; } ;
struct TYPE_6__ {scalar_t__ number; } ;
struct TYPE_5__ {TYPE_1__* bus; } ;
struct TYPE_4__ {scalar_t__ number; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ,struct set_msi_sid_data*) ;
 int FUNC_3 (struct irte*,int ,int ,int ) ;
 int FUNC_4 (struct irte*,scalar_t__,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct irte *VAR_3, struct pci_dev *VAR_4)
{
 struct set_msi_sid_data VAR_5;

 if (!VAR_3 || !VAR_4)
  return -1;

 VAR_5.count = 0;
 VAR_5.busmatch_count = 0;
 FUNC_2(VAR_4, VAR_2, &VAR_5);
 if (FUNC_0(VAR_5.alias) != VAR_5.pdev->bus->number)
  FUNC_4(VAR_3, FUNC_0(VAR_5.alias),
        VAR_4->bus->number);
 else if (VAR_5.count >= 2 && VAR_5.busmatch_count == VAR_5.count)
  FUNC_4(VAR_3, VAR_4->bus->number, VAR_4->bus->number);
 else if (VAR_5.pdev->bus->number != VAR_4->bus->number)
  FUNC_3(VAR_3, VAR_1, VAR_0, VAR_5.alias);
 else
  FUNC_3(VAR_3, VAR_1, VAR_0,
        FUNC_1(VAR_4));

 return 0;
}
