
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_domain {int dummy; } ;
struct irq_chip {int dummy; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 struct irq_chip VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (unsigned int,struct irq_chip*,int ) ;
 struct irq_chip VAR_4 ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_5, unsigned int VAR_6,
    irq_hw_number_t VAR_7)
{
 struct irq_chip *VAR_8;

 if (VAR_3.type == VAR_0)
  VAR_8 = &VAR_4;
 else
  VAR_8 = &VAR_1;

 FUNC_0(VAR_6, VAR_8, VAR_2);

 return 0;
}
