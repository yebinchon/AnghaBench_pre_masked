
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct irq_data*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3 = FUNC_0(VAR_1);

 VAR_2 = FUNC_1(VAR_0);
 VAR_2 &= ~(1 << VAR_3);
 FUNC_2(VAR_0, VAR_2);
}
