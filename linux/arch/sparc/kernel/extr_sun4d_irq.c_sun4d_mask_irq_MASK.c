
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4d_handler_data {int cpuid; unsigned int real_irq; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 struct sun4d_handler_data* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_1)
{
 struct sun4d_handler_data *VAR_2 = FUNC_4(VAR_1);
 unsigned int VAR_3;




 VAR_3 = VAR_2->real_irq;





 FUNC_2(FUNC_0() | (1 << VAR_3));

}
