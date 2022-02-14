
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puv3_irq_state {int iccr; int iclr; int icmr; scalar_t__ saved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct puv3_irq_state VAR_8 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(void)
{
 struct puv3_irq_state *VAR_9 = &VAR_8;

 if (VAR_9->saved) {
  FUNC_0(VAR_9->iccr, VAR_5);
  FUNC_0(VAR_9->iclr, VAR_6);

  FUNC_0(VAR_4 & VAR_3, VAR_1);
  FUNC_0(VAR_2 & VAR_3, VAR_0);

  FUNC_0(VAR_9->icmr, VAR_7);
 }
}
