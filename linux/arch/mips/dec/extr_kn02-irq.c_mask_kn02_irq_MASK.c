
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int irq; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_4)
{
 volatile u32 *VAR_5 = (volatile u32 *)FUNC_0(VAR_1 +
             VAR_0);

 VAR_2 &= ~(1 << (VAR_4->irq - VAR_3 + 16));
 *VAR_5 = VAR_2;
}
