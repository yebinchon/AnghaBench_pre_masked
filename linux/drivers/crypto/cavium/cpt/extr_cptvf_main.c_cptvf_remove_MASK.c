
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct cpt_vf {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpt_vf*,int ) ;
 scalar_t__ FUNC_1 (struct cpt_vf*) ;
 int FUNC_2 (struct cpt_vf*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,struct cpt_vf*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int ) ;
 struct cpt_vf* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_12(struct pci_dev *VAR_2)
{
 struct cpt_vf *VAR_3 = FUNC_8(VAR_2);

 if (!VAR_3) {
  FUNC_4(&VAR_2->dev, "Invalid CPT-VF device\n");
  return;
 }


 if (FUNC_1(VAR_3)) {
  FUNC_4(&VAR_2->dev, "PF not responding to DOWN msg");
 } else {
  FUNC_0(VAR_3, VAR_0);
  FUNC_0(VAR_3, VAR_1);
  FUNC_5(FUNC_9(VAR_2, VAR_0), VAR_3);
  FUNC_5(FUNC_9(VAR_2, VAR_1), VAR_3);
  FUNC_7(VAR_3->pdev);
  FUNC_2(VAR_3);
  FUNC_11(VAR_2, ((void*)0));
  FUNC_10(VAR_2);
  FUNC_6(VAR_2);
  FUNC_3();
 }
}
