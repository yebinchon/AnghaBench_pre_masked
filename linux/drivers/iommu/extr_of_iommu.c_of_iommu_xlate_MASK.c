
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {TYPE_1__* np; } ;
struct iommu_ops {int (* of_xlate ) (struct device*,struct of_phandle_args*) ;} ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct fwnode_handle fwnode; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,struct fwnode_handle*,struct iommu_ops const*) ;
 struct iommu_ops* FUNC_2 (struct fwnode_handle*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct device*,struct of_phandle_args*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1,
     struct of_phandle_args *VAR_2)
{
 const struct iommu_ops *VAR_3;
 struct fwnode_handle *VAR_4 = &VAR_2->np->fwnode;
 int VAR_5;

 VAR_3 = FUNC_2(VAR_4);
 if ((VAR_3 && !VAR_3->of_xlate) ||
     !FUNC_3(VAR_2->np))
  return VAR_0;

 VAR_5 = FUNC_1(VAR_1, &VAR_2->np->fwnode, VAR_3);
 if (VAR_5)
  return VAR_5;





 if (!VAR_3)
  return FUNC_0(VAR_1);

 return VAR_3->of_xlate(VAR_1, VAR_2);
}
