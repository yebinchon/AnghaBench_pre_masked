
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int hwirq; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_2)
{
 unsigned int VAR_3 = 1u << VAR_2->hwirq;

 if (FUNC_0(VAR_3 & ~VAR_0))
  return 0;
 FUNC_1(VAR_3, VAR_1);
 return 1;
}
