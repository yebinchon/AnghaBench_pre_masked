
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_domain {struct intel_iommu* host_data; } ;
struct irq_data {int hwirq; int * chip; struct intel_ir_data* chip_data; } ;
struct irq_cfg {int dummy; } ;
struct irq_alloc_info {scalar_t__ type; int flags; } ;
struct TYPE_2__ {int sub_handle; } ;
struct intel_ir_data {TYPE_1__ irq_2_iommu; } ;
struct intel_iommu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct intel_iommu*,TYPE_1__*,unsigned int) ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct irq_domain*,unsigned int,int) ;
 int VAR_8 ;
 int FUNC_3 (struct intel_ir_data*,struct irq_cfg*,struct irq_alloc_info*,int,int) ;
 int FUNC_4 (struct irq_domain*,unsigned int,unsigned int,void*) ;
 int FUNC_5 (struct irq_domain*,unsigned int,unsigned int) ;
 struct irq_data* FUNC_6 (struct irq_domain*,unsigned int) ;
 int FUNC_7 (unsigned int,int ) ;
 struct irq_cfg* FUNC_8 (struct irq_data*) ;
 int FUNC_9 (struct intel_ir_data*) ;
 struct intel_ir_data* FUNC_10 (int,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct irq_domain *VAR_9,
         unsigned int VAR_10, unsigned int VAR_11,
         void *VAR_12)
{
 struct intel_iommu *VAR_13 = VAR_9->host_data;
 struct irq_alloc_info *VAR_14 = VAR_12;
 struct intel_ir_data *VAR_15, *VAR_16;
 struct irq_data *VAR_17;
 struct irq_cfg *VAR_18;
 int VAR_19, VAR_20, VAR_21;

 if (!VAR_14 || !VAR_13)
  return -VAR_0;
 if (VAR_11 > 1 && VAR_14->type != VAR_5 &&
     VAR_14->type != VAR_6)
  return -VAR_0;





 if (VAR_14->type == VAR_5)
  VAR_14->flags &= ~VAR_4;

 VAR_20 = FUNC_4(VAR_9, VAR_10, VAR_11, VAR_12);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = -VAR_1;
 VAR_15 = FUNC_10(sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  goto out_free_parent;

 FUNC_1(&VAR_7);
 VAR_21 = FUNC_0(VAR_13, &VAR_15->irq_2_iommu, VAR_11);
 FUNC_12(&VAR_7);
 if (VAR_21 < 0) {
  FUNC_11("Failed to allocate IRTE\n");
  FUNC_9(VAR_15);
  goto out_free_parent;
 }

 for (VAR_19 = 0; VAR_19 < VAR_11; VAR_19++) {
  VAR_17 = FUNC_6(VAR_9, VAR_10 + VAR_19);
  VAR_18 = FUNC_8(VAR_17);
  if (!VAR_17 || !VAR_18) {
   VAR_20 = -VAR_0;
   goto out_free_data;
  }

  if (VAR_19 > 0) {
   VAR_16 = FUNC_10(sizeof(*VAR_16), VAR_2);
   if (!VAR_16)
    goto out_free_data;

   VAR_16->irq_2_iommu = VAR_15->irq_2_iommu;
   VAR_16->irq_2_iommu.sub_handle = VAR_19;
  } else {
   VAR_16 = VAR_15;
  }

  VAR_17->hwirq = (VAR_21 << 16) + VAR_19;
  VAR_17->chip_data = VAR_16;
  VAR_17->chip = &VAR_8;
  FUNC_3(VAR_16, VAR_18, VAR_14, VAR_21, VAR_19);
  FUNC_7(VAR_10 + VAR_19, VAR_3);
 }
 return 0;

out_free_data:
 FUNC_2(VAR_9, VAR_10, VAR_19);
out_free_parent:
 FUNC_5(VAR_9, VAR_10, VAR_11);
 return VAR_20;
}
