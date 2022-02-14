
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xive_irq_data {unsigned long eoi_page; unsigned long esb_shift; unsigned long trig_page; void* trig_mmio; void* eoi_mmio; int hw_irq; int src_chip; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 void* FUNC_0 (unsigned long,unsigned int) ;
 int FUNC_1 (struct xive_irq_data*,int ,int) ;
 long FUNC_2 (int ,int ,unsigned long*,unsigned long*,unsigned long*,unsigned long*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(u32 VAR_10, struct xive_irq_data *VAR_11)
{
 long VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15;
 unsigned long VAR_16;

 FUNC_1(VAR_11, 0, sizeof(*VAR_11));

 VAR_12 = FUNC_2(0, VAR_10, &VAR_13, &VAR_14, &VAR_15,
           &VAR_16);
 if (VAR_12)
  return -VAR_0;

 if (VAR_13 & VAR_6)
  VAR_11->flags |= VAR_3;
 if (VAR_13 & VAR_8)
  VAR_11->flags |= VAR_5;
 if (VAR_13 & VAR_7)
  VAR_11->flags |= VAR_4;
 VAR_11->eoi_page = VAR_14;
 VAR_11->esb_shift = VAR_16;
 VAR_11->trig_page = VAR_15;





 VAR_11->src_chip = VAR_2;

 VAR_11->eoi_mmio = FUNC_0(VAR_11->eoi_page, 1u << VAR_11->esb_shift);
 if (!VAR_11->eoi_mmio) {
  FUNC_3("Failed to map EOI page for irq 0x%x\n", VAR_10);
  return -VAR_1;
 }

 VAR_11->hw_irq = VAR_10;


 if (VAR_13 & VAR_9) {
  VAR_11->trig_mmio = VAR_11->eoi_mmio;
  return 0;
 }

 VAR_11->trig_mmio = FUNC_0(VAR_11->trig_page, 1u << VAR_11->esb_shift);
 if (!VAR_11->trig_mmio) {
  FUNC_3("Failed to map trigger page for irq 0x%x\n", VAR_10);
  return -VAR_1;
 }
 return 0;
}
