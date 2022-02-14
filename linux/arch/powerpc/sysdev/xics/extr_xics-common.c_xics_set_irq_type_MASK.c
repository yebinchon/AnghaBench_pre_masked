
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct irq_data*,unsigned int) ;

int FUNC_1(struct irq_data *VAR_6, unsigned int VAR_7)
{







 if (VAR_7 == VAR_2 || VAR_7 == VAR_5)
  VAR_7 = VAR_3;

 if (VAR_7 != VAR_3 &&
     VAR_7 != VAR_4)
  return -VAR_0;

 FUNC_0(VAR_6, VAR_7);

 return VAR_1;
}
