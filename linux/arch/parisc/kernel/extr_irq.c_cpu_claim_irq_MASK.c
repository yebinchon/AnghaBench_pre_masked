
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,struct irq_chip*,int ) ;
 int FUNC_4 (unsigned int,void*) ;

int FUNC_5(unsigned int VAR_3, struct irq_chip *VAR_4, void *VAR_5)
{
 if (FUNC_2(VAR_3))
  return -VAR_0;
 if (FUNC_1(VAR_3) != &VAR_1)
  return -VAR_0;


 if (VAR_4) {
  FUNC_3(VAR_3, VAR_4, VAR_2);
  FUNC_4(VAR_3, VAR_5);
  FUNC_0(VAR_3);
 }
 return 0;
}
