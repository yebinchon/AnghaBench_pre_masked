
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_svm {TYPE_1__* mm; } ;
struct intel_iommu {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int mm_users; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct intel_svm* FUNC_1 (int) ;
 struct intel_iommu* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

int FUNC_5(struct device *VAR_2, int VAR_3)
{
 struct intel_iommu *VAR_4;
 struct intel_svm *VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_3(&VAR_1);
 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4)
  goto out;

 VAR_5 = FUNC_1(VAR_3);
 if (!VAR_5)
  goto out;


 if (!VAR_5->mm)
  VAR_6 = 1;
 else if (FUNC_0(&VAR_5->mm->mm_users) > 0)
  VAR_6 = 1;
 else
  VAR_6 = 0;

 out:
 FUNC_4(&VAR_1);

 return VAR_6;
}
