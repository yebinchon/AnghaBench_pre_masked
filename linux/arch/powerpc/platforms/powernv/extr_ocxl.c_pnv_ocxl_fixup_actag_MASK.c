
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_phb {scalar_t__ type; } ;
struct pci_dev {int devfn; int dev; int bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;
struct npu_link {scalar_t__* fn_desired_actags; } ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*) ;
 struct npu_link* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int,int*) ;
 int FUNC_5 (struct pci_dev*,int*) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct pci_controller* FUNC_9 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_3)
{
 struct pci_controller *VAR_4 = FUNC_9(VAR_3->bus);
 struct pnv_phb *VAR_5 = VAR_4->private_data;
 struct npu_link *VAR_6;
 int VAR_7, VAR_8 = -1, VAR_9, VAR_10;

 if (!FUNC_6(VAR_2))
  return;

 if (VAR_5->type != VAR_0)
  return;

 FUNC_7(&VAR_1);

 VAR_6 = FUNC_3(VAR_3);
 if (!VAR_6) {
  FUNC_2(&VAR_3->dev, "couldn't update actag information\n");
  FUNC_8(&VAR_1);
  return;
 }





 VAR_7 = FUNC_5(VAR_3, &VAR_8);
 if (VAR_7) {

  FUNC_1(&VAR_3->dev, "couldn't find AFU information\n");
  VAR_8 = -1;
 }

 VAR_6->fn_desired_actags[FUNC_0(VAR_3->devfn)] = 0;
 for (VAR_9 = 0; VAR_9 <= VAR_8; VAR_9++) {




  VAR_7 = FUNC_4(VAR_3, VAR_9, &VAR_10);
  if (VAR_7)
   continue;
  VAR_6->fn_desired_actags[FUNC_0(VAR_3->devfn)] += VAR_10;
 }
 FUNC_1(&VAR_3->dev, "total actags for function: %d\n",
  VAR_6->fn_desired_actags[FUNC_0(VAR_3->devfn)]);

 FUNC_8(&VAR_1);
}
