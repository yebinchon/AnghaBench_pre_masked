
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_resource {int id; TYPE_1__* func; struct vmw_private* dev_priv; } ;
struct vmw_private {int resource_lock; struct idr* res_idr; } ;
struct idr {int dummy; } ;
struct TYPE_2__ {size_t res_type; } ;


 int FUNC_0 (struct idr*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct vmw_resource *VAR_0)
{
 struct vmw_private *VAR_1 = VAR_0->dev_priv;
 struct idr *VAR_2 = &VAR_1->res_idr[VAR_0->func->res_type];

 FUNC_1(&VAR_1->resource_lock);
 if (VAR_0->id != -1)
  FUNC_0(VAR_2, VAR_0->id);
 VAR_0->id = -1;
 FUNC_2(&VAR_1->resource_lock);
}
