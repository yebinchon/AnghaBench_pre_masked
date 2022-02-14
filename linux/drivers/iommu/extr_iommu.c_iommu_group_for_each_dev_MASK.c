
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_group {int mutex; } ;


 int FUNC_0 (struct iommu_group*,void*,int (*) (struct device*,void*)) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct iommu_group *VAR_0, void *VAR_1,
        int (*VAR_2)(struct device *, void *))
{
 int VAR_3;

 FUNC_1(&VAR_0->mutex);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->mutex);

 return VAR_3;
}
