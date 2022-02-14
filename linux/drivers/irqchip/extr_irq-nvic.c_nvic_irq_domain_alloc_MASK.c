
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fwspec {int dummy; } ;
struct irq_domain {int dummy; } ;
typedef scalar_t__ irq_hw_number_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct irq_domain*,unsigned int,scalar_t__) ;
 int FUNC_1 (struct irq_domain*,struct irq_fwspec*,scalar_t__*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3, void *VAR_4)
{
 int VAR_5, VAR_6;
 irq_hw_number_t VAR_7;
 unsigned int VAR_8 = VAR_0;
 struct irq_fwspec *VAR_9 = VAR_4;

 VAR_6 = FUNC_1(VAR_1, VAR_9, &VAR_7, &VAR_8);
 if (VAR_6)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_0(VAR_1, VAR_2 + VAR_5, VAR_7 + VAR_5);

 return 0;
}
