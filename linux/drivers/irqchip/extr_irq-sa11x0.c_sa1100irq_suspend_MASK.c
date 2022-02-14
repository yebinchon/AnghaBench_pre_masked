
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100irq_state {int saved; int icmr; void* iccr; void* iclr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 struct sa1100irq_state VAR_4 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct sa1100irq_state *VAR_5 = &VAR_4;

 VAR_5->saved = 1;
 VAR_5->icmr = FUNC_0(VAR_3 + VAR_2);
 VAR_5->iclr = FUNC_0(VAR_3 + VAR_1);
 VAR_5->iccr = FUNC_0(VAR_3 + VAR_0);




 FUNC_1(VAR_5->icmr & 0xfffff000, VAR_3 + VAR_2);

 return 0;
}
