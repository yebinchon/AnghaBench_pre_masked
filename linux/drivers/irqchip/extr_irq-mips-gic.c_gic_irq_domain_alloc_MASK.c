
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fwspec {scalar_t__* param; } ;
struct irq_domain {int dummy; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct irq_domain*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3, void *VAR_4)
{
 struct irq_fwspec *VAR_5 = VAR_4;
 irq_hw_number_t VAR_6;

 if (VAR_5->param[0] == VAR_0)
  VAR_6 = FUNC_1(VAR_5->param[1]);
 else
  VAR_6 = FUNC_0(VAR_5->param[1]);

 return FUNC_2(VAR_1, VAR_2, VAR_6);
}
