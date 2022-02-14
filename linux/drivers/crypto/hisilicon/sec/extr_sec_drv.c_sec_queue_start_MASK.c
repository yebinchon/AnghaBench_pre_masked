
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_queue {scalar_t__ regs; scalar_t__ expected; int task_irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sec_queue*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sec_queue *VAR_3)
{
 FUNC_1(VAR_3);
 FUNC_0(VAR_3->task_irq);
 VAR_3->expected = 0;
 FUNC_2(VAR_1, VAR_3->regs + VAR_2);
 FUNC_2(0x1, VAR_3->regs + VAR_0);
}
