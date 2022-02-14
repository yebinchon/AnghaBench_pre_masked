
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct omap_prcm_irq_setup {int nr_regs; int* priority_mask; int nr_irqs; int irq; scalar_t__ base_irq; int reconfigure_io_chain; scalar_t__ mask; scalar_t__ ack; TYPE_1__* irqs; void* saved_mask; } ;
struct TYPE_7__ {scalar_t__ mask; scalar_t__ ack; } ;
struct TYPE_6__ {int irq_unmask; int irq_mask; int irq_ack; } ;
struct irq_chip_type {TYPE_3__ regs; TYPE_2__ chip; } ;
struct irq_chip_generic {struct irq_chip_type* chip_types; } ;
typedef int mask ;
struct TYPE_8__ {int va; } ;
struct TYPE_5__ {int offset; scalar_t__ priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int ,int,int ) ;
 struct irq_chip_generic* FUNC_1 (char*,int,scalar_t__,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct irq_chip_generic*,int,int ,int ,int ) ;
 void* FUNC_4 (int,int,int ) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int VAR_9 ;
 int FUNC_9 (char*,...) ;
 struct irq_chip_generic** VAR_10 ;
 struct omap_prcm_irq_setup* VAR_11 ;
 TYPE_4__ VAR_12 ;

int FUNC_10(struct omap_prcm_irq_setup *VAR_13)
{
 int VAR_14;
 u32 VAR_15[VAR_4];
 int VAR_16, VAR_17, VAR_18;
 struct irq_chip_generic *VAR_19;
 struct irq_chip_type *VAR_20;

 if (!VAR_13)
  return -VAR_0;

 VAR_14 = VAR_13->nr_regs;

 if (VAR_11) {
  FUNC_9("PRCM: already initialized; won't reinitialize\n");
  return -VAR_0;
 }

 if (VAR_14 > VAR_4) {
  FUNC_9("PRCM: nr_regs too large\n");
  return -VAR_0;
 }

 VAR_11 = VAR_13;

 VAR_10 = FUNC_4(VAR_14, sizeof(void *), VAR_2);
 VAR_11->saved_mask = FUNC_4(VAR_14, sizeof(u32),
          VAR_2);
 VAR_11->priority_mask = FUNC_4(VAR_14, sizeof(u32),
      VAR_2);

 if (!VAR_10 || !VAR_11->saved_mask ||
     !VAR_11->priority_mask)
  goto err;

 FUNC_5(VAR_15, 0, sizeof(VAR_15));

 for (VAR_17 = 0; VAR_17 < VAR_13->nr_irqs; VAR_17++) {
  VAR_16 = VAR_13->irqs[VAR_17].offset;
  VAR_15[VAR_16 >> 5] |= 1 << (VAR_16 & 0x1f);
  if (VAR_13->irqs[VAR_17].priority)
   VAR_13->priority_mask[VAR_16 >> 5] |=
    1 << (VAR_16 & 0x1f);
 }

 VAR_18 = VAR_13->irq;
 FUNC_2(VAR_18, VAR_9);

 VAR_13->base_irq = FUNC_0(-1, 0, VAR_13->nr_regs * 32,
  0);

 if (VAR_13->base_irq < 0) {
  FUNC_9("PRCM: failed to allocate irq descs: %d\n",
   VAR_13->base_irq);
  goto err;
 }

 for (VAR_17 = 0; VAR_17 < VAR_13->nr_regs; VAR_17++) {
  VAR_19 = FUNC_1("PRCM", 1,
   VAR_13->base_irq + VAR_17 * 32, VAR_12.va,
   VAR_5);

  if (!VAR_19) {
   FUNC_9("PRCM: failed to allocate generic chip\n");
   goto err;
  }
  VAR_20 = VAR_19->chip_types;
  VAR_20->chip.irq_ack = VAR_6;
  VAR_20->chip.irq_mask = VAR_7;
  VAR_20->chip.irq_unmask = VAR_8;

  VAR_20->regs.ack = VAR_13->ack + VAR_17 * 4;
  VAR_20->regs.mask = VAR_13->mask + VAR_17 * 4;

  FUNC_3(VAR_19, VAR_15[VAR_17], 0, VAR_3, 0);
  VAR_10[VAR_17] = VAR_19;
 }

 VAR_18 = FUNC_7("io");
 FUNC_6(VAR_18, VAR_13->reconfigure_io_chain);

 return 0;

err:
 FUNC_8();
 return -VAR_1;
}
