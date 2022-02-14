
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {struct dmar_msi_data* intrs; } ;
struct dmar_msi_data {int irq; int irq_rid; int irq_res; int intr_handle; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1, struct dmar_unit *VAR_2, int VAR_3)
{
 struct dmar_msi_data *VAR_4;

 VAR_4 = &VAR_2->intrs[VAR_3];
 if (VAR_4->irq == -1)
  return;
 FUNC_3(VAR_1, VAR_4->irq_res, VAR_4->intr_handle);
 FUNC_2(VAR_1, VAR_0, VAR_4->irq_rid, VAR_4->irq_res);
 FUNC_1(VAR_1, VAR_0, VAR_4->irq_rid);
 FUNC_0(FUNC_4(FUNC_4(VAR_1)),
     VAR_1, VAR_4->irq);
 VAR_4->irq = -1;
}
