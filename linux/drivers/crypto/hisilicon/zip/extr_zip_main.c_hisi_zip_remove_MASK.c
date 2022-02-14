
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct hisi_qm {scalar_t__ fun_type; } ;
struct hisi_zip {TYPE_1__* ctrl; struct hisi_qm qm; } ;
struct TYPE_2__ {scalar_t__ num_vfs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hisi_qm*) ;
 int FUNC_1 (struct hisi_qm*) ;
 int FUNC_2 (struct hisi_zip*) ;
 int FUNC_3 (struct hisi_zip*,int) ;
 int FUNC_4 (struct hisi_zip*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct hisi_zip* FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_1)
{
 struct hisi_zip *VAR_2 = FUNC_6(VAR_1);
 struct hisi_qm *VAR_3 = &VAR_2->qm;

 if (VAR_3->fun_type == VAR_0 && VAR_2->ctrl->num_vfs != 0)
  FUNC_5(VAR_1);

 FUNC_2(VAR_2);
 FUNC_0(VAR_3);

 if (VAR_3->fun_type == VAR_0)
  FUNC_3(VAR_2, 0);

 FUNC_1(VAR_3);
 FUNC_4(VAR_2);
}
