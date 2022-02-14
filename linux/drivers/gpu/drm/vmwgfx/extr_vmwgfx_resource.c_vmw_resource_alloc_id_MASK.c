
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_resource {int id; TYPE_1__* func; struct vmw_private* dev_priv; } ;
struct vmw_private {int resource_lock; struct idr* res_idr; } ;
struct idr {int dummy; } ;
struct TYPE_2__ {size_t res_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct idr*,struct vmw_resource*,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct vmw_resource *VAR_2)
{
 struct vmw_private *VAR_3 = VAR_2->dev_priv;
 int VAR_4;
 struct idr *VAR_5 = &VAR_3->res_idr[VAR_2->func->res_type];

 FUNC_0(VAR_2->id != -1);

 FUNC_2(VAR_0);
 FUNC_4(&VAR_3->resource_lock);

 VAR_4 = FUNC_1(VAR_5, VAR_2, 1, 0, VAR_1);
 if (VAR_4 >= 0)
  VAR_2->id = VAR_4;

 FUNC_5(&VAR_3->resource_lock);
 FUNC_3();
 return VAR_4 < 0 ? VAR_4 : 0;
}
