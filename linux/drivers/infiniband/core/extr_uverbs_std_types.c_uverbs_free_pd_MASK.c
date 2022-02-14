
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int driver_udata; } ;
struct ib_uobject {struct ib_pd* object; } ;
struct ib_pd {int usecnt; } ;
typedef enum rdma_remove_reason { ____Placeholder_rdma_remove_reason } rdma_remove_reason ;


 int FUNC_0 (struct ib_pd*,int *) ;
 int FUNC_1 (int *,int,struct ib_uobject*) ;

__attribute__((used)) static int FUNC_2(struct ib_uobject *VAR_0,
     enum rdma_remove_reason VAR_1,
     struct uverbs_attr_bundle *VAR_2)
{
 struct ib_pd *VAR_3 = VAR_0->object;
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_3->usecnt, VAR_1, VAR_0);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_3, &VAR_2->driver_udata);
 return 0;
}
