
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_desc {int lock; } ;
struct irq_chip {int dummy; } ;
struct brcmstb_l2_intc_data {int domain; int mask_offset; int gc; int status_offset; } ;


 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct irq_desc*) ;
 struct irq_chip* FUNC_5 (struct irq_desc*) ;
 struct brcmstb_l2_intc_data* FUNC_6 (struct irq_desc*) ;
 int FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct irq_desc *VAR_0)
{
 struct brcmstb_l2_intc_data *VAR_1 = FUNC_6(VAR_0);
 struct irq_chip *VAR_2 = FUNC_5(VAR_0);
 unsigned int VAR_3;
 u32 VAR_4;

 FUNC_0(VAR_2, VAR_0);

 VAR_4 = FUNC_8(VAR_1->gc, VAR_1->status_offset) &
  ~(FUNC_8(VAR_1->gc, VAR_1->mask_offset));

 if (VAR_4 == 0) {
  FUNC_9(&VAR_0->lock);
  FUNC_4(VAR_0);
  FUNC_10(&VAR_0->lock);
  goto out;
 }

 do {
  VAR_3 = FUNC_2(VAR_4) - 1;
  VAR_4 &= ~(1 << VAR_3);
  FUNC_3(FUNC_7(VAR_1->domain, VAR_3));
 } while (VAR_4);
out:
 FUNC_1(VAR_2, VAR_0);
}
