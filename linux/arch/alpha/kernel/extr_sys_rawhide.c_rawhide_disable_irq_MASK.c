
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 unsigned int* VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct irq_data *VAR_3)
{
 unsigned int VAR_4, VAR_5;
 unsigned int VAR_6 = VAR_3->irq;

 VAR_6 -= 16;
 VAR_5 = VAR_6 / 24;
 if (!FUNC_0(VAR_5))
  return;

 VAR_6 -= VAR_5 * 24;
 VAR_4 = ~(1 << VAR_6) | VAR_1[VAR_5];

 FUNC_2(&VAR_2);
 VAR_4 &= VAR_0[VAR_5];
 VAR_0[VAR_5] = VAR_4;
 FUNC_1(VAR_5, VAR_4);
 FUNC_3(&VAR_2);
}
