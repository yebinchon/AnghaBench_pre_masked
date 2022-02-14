
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uverbs_attr_bundle {int driver_udata; } ;
struct ib_uverbs_alloc_mw_resp {int mw_handle; int rkey; } ;
struct ib_uverbs_alloc_mw {scalar_t__ mw_type; int pd_handle; } ;
struct ib_uobject {int id; int rkey; struct ib_uobject* object; struct ib_uobject* uobject; struct ib_pd* pd; TYPE_2__* device; } ;
struct ib_pd {int usecnt; TYPE_2__* device; } ;
struct ib_mw {int id; int rkey; struct ib_mw* object; struct ib_mw* uobject; struct ib_pd* pd; TYPE_2__* device; } ;
struct ib_device {int dummy; } ;
typedef int resp ;
typedef int cmd ;
struct TYPE_3__ {struct ib_uobject* (* alloc_mw ) (struct ib_pd*,scalar_t__,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct ib_uobject*) ;
 int FUNC_1 (struct ib_uobject*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ib_uverbs_alloc_mw_resp*,int ,int) ;
 struct ib_uobject* FUNC_4 (struct ib_pd*,scalar_t__,int *) ;
 struct ib_uobject* FUNC_5 (int ,struct uverbs_attr_bundle*,struct ib_device**) ;
 int FUNC_6 (struct ib_uobject*,struct uverbs_attr_bundle*) ;
 int FUNC_7 (struct ib_uobject*,struct uverbs_attr_bundle*) ;
 struct ib_pd* FUNC_8 (struct ib_pd*,int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_9 (struct ib_pd*) ;
 int FUNC_10 (struct ib_uobject*) ;
 int FUNC_11 (struct uverbs_attr_bundle*,struct ib_uverbs_alloc_mw*,int) ;
 int FUNC_12 (struct uverbs_attr_bundle*,struct ib_uverbs_alloc_mw_resp*,int) ;

__attribute__((used)) static int FUNC_13(struct uverbs_attr_bundle *VAR_5)
{
 struct ib_uverbs_alloc_mw VAR_6;
 struct ib_uverbs_alloc_mw_resp VAR_7;
 struct ib_uobject *VAR_8;
 struct ib_pd *VAR_9;
 struct ib_mw *VAR_10;
 int VAR_11;
 struct ib_device *VAR_12;

 VAR_11 = FUNC_11(VAR_5, &VAR_6, sizeof(VAR_6));
 if (VAR_11)
  return VAR_11;

 VAR_8 = FUNC_5(VAR_3, VAR_5, &VAR_12);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_9 = FUNC_8(VAR_9, VAR_4, VAR_6.pd_handle, VAR_5);
 if (!VAR_9) {
  VAR_11 = -VAR_0;
  goto err_free;
 }

 if (VAR_6.mw_type != VAR_1 && VAR_6.mw_type != VAR_2) {
  VAR_11 = -VAR_0;
  goto err_put;
 }

 VAR_10 = VAR_9->device->ops.alloc_mw(VAR_9, VAR_6.mw_type, &VAR_5->driver_udata);
 if (FUNC_0(VAR_10)) {
  VAR_11 = FUNC_1(VAR_10);
  goto err_put;
 }

 VAR_10->device = VAR_9->device;
 VAR_10->pd = VAR_9;
 VAR_10->uobject = VAR_8;
 FUNC_2(&VAR_9->usecnt);

 VAR_8->object = VAR_10;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.rkey = VAR_10->rkey;
 VAR_7.mw_handle = VAR_8->id;

 VAR_11 = FUNC_12(VAR_5, &VAR_7, sizeof(VAR_7));
 if (VAR_11)
  goto err_copy;

 FUNC_9(VAR_9);
 return FUNC_7(VAR_8, VAR_5);

err_copy:
 FUNC_10(VAR_10);
err_put:
 FUNC_9(VAR_9);
err_free:
 FUNC_6(VAR_8, VAR_5);
 return VAR_11;
}
