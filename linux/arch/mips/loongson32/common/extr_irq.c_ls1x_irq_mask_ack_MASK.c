
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 unsigned int VAR_2 = (VAR_1->irq - VAR_0) & 0x1f;
 unsigned int VAR_3 = (VAR_1->irq - VAR_0) >> 5;

 FUNC_3(FUNC_2(FUNC_1(VAR_3))
   & ~(1 << VAR_2), FUNC_1(VAR_3));
 FUNC_3(FUNC_2(FUNC_0(VAR_3))
   | (1 << VAR_2), FUNC_0(VAR_3));
}
