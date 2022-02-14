
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_bucket {size_t pil; struct irq_bucket* next; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 size_t VAR_1 ;
 struct irq_bucket** VAR_2 ;
 int VAR_3 ;
 struct irq_bucket* VAR_4 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(unsigned int VAR_5)
{
 struct irq_bucket *VAR_6, **VAR_7;
 unsigned long VAR_8;

 FUNC_0(VAR_5 >= VAR_0);

 FUNC_1(&VAR_3, VAR_8);

 VAR_6 = &VAR_4[VAR_5];
 FUNC_0(VAR_6->pil >= VAR_1);
 VAR_7 = &VAR_2[VAR_6->pil];
 while (*VAR_7 != VAR_6)
  VAR_7 = &(*VAR_7)->next;
 *VAR_7 = VAR_6->next;

 FUNC_2(&VAR_3, VAR_8);
}
