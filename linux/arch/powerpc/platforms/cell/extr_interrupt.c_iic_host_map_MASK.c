
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
typedef int irq_hw_number_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_5, unsigned int VAR_6,
   irq_hw_number_t VAR_7)
{
 switch (VAR_7 & VAR_0) {
 case 128:
  FUNC_0(VAR_6, &VAR_3, VAR_2);
  break;
 case 129:
  FUNC_0(VAR_6, &VAR_4,
      VAR_1);
  break;
 default:
  FUNC_0(VAR_6, &VAR_3, VAR_1);
 }
 return 0;
}
