
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(struct irq_desc *VAR_3)
{
 unsigned short VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5 = VAR_0;

 VAR_4 &= (1 << VAR_1) - 1;

 for (; VAR_4; VAR_4 >>= 1, VAR_5++) {
  if (!(VAR_4 & 1))
   continue;

  FUNC_1(VAR_5);
 }
}
