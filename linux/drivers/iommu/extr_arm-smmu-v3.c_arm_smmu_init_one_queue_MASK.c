
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_n_shift; scalar_t__ cons; scalar_t__ prod; } ;
struct arm_smmu_queue {size_t base_dma; size_t ent_dwords; int q_base; TYPE_1__ llq; void* cons_reg; void* prod_reg; scalar_t__ base; } ;
struct arm_smmu_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (size_t) ;
 void* FUNC_2 (unsigned long,struct arm_smmu_device*) ;
 int FUNC_3 (int ,char*,size_t,char const*) ;
 int FUNC_4 (int ,char*,int,char const*) ;
 scalar_t__ FUNC_5 (int ,size_t,size_t*,int ) ;

__attribute__((used)) static int FUNC_6(struct arm_smmu_device *VAR_6,
       struct arm_smmu_queue *VAR_7,
       unsigned long VAR_8,
       unsigned long VAR_9,
       size_t VAR_10, const char *VAR_11)
{
 size_t VAR_12;

 do {
  VAR_12 = ((1 << VAR_7->llq.max_n_shift) * VAR_10) << 3;
  VAR_7->base = FUNC_5(VAR_6->dev, VAR_12, &VAR_7->base_dma,
           VAR_1);
  if (VAR_7->base || VAR_12 < VAR_2)
   break;

  VAR_7->llq.max_n_shift--;
 } while (1);

 if (!VAR_7->base) {
  FUNC_3(VAR_6->dev,
   "failed to allocate queue (0x%zx bytes) for %s\n",
   VAR_12, VAR_11);
  return -VAR_0;
 }

 if (!FUNC_1(VAR_7->base_dma & (VAR_12 - 1))) {
  FUNC_4(VAR_6->dev, "allocated %u entries for %s\n",
    1 << VAR_7->llq.max_n_shift, VAR_11);
 }

 VAR_7->prod_reg = FUNC_2(VAR_8, VAR_6);
 VAR_7->cons_reg = FUNC_2(VAR_9, VAR_6);
 VAR_7->ent_dwords = VAR_10;

 VAR_7->q_base = VAR_5;
 VAR_7->q_base |= VAR_7->base_dma & VAR_3;
 VAR_7->q_base |= FUNC_0(VAR_4, VAR_7->llq.max_n_shift);

 VAR_7->llq.prod = VAR_7->llq.cons = 0;
 return 0;
}
