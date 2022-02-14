
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spear_shirq {int mask; int offset; scalar_t__ virq_base; scalar_t__ status_reg; scalar_t__ base; } ;
struct irq_desc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 struct spear_shirq* FUNC_2 (struct irq_desc*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_desc *VAR_0)
{
 struct spear_shirq *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2;

 VAR_2 = FUNC_3(VAR_1->base + VAR_1->status_reg) & VAR_1->mask;
 VAR_2 >>= VAR_1->offset;

 while (VAR_2) {
  int VAR_3 = FUNC_0(VAR_2);

  VAR_2 &= ~(0x1 << VAR_3);
  FUNC_1(VAR_1->virq_base + VAR_3);
 }
}
