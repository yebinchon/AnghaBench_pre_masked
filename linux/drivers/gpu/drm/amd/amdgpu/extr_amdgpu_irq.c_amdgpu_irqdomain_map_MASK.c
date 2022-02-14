
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
typedef scalar_t__ irq_hw_number_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_4,
    unsigned int VAR_5, irq_hw_number_t VAR_6)
{
 if (VAR_6 >= VAR_0)
  return -VAR_1;

 FUNC_0(VAR_5,
     &VAR_2, VAR_3);
 return 0;
}
