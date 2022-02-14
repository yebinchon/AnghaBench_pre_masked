
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uverbs_attr_bundle {int dummy; } ;
struct ib_uobject {struct ib_flow_action* object; } ;
struct ib_flow_action {TYPE_2__* device; int usecnt; } ;
typedef enum rdma_remove_reason { ____Placeholder_rdma_remove_reason } rdma_remove_reason ;
struct TYPE_3__ {int (* destroy_flow_action ) (struct ib_flow_action*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (int *,int,struct ib_uobject*) ;
 int FUNC_1 (struct ib_flow_action*) ;

__attribute__((used)) static int FUNC_2(struct ib_uobject *VAR_0,
       enum rdma_remove_reason VAR_1,
       struct uverbs_attr_bundle *VAR_2)
{
 struct ib_flow_action *VAR_3 = VAR_0->object;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3->usecnt, VAR_1, VAR_0);
 if (VAR_4)
  return VAR_4;

 return VAR_3->device->ops.destroy_flow_action(VAR_3);
}
