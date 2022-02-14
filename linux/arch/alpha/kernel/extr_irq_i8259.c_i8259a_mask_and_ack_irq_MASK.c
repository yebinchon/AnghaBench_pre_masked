
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct irq_data *VAR_1)
{
 unsigned int VAR_2 = VAR_1->irq;

 FUNC_2(&VAR_0);
 FUNC_0(VAR_2);


 if (VAR_2 >= 8) {
  FUNC_1(0xE0 | (VAR_2 - 8), 0xa0);
  VAR_2 = 2;
 }
 FUNC_1(0xE0 | VAR_2, 0x20);
 FUNC_3(&VAR_0);
}
