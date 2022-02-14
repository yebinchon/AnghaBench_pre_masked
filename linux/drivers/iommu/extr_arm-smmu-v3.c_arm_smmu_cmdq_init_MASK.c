
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int max_n_shift; } ;
struct TYPE_3__ {TYPE_2__ llq; } ;
struct arm_smmu_cmdq {int * valid_map; int lock; int owner_prod; TYPE_1__ q; } ;
struct arm_smmu_device {int dev; struct arm_smmu_cmdq cmdq; } ;
typedef int atomic_long_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct arm_smmu_device *VAR_3)
{
 int VAR_4 = 0;
 struct arm_smmu_cmdq *VAR_5 = &VAR_3->cmdq;
 unsigned int VAR_6 = 1 << VAR_5->q.llq.max_n_shift;
 atomic_long_t *VAR_7;

 FUNC_0(&VAR_5->owner_prod, 0);
 FUNC_0(&VAR_5->lock, 0);

 VAR_7 = (atomic_long_t *)FUNC_1(VAR_6, VAR_1);
 if (!VAR_7) {
  FUNC_2(VAR_3->dev, "failed to allocate cmdq bitmap\n");
  VAR_4 = -VAR_0;
 } else {
  VAR_5->valid_map = VAR_7;
  FUNC_3(VAR_3->dev, VAR_2, VAR_7);
 }

 return VAR_4;
}
