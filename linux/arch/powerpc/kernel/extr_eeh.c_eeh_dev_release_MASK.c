
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct eeh_dev {TYPE_1__* pe; } ;
struct TYPE_3__ {int pass_dev_cnt; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct eeh_dev* FUNC_6 (struct pci_dev*) ;

void FUNC_7(struct pci_dev *VAR_1)
{
 struct eeh_dev *VAR_2;

 FUNC_4(&VAR_0);


 if (!VAR_1)
  goto out;


 VAR_2 = FUNC_6(VAR_1);
 if (!VAR_2 || !VAR_2->pe || !FUNC_3(VAR_2->pe))
  goto out;


 FUNC_0(FUNC_1(&VAR_2->pe->pass_dev_cnt) < 0);
 FUNC_2(VAR_2->pe);
out:
 FUNC_5(&VAR_0);
}
