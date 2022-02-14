
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_cirq_chip_data {scalar_t__ base; } ;
struct irq_data {unsigned int hwirq; struct mtk_cirq_chip_data* chip_data; } ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct mtk_cirq_chip_data *VAR_2 = VAR_0->chip_data;
 unsigned int VAR_3 = VAR_0->hwirq;
 u32 VAR_4 = 1 << (VAR_3 % 32);

 FUNC_0(VAR_4, VAR_2->base + VAR_1 + (VAR_3 / 32) * 4);
}
