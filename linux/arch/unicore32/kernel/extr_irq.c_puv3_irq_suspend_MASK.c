
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puv3_irq_state {int saved; int icmr; int iclr; int iccr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct puv3_irq_state VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct puv3_irq_state *VAR_10 = &VAR_9;

 VAR_10->saved = 1;
 VAR_10->icmr = FUNC_0(VAR_7);
 VAR_10->iclr = FUNC_0(VAR_6);
 VAR_10->iccr = FUNC_0(VAR_5);




 FUNC_1(FUNC_0(VAR_7) & ~(0x1ff), VAR_7);




 FUNC_1(FUNC_0(VAR_8) & VAR_4, VAR_2);
 FUNC_1(FUNC_0(VAR_8) & VAR_3, VAR_1);




 FUNC_1(FUNC_0(VAR_0), VAR_0);

 return 0;
}
