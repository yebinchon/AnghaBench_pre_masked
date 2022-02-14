
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct dmar_unit {int irte_cnt; int * irt; int irtids; scalar_t__ ir_enabled; } ;
typedef int dmar_irte_t ;


 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (struct dmar_unit*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct dmar_unit *VAR_0)
{

 VAR_0->ir_enabled = 0;
 if (VAR_0->irt != ((void*)0)) {
  FUNC_0(VAR_0);
  FUNC_1(VAR_0);
  FUNC_3(VAR_0->irtids);
  FUNC_2((vm_offset_t)VAR_0->irt, VAR_0->irte_cnt *
      sizeof(dmar_irte_t));
 }
}
