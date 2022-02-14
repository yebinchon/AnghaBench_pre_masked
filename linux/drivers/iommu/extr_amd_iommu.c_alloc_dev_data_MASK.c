
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iommu_dev_data {int dev_data_list; int rs; int devid; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iommu_dev_data* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct iommu_dev_data *FUNC_4(u16 VAR_2)
{
 struct iommu_dev_data *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_3(&VAR_3->lock);
 VAR_3->devid = VAR_2;
 FUNC_2(&VAR_3->rs);

 FUNC_1(&VAR_3->dev_data_list, &VAR_1);
 return VAR_3;
}
