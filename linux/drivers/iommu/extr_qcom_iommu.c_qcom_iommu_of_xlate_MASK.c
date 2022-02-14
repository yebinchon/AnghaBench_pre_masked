
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_iommu_dev {unsigned int num_ctxs; } ;
struct platform_device {int dummy; } ;
struct of_phandle_args {unsigned int* args; int args_count; TYPE_1__* np; } ;
struct iommu_fwspec {struct qcom_iommu_dev* iommu_priv; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int full_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int ,int) ;
 struct iommu_fwspec* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,unsigned int*,int) ;
 struct platform_device* FUNC_4 (TYPE_1__*) ;
 struct qcom_iommu_dev* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, struct of_phandle_args *VAR_2)
{
 struct iommu_fwspec *VAR_3 = FUNC_2(VAR_1);
 struct qcom_iommu_dev *VAR_4;
 struct platform_device *VAR_5;
 unsigned VAR_6 = VAR_2->args[0];

 if (VAR_2->args_count != 1) {
  FUNC_1(VAR_1, "incorrect number of iommu params found for %s "
   "(found %d, expected 1)\n",
   VAR_2->np->full_name, VAR_2->args_count);
  return -VAR_0;
 }

 VAR_5 = FUNC_4(VAR_2->np);
 if (FUNC_0(!VAR_5))
  return -VAR_0;

 VAR_4 = FUNC_5(VAR_5);





 if (FUNC_0(VAR_6 < 1) ||
     FUNC_0(VAR_6 > VAR_4->num_ctxs))
  return -VAR_0;

 if (!VAR_3->iommu_priv) {
  VAR_3->iommu_priv = VAR_4;
 } else {




  if (FUNC_0(VAR_4 != VAR_3->iommu_priv))
   return -VAR_0;
 }

 return FUNC_3(VAR_1, &VAR_6, 1);
}
