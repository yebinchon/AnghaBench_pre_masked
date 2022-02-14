
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct iommu_group_attribute {int (* show ) (struct iommu_group*,char*) ;} ;
struct iommu_group {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct iommu_group*,char*) ;
 struct iommu_group* FUNC_1 (struct kobject*) ;
 struct iommu_group_attribute* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1,
         struct attribute *VAR_2, char *VAR_3)
{
 struct iommu_group_attribute *VAR_4 = FUNC_2(VAR_2);
 struct iommu_group *VAR_5 = FUNC_1(VAR_1);
 ssize_t VAR_6 = -VAR_0;

 if (VAR_4->show)
  VAR_6 = VAR_4->show(VAR_5, VAR_3);
 return VAR_6;
}
