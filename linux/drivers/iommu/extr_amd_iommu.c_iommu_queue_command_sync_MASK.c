
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_cmd {int dummy; } ;
struct amd_iommu {int lock; } ;


 int FUNC_0 (struct amd_iommu*,struct iommu_cmd*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct amd_iommu *VAR_0,
        struct iommu_cmd *VAR_1,
        bool VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_0->lock, VAR_3);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->lock, VAR_3);

 return VAR_4;
}
