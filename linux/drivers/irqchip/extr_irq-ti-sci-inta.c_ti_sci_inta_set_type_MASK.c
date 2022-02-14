
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct irq_data*,int ) ;

__attribute__((used)) static int FUNC_1(struct irq_data *VAR_3, unsigned int VAR_4)
{




 switch (VAR_4 & VAR_1) {
 case 129:
  FUNC_0(VAR_3, VAR_2);
  return 0;
 case 128:
  return 0;
 default:
  return -VAR_0;
 }

 return -VAR_0;
}
