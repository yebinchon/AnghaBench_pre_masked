
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_group {int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iommu_group*,int *) ;
 int FUNC_1 (struct iommu_group*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,int ) ;

int FUNC_4(struct iommu_group *VAR_3, const char *VAR_4)
{
 int VAR_5;

 if (VAR_3->name) {
  FUNC_1(VAR_3, &VAR_2);
  FUNC_2(VAR_3->name);
  VAR_3->name = ((void*)0);
  if (!VAR_4)
   return 0;
 }

 VAR_3->name = FUNC_3(VAR_4, VAR_1);
 if (!VAR_3->name)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_3, &VAR_2);
 if (VAR_5) {
  FUNC_2(VAR_3->name);
  VAR_3->name = ((void*)0);
  return VAR_5;
 }

 return 0;
}
