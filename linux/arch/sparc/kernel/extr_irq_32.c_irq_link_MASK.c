
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_bucket {unsigned int pil; struct irq_bucket* next; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct irq_bucket** VAR_2 ;
 int VAR_3 ;
 struct irq_bucket* VAR_4 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(unsigned int VAR_5)
{
 struct irq_bucket *VAR_6;
 unsigned long VAR_7;
 unsigned int VAR_8;

 FUNC_0(VAR_5 >= VAR_0);

 FUNC_1(&VAR_3, VAR_7);

 VAR_6 = &VAR_4[VAR_5];
 VAR_8 = VAR_6->pil;
 FUNC_0(VAR_8 >= VAR_1);
 VAR_6->next = VAR_2[VAR_8];
 VAR_2[VAR_8] = VAR_6;

 FUNC_2(&VAR_3, VAR_7);
}
