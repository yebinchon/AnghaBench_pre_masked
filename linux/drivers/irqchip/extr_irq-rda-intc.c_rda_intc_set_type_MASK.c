
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct irq_data *VAR_3, unsigned int VAR_4)
{

 if ((VAR_4 & (VAR_1 | VAR_2)) == VAR_4)
  return 0;

 return -VAR_0;
}
