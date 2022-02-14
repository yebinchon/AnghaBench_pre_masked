
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_cmd {int dummy; } ;
struct amd_iommu {int lock; scalar_t__ cmd_sem; int need_sync; } ;


 int FUNC_0 (struct amd_iommu*,struct iommu_cmd*,int) ;
 int FUNC_1 (struct iommu_cmd*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (scalar_t__*) ;

__attribute__((used)) static int FUNC_5(struct amd_iommu *VAR_0)
{
 struct iommu_cmd VAR_1;
 unsigned long VAR_2;
 int VAR_3;

 if (!VAR_0->need_sync)
  return 0;


 FUNC_1(&VAR_1, (u64)&VAR_0->cmd_sem);

 FUNC_2(&VAR_0->lock, VAR_2);

 VAR_0->cmd_sem = 0;

 VAR_3 = FUNC_0(VAR_0, &VAR_1, 0);
 if (VAR_3)
  goto out_unlock;

 VAR_3 = FUNC_4(&VAR_0->cmd_sem);

out_unlock:
 FUNC_3(&VAR_0->lock, VAR_2);

 return VAR_3;
}
