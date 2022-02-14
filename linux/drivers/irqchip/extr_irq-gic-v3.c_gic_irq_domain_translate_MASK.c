
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fwspec {int param_count; int* param; int fwnode; } ;
struct irq_domain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_5,
        struct irq_fwspec *VAR_6,
        unsigned long *VAR_7,
        unsigned int *VAR_8)
{
 if (FUNC_2(VAR_6->fwnode)) {
  if (VAR_6->param_count < 3)
   return -VAR_0;

  switch (VAR_6->param[0]) {
  case 0:
   *VAR_7 = VAR_6->param[1] + 32;
   break;
  case 1:
   *VAR_7 = VAR_6->param[1] + 16;
   break;
  case 2:
   *VAR_7 = VAR_6->param[1] + VAR_2;
   break;
  case 3:
   *VAR_7 = VAR_6->param[1] + VAR_1;
   break;
  case 129:
   *VAR_7 = VAR_6->param[1];
   break;
  case 128:
   *VAR_7 = VAR_6->param[1];
   if (VAR_6->param[1] >= 16)
    *VAR_7 += VAR_1 - 16;
   else
    *VAR_7 += 16;
   break;
  default:
   return -VAR_0;
  }

  *VAR_8 = VAR_6->param[2] & VAR_4;





  FUNC_0(*VAR_8 == VAR_3 &&
   VAR_6->param[0] != 128);
  return 0;
 }

 if (FUNC_1(VAR_6->fwnode)) {
  if(VAR_6->param_count != 2)
   return -VAR_0;

  *VAR_7 = VAR_6->param[0];
  *VAR_8 = VAR_6->param[1];

  FUNC_0(*VAR_8 == VAR_3);
  return 0;
 }

 return -VAR_0;
}
