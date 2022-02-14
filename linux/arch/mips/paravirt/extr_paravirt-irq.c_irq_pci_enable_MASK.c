
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct irq_data {unsigned int irq; } ;


 int FUNC_0 (unsigned int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_2)
{
 u32 VAR_3 = 1u << VAR_2->irq;

 FUNC_0(VAR_3, VAR_0 + VAR_1);
}
