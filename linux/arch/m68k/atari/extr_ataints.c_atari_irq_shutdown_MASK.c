
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (struct irq_data*) ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_4)
{
 unsigned int VAR_5 = VAR_4->irq;

 FUNC_0(VAR_5);
 FUNC_1(VAR_5);
 FUNC_2(VAR_4);

 if (VAR_5 == VAR_0)
     VAR_3[VAR_1] = VAR_2;
}
