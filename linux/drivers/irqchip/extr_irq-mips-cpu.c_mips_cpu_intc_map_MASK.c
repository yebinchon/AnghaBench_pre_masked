
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_chip {int dummy; } ;
typedef int irq_hw_number_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,struct irq_chip*,int ) ;
 struct irq_chip VAR_3 ;
 struct irq_chip VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_6, unsigned int VAR_7,
        irq_hw_number_t VAR_8)
{
 struct irq_chip *VAR_9;

 if (VAR_8 < 2 && VAR_0) {

  VAR_9 = &VAR_4;
 } else {
  VAR_9 = &VAR_3;
 }

 if (VAR_1)
  FUNC_1(VAR_8, VAR_5);

 FUNC_0(VAR_7, VAR_9, VAR_2);

 return 0;
}
