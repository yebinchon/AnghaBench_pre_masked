
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;
struct TYPE_2__ {int domain; } ;
struct dpu_mdss {TYPE_1__ irq_controller; scalar_t__ mmio; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (char*,int,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int) ;
 struct irq_chip* FUNC_5 (struct irq_desc*) ;
 struct dpu_mdss* FUNC_6 (struct irq_desc*) ;
 unsigned int FUNC_7 (int ,int) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct irq_desc *VAR_1)
{
 struct dpu_mdss *VAR_2 = FUNC_6(VAR_1);
 struct irq_chip *VAR_3 = FUNC_5(VAR_1);
 u32 VAR_4;

 FUNC_1(VAR_3, VAR_1);

 VAR_4 = FUNC_8(VAR_2->mmio + VAR_0);

 while (VAR_4) {
  irq_hw_number_t VAR_5 = FUNC_3(VAR_4) - 1;
  unsigned int VAR_6;
  int VAR_7;

  VAR_6 = FUNC_7(VAR_2->irq_controller.domain,
        VAR_5);
  if (VAR_6 == 0) {
   FUNC_0("couldn't find irq mapping for %lu\n", VAR_5);
   break;
  }

  VAR_7 = FUNC_4(VAR_6);
  if (VAR_7 < 0) {
   FUNC_0("handle irq fail: irq=%lu mapping=%u rc=%d\n",
      VAR_5, VAR_6, VAR_7);
   break;
  }

  VAR_4 &= ~(1 << VAR_5);
 }

 FUNC_2(VAR_3, VAR_1);
}
