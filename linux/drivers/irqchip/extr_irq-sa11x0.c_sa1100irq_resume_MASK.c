
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100irq_state {int icmr; int iclr; int iccr; scalar_t__ saved; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sa1100irq_state VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(void)
{
 struct sa1100irq_state *VAR_5 = &VAR_4;

 if (VAR_5->saved) {
  FUNC_0(VAR_5->iccr, VAR_3 + VAR_0);
  FUNC_0(VAR_5->iclr, VAR_3 + VAR_1);

  FUNC_0(VAR_5->icmr, VAR_3 + VAR_2);
 }
}
