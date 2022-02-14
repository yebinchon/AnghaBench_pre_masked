
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct dmar_unit {int hw_ecap; int ir_enabled; int irte_cnt; int irtids; int * irt; int irt_phys; int dev; int qi_enabled; } ;
typedef int dmar_irte_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (struct dmar_unit*) ;
 int FUNC_2 (struct dmar_unit*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct dmar_unit*) ;
 int VAR_10 ;
 int FUNC_7 (struct dmar_unit*) ;
 int FUNC_8 (struct dmar_unit*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int,int,int ,int ,int ,int ,int ) ;
 int VAR_11 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int ,int,int,int ,int) ;

int
FUNC_13(struct dmar_unit *VAR_12)
{

 if ((VAR_12->hw_ecap & VAR_0) == 0)
  return (0);
 VAR_12->ir_enabled = 1;
 FUNC_3("hw.dmar.ir", &VAR_12->ir_enabled);
 if (!VAR_12->ir_enabled)
  return (0);
 if (!VAR_12->qi_enabled) {
  VAR_12->ir_enabled = 0;
  if (VAR_9)
   FUNC_5(VAR_12->dev,
      "QI disabled, disabling interrupt remapping\n");
  return (0);
 }
 VAR_12->irte_cnt = FUNC_4(VAR_11);
 VAR_12->irt = (dmar_irte_t *)(uintptr_t)FUNC_10(
     VAR_12->irte_cnt * sizeof(dmar_irte_t), VAR_5 | VAR_4, 0,
     VAR_10, VAR_6, 0, FUNC_0(VAR_12) ?
     VAR_7 : VAR_8);
 if (VAR_12->irt == ((void*)0))
  return (VAR_1);
 VAR_12->irt_phys = FUNC_11((vm_offset_t)VAR_12->irt);
 VAR_12->irtids = FUNC_12("dmarirt", 0, VAR_12->irte_cnt, 1, 0,
     VAR_2 | VAR_3);
 FUNC_1(VAR_12);
 FUNC_7(VAR_12);
 FUNC_8(VAR_12);
 FUNC_2(VAR_12);






 FUNC_9();

 FUNC_1(VAR_12);
 FUNC_6(VAR_12);
 FUNC_2(VAR_12);
 return (0);
}
