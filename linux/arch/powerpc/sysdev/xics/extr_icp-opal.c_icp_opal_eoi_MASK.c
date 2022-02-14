
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
typedef scalar_t__ int64_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct irq_data*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_0)
{
 unsigned int VAR_1 = (unsigned int)FUNC_2(VAR_0);
 int64_t VAR_2;

 FUNC_1();
 VAR_2 = FUNC_3((FUNC_4() << 24) | VAR_1);







 if (VAR_2 > 0)
  FUNC_0();
}
