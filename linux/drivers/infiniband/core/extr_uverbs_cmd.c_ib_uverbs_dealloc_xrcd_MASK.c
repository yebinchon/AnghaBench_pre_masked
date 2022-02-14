
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uverbs_attr_bundle {int driver_udata; TYPE_1__* ufile; } ;
struct inode {int dummy; } ;
struct ib_xrcd {int usecnt; struct inode* inode; } ;
struct ib_uverbs_device {int dummy; } ;
struct ib_uobject {int dummy; } ;
typedef enum rdma_remove_reason { ____Placeholder_rdma_remove_reason } rdma_remove_reason ;
struct TYPE_2__ {struct ib_uverbs_device* device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ib_xrcd*,int *) ;
 scalar_t__ FUNC_3 (int,int,struct ib_uobject*) ;
 int FUNC_4 (struct ib_uverbs_device*,struct inode*) ;

int FUNC_5(struct ib_uobject *VAR_0, struct ib_xrcd *VAR_1,
      enum rdma_remove_reason VAR_2,
      struct uverbs_attr_bundle *VAR_3)
{
 struct inode *VAR_4;
 int VAR_5;
 struct ib_uverbs_device *VAR_6 = VAR_3->ufile->device;

 VAR_4 = VAR_1->inode;
 if (VAR_4 && !FUNC_0(&VAR_1->usecnt))
  return 0;

 VAR_5 = FUNC_2(VAR_1, &VAR_3->driver_udata);

 if (FUNC_3(VAR_5, VAR_2, VAR_0)) {
  FUNC_1(&VAR_1->usecnt);
  return VAR_5;
 }

 if (VAR_4)
  FUNC_4(VAR_6, VAR_4);

 return VAR_5;
}
