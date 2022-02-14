
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_iommu_data {int larb_imu; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int *) ;
 struct mtk_iommu_data* FUNC_1 (struct device*) ;

__attribute__((used)) static inline int FUNC_2(struct device *VAR_0)
{
 struct mtk_iommu_data *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0, &VAR_1->larb_imu);
}
