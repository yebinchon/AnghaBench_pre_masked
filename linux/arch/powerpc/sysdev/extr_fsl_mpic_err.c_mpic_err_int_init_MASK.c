
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpic {int err_regs; int irqhost; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (unsigned int,int ,int ,char*,struct mpic*) ;

void FUNC_4(struct mpic *VAR_2, irq_hw_number_t VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2->irqhost, VAR_3);
 if (!VAR_4) {
  FUNC_2("Error interrupt setup failed\n");
  return;
 }


 FUNC_1(VAR_2->err_regs, ~0);

 VAR_5 = FUNC_3(VAR_4, VAR_1, VAR_0,
      "mpic-error-int", VAR_2);
 if (VAR_5)
  FUNC_2("Failed to register error interrupt handler\n");
}
