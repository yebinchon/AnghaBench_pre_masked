
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct irq_data *VAR_1)
{
 FUNC_1(0x100 << (VAR_1->irq - VAR_0));
 FUNC_0();
}
