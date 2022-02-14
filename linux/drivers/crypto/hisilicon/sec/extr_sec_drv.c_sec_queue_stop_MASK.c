
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_queue {scalar_t__ regs; int task_irq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sec_queue*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sec_queue *VAR_1)
{
 FUNC_0(VAR_1->task_irq);
 FUNC_1(VAR_1);
 FUNC_2(0x0, VAR_1->regs + VAR_0);
}
