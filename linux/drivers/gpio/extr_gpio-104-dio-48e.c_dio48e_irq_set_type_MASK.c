
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long FUNC_0 (struct irq_data*) ;

__attribute__((used)) static int FUNC_1(struct irq_data *VAR_3, unsigned VAR_4)
{
 const unsigned long VAR_5 = FUNC_0(VAR_3);


 if (VAR_5 != 19 && VAR_5 != 43)
  return -VAR_0;

 if (VAR_4 != VAR_2 && VAR_4 != VAR_1)
  return -VAR_0;

 return 0;
}
