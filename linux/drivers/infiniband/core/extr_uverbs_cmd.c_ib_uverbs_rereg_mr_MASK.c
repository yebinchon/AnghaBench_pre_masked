
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uverbs_attr_bundle {int driver_udata; } ;
struct ib_uverbs_rereg_mr_resp {int rkey; int lkey; } ;
struct ib_uverbs_rereg_mr {int flags; int start; int hca_va; scalar_t__ length; int access_flags; int pd_handle; int mr_handle; } ;
struct ib_uobject {struct ib_mr* object; } ;
struct ib_pd {int usecnt; } ;
struct ib_mr {int rkey; int lkey; struct ib_pd* pd; TYPE_2__* device; scalar_t__ dm; } ;
typedef int resp ;
typedef int cmd ;
struct TYPE_3__ {int (* rereg_user_mr ) (struct ib_mr*,int,int,scalar_t__,int,int ,struct ib_pd*,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ib_uobject*) ;
 int VAR_5 ;
 int FUNC_1 (struct ib_uobject*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ib_uverbs_rereg_mr_resp*,int ,int) ;
 int FUNC_6 (struct ib_mr*,int,int,scalar_t__,int,int ,struct ib_pd*,int *) ;
 struct ib_pd* FUNC_7 (struct ib_pd*,int ,int ,struct uverbs_attr_bundle*) ;
 struct ib_uobject* FUNC_8 (int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_9 (struct ib_pd*) ;
 int FUNC_10 (struct ib_uobject*) ;
 int FUNC_11 (struct uverbs_attr_bundle*,struct ib_uverbs_rereg_mr*,int) ;
 int FUNC_12 (struct uverbs_attr_bundle*,struct ib_uverbs_rereg_mr_resp*,int) ;

__attribute__((used)) static int FUNC_13(struct uverbs_attr_bundle *VAR_8)
{
 struct ib_uverbs_rereg_mr VAR_9;
 struct ib_uverbs_rereg_mr_resp VAR_10;
 struct ib_pd *VAR_11 = ((void*)0);
 struct ib_mr *VAR_12;
 struct ib_pd *VAR_13;
 int VAR_14;
 struct ib_uobject *VAR_15;

 VAR_14 = FUNC_11(VAR_8, &VAR_9, sizeof(VAR_9));
 if (VAR_14)
  return VAR_14;

 if (VAR_9.flags & ~VAR_3 || !VAR_9.flags)
  return -VAR_0;

 if ((VAR_9.flags & VAR_4) &&
     (!VAR_9.start || !VAR_9.hca_va || 0 >= VAR_9.length ||
      (VAR_9.start & ~VAR_5) != (VAR_9.hca_va & ~VAR_5)))
   return -VAR_0;

 VAR_15 = FUNC_8(VAR_6, VAR_9.mr_handle, VAR_8);
 if (FUNC_0(VAR_15))
  return FUNC_1(VAR_15);

 VAR_12 = VAR_15->object;

 if (VAR_12->dm) {
  VAR_14 = -VAR_0;
  goto put_uobjs;
 }

 if (VAR_9.flags & VAR_1) {
  VAR_14 = FUNC_4(VAR_9.access_flags);
  if (VAR_14)
   goto put_uobjs;
 }

 if (VAR_9.flags & VAR_2) {
  VAR_11 = FUNC_7(VAR_11, VAR_7, VAR_9.pd_handle,
           VAR_8);
  if (!VAR_11) {
   VAR_14 = -VAR_0;
   goto put_uobjs;
  }
 }

 VAR_13 = VAR_12->pd;
 VAR_14 = VAR_12->device->ops.rereg_user_mr(VAR_12, VAR_9.flags, VAR_9.start,
         VAR_9.length, VAR_9.hca_va,
         VAR_9.access_flags, VAR_11,
         &VAR_8->driver_udata);
 if (VAR_14)
  goto put_uobj_pd;

 if (VAR_9.flags & VAR_2) {
  FUNC_3(&VAR_11->usecnt);
  VAR_12->pd = VAR_11;
  FUNC_2(&VAR_13->usecnt);
 }

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.lkey = VAR_12->lkey;
 VAR_10.rkey = VAR_12->rkey;

 VAR_14 = FUNC_12(VAR_8, &VAR_10, sizeof(VAR_10));

put_uobj_pd:
 if (VAR_9.flags & VAR_2)
  FUNC_9(VAR_11);

put_uobjs:
 FUNC_10(VAR_15);

 return VAR_14;
}
