
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_smmu_soc {int num_tlb_lines; scalar_t__ supports_round_robin_arbitration; scalar_t__ supports_request_limit; int num_asids; } ;
struct tegra_smmu {int pfn_mask; int tlb_mask; int iommu; struct tegra_smmu_soc const* soc; struct tegra_mc* mc; struct device* dev; int regs; int lock; int groups; void* asids; } ;
struct tegra_mc {TYPE_1__* soc; int regs; struct tegra_smmu* smmu; } ;
struct device {int fwnode; } ;
struct TYPE_2__ {int num_address_bits; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct tegra_smmu* FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_8 ;
 int FUNC_7 (struct tegra_smmu*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct device*,char*,int,int) ;
 int FUNC_10 (struct device*) ;
 void* FUNC_11 (struct device*,size_t,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,struct device*,int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int VAR_11 ;
 int FUNC_19 (struct tegra_smmu*) ;
 int FUNC_20 (struct tegra_smmu*) ;
 int FUNC_21 (struct tegra_smmu*) ;
 int FUNC_22 (struct tegra_smmu*,int,int ) ;
 int FUNC_23 () ;
 int FUNC_24 (struct tegra_smmu*) ;
 int VAR_12 ;

struct tegra_smmu *FUNC_25(struct device *VAR_13,
        const struct tegra_smmu_soc *VAR_14,
        struct tegra_mc *VAR_15)
{
 struct tegra_smmu *VAR_16;
 size_t VAR_17;
 u32 VAR_18;
 int VAR_19;

 VAR_16 = FUNC_11(VAR_13, sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return FUNC_2(-VAR_1);
 VAR_15->smmu = VAR_16;

 VAR_17 = FUNC_0(VAR_14->num_asids) * sizeof(long);

 VAR_16->asids = FUNC_11(VAR_13, VAR_17, VAR_2);
 if (!VAR_16->asids)
  return FUNC_2(-VAR_1);

 FUNC_3(&VAR_16->groups);
 FUNC_18(&VAR_16->lock);

 VAR_16->regs = VAR_15->regs;
 VAR_16->soc = VAR_14;
 VAR_16->dev = VAR_13;
 VAR_16->mc = VAR_15;

 VAR_16->pfn_mask = FUNC_1(VAR_15->soc->num_address_bits - VAR_3) - 1;
 FUNC_9(VAR_13, "address bits: %u, PFN mask: %#lx\n",
  VAR_15->soc->num_address_bits, VAR_16->pfn_mask);
 VAR_16->tlb_mask = (VAR_16->soc->num_tlb_lines << 1) - 1;
 FUNC_9(VAR_13, "TLB lines: %u, mask: %#lx\n", VAR_16->soc->num_tlb_lines,
  VAR_16->tlb_mask);

 VAR_18 = VAR_7 | FUNC_5(0x3f);

 if (VAR_14->supports_request_limit)
  VAR_18 |= FUNC_6(8);

 FUNC_22(VAR_16, VAR_18, VAR_6);

 VAR_18 = VAR_9 |
  FUNC_7(VAR_16);

 if (VAR_14->supports_round_robin_arbitration)
  VAR_18 |= VAR_10;

 FUNC_22(VAR_16, VAR_18, VAR_8);

 FUNC_20(VAR_16);
 FUNC_21(VAR_16);
 FUNC_22(VAR_16, VAR_5, VAR_4);
 FUNC_19(VAR_16);

 FUNC_23();

 VAR_19 = FUNC_15(&VAR_16->iommu, VAR_13, ((void*)0), FUNC_10(VAR_13));
 if (VAR_19)
  return FUNC_2(VAR_19);

 FUNC_14(&VAR_16->iommu, &VAR_12);
 FUNC_13(&VAR_16->iommu, VAR_13->fwnode);

 VAR_19 = FUNC_12(&VAR_16->iommu);
 if (VAR_19) {
  FUNC_16(&VAR_16->iommu);
  return FUNC_2(VAR_19);
 }

 VAR_19 = FUNC_8(&VAR_11, &VAR_12);
 if (VAR_19 < 0) {
  FUNC_17(&VAR_16->iommu);
  FUNC_16(&VAR_16->iommu);
  return FUNC_2(VAR_19);
 }

 if (FUNC_4(VAR_0))
  FUNC_24(VAR_16);

 return VAR_16;
}
