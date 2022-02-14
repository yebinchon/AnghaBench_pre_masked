
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
typedef int irq_hw_number_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_4, unsigned int VAR_5,
     irq_hw_number_t VAR_6)
{
 switch (VAR_6) {
 case 128:



  FUNC_1(VAR_5);
  FUNC_0(VAR_5, &VAR_3,
      VAR_1);
  break;
 default:
  FUNC_0(VAR_5, &VAR_2,
      VAR_0);
  break;
 }

 return 0;
}
