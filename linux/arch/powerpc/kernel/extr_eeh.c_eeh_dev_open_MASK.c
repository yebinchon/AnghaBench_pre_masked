
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct eeh_dev {TYPE_1__* pe; } ;
struct TYPE_2__ {int pass_dev_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct eeh_dev* FUNC_4 (struct pci_dev*) ;

int FUNC_5(struct pci_dev *VAR_2)
{
 struct eeh_dev *VAR_3;
 int VAR_4 = -VAR_0;

 FUNC_2(&VAR_1);


 if (!VAR_2)
  goto out;


 VAR_3 = FUNC_4(VAR_2);
 if (!VAR_3 || !VAR_3->pe)
  goto out;







 VAR_4 = FUNC_1(VAR_3->pe);
 if (VAR_4)
  goto out;


 FUNC_0(&VAR_3->pe->pass_dev_cnt);
 FUNC_3(&VAR_1);

 return 0;
out:
 FUNC_3(&VAR_1);
 return VAR_4;
}
