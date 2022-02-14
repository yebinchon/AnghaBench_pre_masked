
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dpu_kms {TYPE_2__* hw_intr; } ;
typedef enum dpu_intr_type { ____Placeholder_dpu_intr_type } dpu_intr_type ;
struct TYPE_3__ {int (* irq_idx_lookup ) (int,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

int FUNC_1(struct dpu_kms *VAR_1,
  enum dpu_intr_type VAR_2, u32 VAR_3)
{
 if (!VAR_1 || !VAR_1->hw_intr ||
   !VAR_1->hw_intr->ops.irq_idx_lookup)
  return -VAR_0;

 return VAR_1->hw_intr->ops.irq_idx_lookup(VAR_2,
   VAR_3);
}
