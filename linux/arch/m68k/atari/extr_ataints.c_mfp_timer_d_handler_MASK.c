
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfptimerbase {int mfptimer_irq; unsigned char int_mask; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct mfptimerbase *VAR_3 = VAR_2;
 int VAR_4;
 unsigned char VAR_5;

 VAR_4 = VAR_3->mfptimer_irq;
 VAR_5 = VAR_3->int_mask;
 for (; VAR_5; VAR_4++, VAR_5 >>= 1) {
  if (VAR_5 & 1)
   FUNC_0(VAR_4);
 }
 return VAR_0;
}
