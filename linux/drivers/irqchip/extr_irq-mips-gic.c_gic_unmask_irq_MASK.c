
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct irq_data*) ;
 int VAR_0 ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1->hwirq);
 unsigned int VAR_3;

 FUNC_6(VAR_2);

 FUNC_2(VAR_2);
 VAR_3 = FUNC_1(FUNC_3(VAR_1));
 FUNC_5(VAR_2, FUNC_4(VAR_0, VAR_3));
}
