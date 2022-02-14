
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uverbs_attr_bundle {int driver_udata; } ;
struct ib_uverbs_reg_mr_resp {int mr_handle; int rkey; int lkey; } ;
struct ib_uverbs_reg_mr {int start; int hca_va; int access_flags; int length; int pd_handle; } ;
struct TYPE_8__ {int type; } ;
struct ib_uobject {int id; int rkey; int lkey; struct ib_uobject* object; TYPE_4__ res; struct ib_uobject* uobject; int * sig_attrs; int * dm; int type; struct ib_pd* pd; TYPE_3__* device; } ;
struct ib_pd {int usecnt; TYPE_3__* device; } ;
struct ib_mr {int id; int rkey; int lkey; struct ib_mr* object; TYPE_4__ res; struct ib_mr* uobject; int * sig_attrs; int * dm; int type; struct ib_pd* pd; TYPE_3__* device; } ;
struct ib_device {int dummy; } ;
typedef int resp ;
typedef int cmd ;
struct TYPE_6__ {struct ib_uobject* (* reg_user_mr ) (struct ib_pd*,int,int ,int,int,int *) ;} ;
struct TYPE_5__ {int device_cap_flags; } ;
struct TYPE_7__ {TYPE_2__ ops; TYPE_1__ attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ib_uobject*) ;
 int VAR_4 ;
 int FUNC_1 (struct ib_uobject*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ib_uobject*,int ) ;
 int FUNC_5 (struct ib_uverbs_reg_mr_resp*,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_4__*) ;
 struct ib_uobject* FUNC_8 (struct ib_pd*,int,int ,int,int,int *) ;
 struct ib_uobject* FUNC_9 (int ,struct uverbs_attr_bundle*,struct ib_device**) ;
 int FUNC_10 (struct ib_uobject*,struct uverbs_attr_bundle*) ;
 int FUNC_11 (struct ib_uobject*,struct uverbs_attr_bundle*) ;
 struct ib_pd* FUNC_12 (struct ib_pd*,int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_13 (struct ib_pd*) ;
 int FUNC_14 (struct uverbs_attr_bundle*) ;
 int FUNC_15 (struct uverbs_attr_bundle*,struct ib_uverbs_reg_mr*,int) ;
 int FUNC_16 (struct uverbs_attr_bundle*,struct ib_uverbs_reg_mr_resp*,int) ;

__attribute__((used)) static int FUNC_17(struct uverbs_attr_bundle *VAR_8)
{
 struct ib_uverbs_reg_mr VAR_9;
 struct ib_uverbs_reg_mr_resp VAR_10;
 struct ib_uobject *VAR_11;
 struct ib_pd *VAR_12;
 struct ib_mr *VAR_13;
 int VAR_14;
 struct ib_device *VAR_15;

 VAR_14 = FUNC_15(VAR_8, &VAR_9, sizeof(VAR_9));
 if (VAR_14)
  return VAR_14;

 if ((VAR_9.start & ~VAR_4) != (VAR_9.hca_va & ~VAR_4))
  return -VAR_0;

 VAR_14 = FUNC_3(VAR_9.access_flags);
 if (VAR_14)
  return VAR_14;

 VAR_11 = FUNC_9(VAR_6, VAR_8, &VAR_15);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_12 = FUNC_12(VAR_12, VAR_7, VAR_9.pd_handle, VAR_8);
 if (!VAR_12) {
  VAR_14 = -VAR_0;
  goto err_free;
 }

 if (VAR_9.access_flags & VAR_1) {
  if (!(VAR_12->device->attrs.device_cap_flags &
        VAR_2)) {
   FUNC_6("ODP support not available\n");
   VAR_14 = -VAR_0;
   goto err_put;
  }
 }

 VAR_13 = VAR_12->device->ops.reg_user_mr(VAR_12, VAR_9.start, VAR_9.length, VAR_9.hca_va,
      VAR_9.access_flags,
      &VAR_8->driver_udata);
 if (FUNC_0(VAR_13)) {
  VAR_14 = FUNC_1(VAR_13);
  goto err_put;
 }

 VAR_13->device = VAR_12->device;
 VAR_13->pd = VAR_12;
 VAR_13->type = VAR_3;
 VAR_13->dm = ((void*)0);
 VAR_13->sig_attrs = ((void*)0);
 VAR_13->uobject = VAR_11;
 FUNC_2(&VAR_12->usecnt);
 VAR_13->res.type = VAR_5;
 FUNC_7(&VAR_13->res);

 VAR_11->object = VAR_13;

 FUNC_5(&VAR_10, 0, sizeof VAR_10);
 VAR_10.lkey = VAR_13->lkey;
 VAR_10.rkey = VAR_13->rkey;
 VAR_10.mr_handle = VAR_11->id;

 VAR_14 = FUNC_16(VAR_8, &VAR_10, sizeof(VAR_10));
 if (VAR_14)
  goto err_copy;

 FUNC_13(VAR_12);

 return FUNC_11(VAR_11, VAR_8);

err_copy:
 FUNC_4(VAR_13, FUNC_14(VAR_8));

err_put:
 FUNC_13(VAR_12);

err_free:
 FUNC_10(VAR_11, VAR_8);
 return VAR_14;
}
