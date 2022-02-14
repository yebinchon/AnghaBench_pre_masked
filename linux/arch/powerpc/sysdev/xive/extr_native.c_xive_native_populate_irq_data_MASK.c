
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct xive_irq_data {unsigned int esb_shift; void* trig_mmio; void* trig_page; void* eoi_mmio; void* eoi_page; int hw_irq; void* src_chip; int flags; } ;
typedef scalar_t__ s64 ;
typedef int __be64 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (void*,unsigned int) ;
 int FUNC_3 (struct xive_irq_data*,int ,int) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int *,int *,int *) ;
 int FUNC_5 (char*,int ,...) ;

int FUNC_6(u32 VAR_12, struct xive_irq_data *VAR_13)
{
 __be64 VAR_14, VAR_15, VAR_16;
 __be32 VAR_17, VAR_18;
 u64 VAR_19;
 s64 VAR_20;

 FUNC_3(VAR_13, 0, sizeof(*VAR_13));

 VAR_20 = FUNC_4(VAR_12, &VAR_14, &VAR_15, &VAR_16,
        &VAR_17, &VAR_18);
 if (VAR_20) {
  FUNC_5("opal_xive_get_irq_info(0x%x) returned %lld\n",
         VAR_12, VAR_20);
  return -VAR_0;
 }

 VAR_19 = FUNC_1(VAR_14);
 if (VAR_19 & VAR_6)
  VAR_13->flags |= VAR_11;
 if (VAR_19 & VAR_3)
  VAR_13->flags |= VAR_8;
 if (VAR_19 & VAR_5)
  VAR_13->flags |= VAR_10;
 if (VAR_19 & VAR_4)
  VAR_13->flags |= VAR_9;
 if (VAR_19 & VAR_2)
  VAR_13->flags |= VAR_7;
 VAR_13->eoi_page = FUNC_1(VAR_15);
 VAR_13->trig_page = FUNC_1(VAR_16);
 VAR_13->esb_shift = FUNC_0(VAR_17);
 VAR_13->src_chip = FUNC_0(VAR_18);

 VAR_13->eoi_mmio = FUNC_2(VAR_13->eoi_page, 1u << VAR_13->esb_shift);
 if (!VAR_13->eoi_mmio) {
  FUNC_5("Failed to map EOI page for irq 0x%x\n", VAR_12);
  return -VAR_1;
 }

 VAR_13->hw_irq = VAR_12;

 if (!VAR_13->trig_page)
  return 0;
 if (VAR_13->trig_page == VAR_13->eoi_page) {
  VAR_13->trig_mmio = VAR_13->eoi_mmio;
  return 0;
 }

 VAR_13->trig_mmio = FUNC_2(VAR_13->trig_page, 1u << VAR_13->esb_shift);
 if (!VAR_13->trig_mmio) {
  FUNC_5("Failed to map trigger page for irq 0x%x\n", VAR_12);
  return -VAR_1;
 }
 return 0;
}
