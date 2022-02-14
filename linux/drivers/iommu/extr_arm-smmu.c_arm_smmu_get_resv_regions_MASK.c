
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct iommu_resv_region {int list; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct iommu_resv_region* FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (struct device*,struct list_head*) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_6,
          struct list_head *VAR_7)
{
 struct iommu_resv_region *VAR_8;
 int VAR_9 = VAR_3 | VAR_1 | VAR_0;

 VAR_8 = FUNC_0(VAR_4, VAR_5,
      VAR_9, VAR_2);
 if (!VAR_8)
  return;

 FUNC_2(&VAR_8->list, VAR_7);

 FUNC_1(VAR_6, VAR_7);
}
