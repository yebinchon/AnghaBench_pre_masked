
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct iommu_group {int notifier; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;


 unsigned long VAR_1 ;


 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,unsigned long,struct device*) ;
 struct iommu_group* FUNC_1 (struct device*) ;
 int FUNC_2 (struct iommu_group*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_8,
         unsigned long VAR_9, void *VAR_10)
{
 unsigned long VAR_11 = 0;
 struct device *VAR_12 = VAR_10;
 struct iommu_group *VAR_13;





 if (VAR_9 == VAR_0) {
  int VAR_14;

  VAR_14 = FUNC_3(VAR_12);
  return (VAR_14) ? VAR_6 : VAR_7;
 } else if (VAR_9 == VAR_1) {
  FUNC_4(VAR_12);
  return VAR_7;
 }





 VAR_13 = FUNC_1(VAR_12);
 if (!VAR_13)
  return 0;

 switch (VAR_9) {
 case 131:
  VAR_11 = VAR_2;
  break;
 case 130:
  VAR_11 = VAR_3;
  break;
 case 129:
  VAR_11 = VAR_4;
  break;
 case 128:
  VAR_11 = VAR_5;
  break;
 }

 if (VAR_11)
  FUNC_0(&VAR_13->notifier,
          VAR_11, VAR_12);

 FUNC_2(VAR_13);
 return 0;
}
