
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct hisi_qm {scalar_t__ ver; scalar_t__ fun_type; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct hisi_qm*) ;
 int FUNC_1 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct hisi_qm *VAR_5)
{
 struct pci_dev *VAR_6 = VAR_5->pdev;

 FUNC_0(FUNC_1(VAR_6, VAR_2), VAR_5);

 if (VAR_5->ver == VAR_4) {
  FUNC_0(FUNC_1(VAR_6, VAR_1), VAR_5);

  if (VAR_5->fun_type == VAR_3)
   FUNC_0(FUNC_1(VAR_6,
     VAR_0), VAR_5);
 }
}
