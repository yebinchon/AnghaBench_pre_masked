
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_ops {int dummy; } ;
struct iommu_fwspec {struct iommu_ops const* ops; struct fwnode_handle* iommu_fwnode; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iommu_fwspec* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,struct iommu_fwspec*) ;
 struct iommu_fwspec* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fwnode_handle*) ;

int FUNC_5(struct device *VAR_3, struct fwnode_handle *VAR_4,
        const struct iommu_ops *VAR_5)
{
 struct iommu_fwspec *VAR_6 = FUNC_0(VAR_3);

 if (VAR_6)
  return VAR_5 == VAR_6->ops ? 0 : -VAR_0;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 FUNC_3(FUNC_4(VAR_4));
 VAR_6->iommu_fwnode = VAR_4;
 VAR_6->ops = VAR_5;
 FUNC_1(VAR_3, VAR_6);
 return 0;
}
