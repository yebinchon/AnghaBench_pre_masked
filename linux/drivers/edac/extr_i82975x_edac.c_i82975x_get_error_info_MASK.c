
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mem_ctl_info {int pdev; } ;
struct i82975x_error_info {int errsts; int errsts2; int derrsyn; int des; int xeap; int eap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int ,int *) ;
 int FUNC_1 (struct pci_dev*,int ,int *) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int,int) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct mem_ctl_info *VAR_5,
  struct i82975x_error_info *VAR_6)
{
 struct pci_dev *VAR_7;

 VAR_7 = FUNC_4(VAR_5->pdev);






 FUNC_2(VAR_7, VAR_3, &VAR_6->errsts);
 FUNC_1(VAR_7, VAR_2, &VAR_6->eap);
 FUNC_0(VAR_7, VAR_4, &VAR_6->xeap);
 FUNC_0(VAR_7, VAR_1, &VAR_6->des);
 FUNC_0(VAR_7, VAR_0, &VAR_6->derrsyn);
 FUNC_2(VAR_7, VAR_3, &VAR_6->errsts2);

 FUNC_3(VAR_7, VAR_3, 0x0003, 0x0003);







 if (!(VAR_6->errsts2 & 0x0003))
  return;

 if ((VAR_6->errsts ^ VAR_6->errsts2) & 0x0003) {
  FUNC_1(VAR_7, VAR_2, &VAR_6->eap);
  FUNC_0(VAR_7, VAR_4, &VAR_6->xeap);
  FUNC_0(VAR_7, VAR_1, &VAR_6->des);
  FUNC_0(VAR_7, VAR_0,
    &VAR_6->derrsyn);
 }
}
