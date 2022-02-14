
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct viommu_dev {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct viommu_dev* priv; } ;
struct TYPE_3__ {int driver; } ;


 TYPE_2__* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (int *,int *,struct fwnode_handle*,int ) ;
 int FUNC_2 (struct device*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static struct viommu_dev *FUNC_3(struct fwnode_handle *VAR_2)
{
 struct device *VAR_3 = FUNC_1(&VAR_1.driver, ((void*)0),
      VAR_2, VAR_0);
 FUNC_2(VAR_3);

 return VAR_3 ? FUNC_0(VAR_3)->priv : ((void*)0);
}
