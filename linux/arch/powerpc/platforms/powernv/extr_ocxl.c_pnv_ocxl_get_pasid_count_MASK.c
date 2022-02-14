
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; int devfn; } ;
struct npu_link {scalar_t__* fn_desired_actags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 struct npu_link* FUNC_3 (struct pci_dev*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct pci_dev *VAR_4, int *VAR_5)
{
 struct npu_link *VAR_6;
 int VAR_7, VAR_8 = -VAR_0;
 FUNC_4(&VAR_3);

 VAR_6 = FUNC_3(VAR_4);
 if (!VAR_6) {
  FUNC_2(&VAR_4->dev, "actag information not found\n");
  FUNC_5(&VAR_3);
  return -VAR_1;
 }

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
  if (VAR_6->fn_desired_actags[VAR_7] && (VAR_7 == FUNC_0(VAR_4->devfn))) {
   *VAR_5 = VAR_2;
   VAR_8 = 0;
   break;
  }

 FUNC_5(&VAR_3);
 FUNC_1(&VAR_4->dev, "%d PASIDs available for function\n",
  VAR_8 ? 0 : *VAR_5);
 return VAR_8;
}
