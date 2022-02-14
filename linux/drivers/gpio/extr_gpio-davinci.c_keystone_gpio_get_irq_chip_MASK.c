
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_chip {int dummy; } ;


 struct irq_chip* FUNC_0 (unsigned int) ;

__attribute__((used)) static struct irq_chip *FUNC_1(unsigned int VAR_0)
{
 static struct irq_chip VAR_1;

 VAR_1 = *FUNC_0(VAR_0);
 return &VAR_1;
}
