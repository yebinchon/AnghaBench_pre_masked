
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk_iommudata {int iommu; } ;
struct platform_device {int dummy; } ;
struct of_phandle_args {int np; } ;
struct TYPE_2__ {struct rk_iommudata* iommu; } ;
struct device {TYPE_1__ archdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rk_iommudata* FUNC_0 (int ,int,int ) ;
 int VAR_2 ;
 struct platform_device* FUNC_1 (int ) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3,
        struct of_phandle_args *VAR_4)
{
 struct platform_device *VAR_5;
 struct rk_iommudata *VAR_6;

 VAR_6 = FUNC_0(VAR_2, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4->np);

 VAR_6->iommu = FUNC_3(VAR_5);
 VAR_3->archdata.iommu = VAR_6;

 FUNC_2(VAR_5);

 return 0;
}
