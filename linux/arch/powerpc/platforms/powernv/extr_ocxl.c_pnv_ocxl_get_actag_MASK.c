
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int devfn; int dev; } ;
struct npu_link {int * fn_desired_actags; TYPE_1__* fn_actags; int assignment_done; } ;
struct TYPE_2__ {int count; int start; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct npu_link*) ;
 int FUNC_2 (int *,char*) ;
 struct npu_link* FUNC_3 (struct pci_dev*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct pci_dev *VAR_2, u16 *VAR_3, u16 *VAR_4,
  u16 *VAR_5)
{
 struct npu_link *VAR_6;

 FUNC_4(&VAR_1);

 VAR_6 = FUNC_3(VAR_2);
 if (!VAR_6) {
  FUNC_2(&VAR_2->dev, "actag information not found\n");
  FUNC_5(&VAR_1);
  return -VAR_0;
 }






 if (!VAR_6->assignment_done)
  FUNC_1(VAR_6);

 *VAR_3 = VAR_6->fn_actags[FUNC_0(VAR_2->devfn)].start;
 *VAR_4 = VAR_6->fn_actags[FUNC_0(VAR_2->devfn)].count;
 *VAR_5 = VAR_6->fn_desired_actags[FUNC_0(VAR_2->devfn)];

 FUNC_5(&VAR_1);
 return 0;
}
