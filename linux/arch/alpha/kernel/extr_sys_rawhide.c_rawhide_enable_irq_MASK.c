
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 unsigned int* VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void
FUNC_4(struct irq_data *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 unsigned int VAR_5 = VAR_2->irq;

 VAR_5 -= 16;
 VAR_4 = VAR_5 / 24;
 if (!FUNC_0(VAR_4))
  return;

 VAR_5 -= VAR_4 * 24;
 VAR_3 = 1 << VAR_5;

 FUNC_2(&VAR_1);
 VAR_3 |= VAR_0[VAR_4];
 VAR_0[VAR_4] = VAR_3;
 FUNC_1(VAR_4, VAR_3);
 FUNC_3(&VAR_1);
}
