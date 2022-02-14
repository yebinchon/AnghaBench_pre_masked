
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int dummy; } ;
struct ib_uobject {scalar_t__ object; } ;
struct ib_mw {int dummy; } ;
typedef enum rdma_remove_reason { ____Placeholder_rdma_remove_reason } rdma_remove_reason ;


 int FUNC_0 (struct ib_mw*) ;

__attribute__((used)) static int FUNC_1(struct ib_uobject *VAR_0,
     enum rdma_remove_reason VAR_1,
     struct uverbs_attr_bundle *VAR_2)
{
 return FUNC_0((struct ib_mw *)VAR_0->object);
}
