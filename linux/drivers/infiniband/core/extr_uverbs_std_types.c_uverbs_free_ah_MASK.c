
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int driver_udata; } ;
struct ib_uobject {scalar_t__ object; } ;
struct ib_ah {int dummy; } ;
typedef enum rdma_remove_reason { ____Placeholder_rdma_remove_reason } rdma_remove_reason ;


 int VAR_0 ;
 int FUNC_0 (struct ib_ah*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct ib_uobject *VAR_1,
     enum rdma_remove_reason VAR_2,
     struct uverbs_attr_bundle *VAR_3)
{
 return FUNC_0((struct ib_ah *)VAR_1->object,
        VAR_0,
        &VAR_3->driver_udata);
}
