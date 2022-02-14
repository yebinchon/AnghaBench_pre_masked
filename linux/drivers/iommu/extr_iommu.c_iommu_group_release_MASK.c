
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct iommu_group {struct iommu_group* name; scalar_t__ default_domain; int id; int iommu_data; int (* iommu_data_release ) (int ) ;} ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (struct iommu_group*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 struct iommu_group* FUNC_5 (struct kobject*) ;

__attribute__((used)) static void FUNC_6(struct kobject *VAR_1)
{
 struct iommu_group *VAR_2 = FUNC_5(VAR_1);

 FUNC_3("Releasing group %d\n", VAR_2->id);

 if (VAR_2->iommu_data_release)
  VAR_2->iommu_data_release(VAR_2->iommu_data);

 FUNC_0(&VAR_0, VAR_2->id);

 if (VAR_2->default_domain)
  FUNC_1(VAR_2->default_domain);

 FUNC_2(VAR_2->name);
 FUNC_2(VAR_2);
}
