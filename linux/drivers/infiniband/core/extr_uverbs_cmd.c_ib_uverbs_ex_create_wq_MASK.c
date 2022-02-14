
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct uverbs_attr_bundle {int driver_udata; int ufile; } ;
struct ib_wq_init_attr {int max_wr; int max_sge; int wq_context; int wq_type; int create_flags; int event_handler; struct ib_pd* cq; } ;
struct TYPE_9__ {int id; struct ib_wq* object; } ;
struct TYPE_8__ {TYPE_4__ uobject; int event_list; scalar_t__ events_reported; } ;
struct ib_wq {TYPE_3__ uevent; int wq_num; TYPE_4__* uobject; int usecnt; int wq_context; TYPE_2__* device; struct ib_pd* pd; struct ib_pd* cq; int wq_type; } ;
struct ib_uwq_object {TYPE_3__ uevent; int wq_num; TYPE_4__* uobject; int usecnt; int wq_context; TYPE_2__* device; struct ib_pd* pd; struct ib_pd* cq; int wq_type; } ;
struct ib_uverbs_ex_create_wq_resp {int response_length; int wqn; int max_wr; int max_sge; int wq_handle; } ;
struct ib_uverbs_ex_create_wq {int create_flags; int wq_type; int max_wr; int max_sge; int cq_handle; int pd_handle; scalar_t__ comp_mask; } ;
struct ib_pd {int usecnt; TYPE_2__* device; } ;
struct ib_device {int dummy; } ;
struct ib_cq {int usecnt; TYPE_2__* device; } ;
typedef int resp ;
typedef int cmd ;
struct TYPE_6__ {struct ib_wq* (* create_wq ) (struct ib_pd*,struct ib_wq_init_attr*,int *) ;} ;
struct TYPE_7__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ib_wq*) ;
 int FUNC_2 (struct ib_wq*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ib_wq*,int ) ;
 int VAR_5 ;
 int FUNC_6 (struct ib_uverbs_ex_create_wq_resp*,int ,int) ;
 struct ib_wq* FUNC_7 (struct ib_pd*,struct ib_wq_init_attr*,int *) ;
 scalar_t__ FUNC_8 (int ,struct uverbs_attr_bundle*,struct ib_device**) ;
 int FUNC_9 (TYPE_4__*,struct uverbs_attr_bundle*) ;
 int FUNC_10 (TYPE_4__*,struct uverbs_attr_bundle*) ;
 struct ib_pd* FUNC_11 (struct ib_pd*,int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_12 (struct ib_pd*) ;
 int FUNC_13 (struct uverbs_attr_bundle*) ;
 int FUNC_14 (struct uverbs_attr_bundle*,struct ib_uverbs_ex_create_wq*,int) ;
 int FUNC_15 (struct uverbs_attr_bundle*,struct ib_uverbs_ex_create_wq_resp*,int) ;
 int FUNC_16 (struct uverbs_attr_bundle*,int) ;

__attribute__((used)) static int FUNC_17(struct uverbs_attr_bundle *VAR_6)
{
 struct ib_uverbs_ex_create_wq VAR_7;
 struct ib_uverbs_ex_create_wq_resp VAR_8 = {};
 struct ib_uwq_object *VAR_9;
 int VAR_10 = 0;
 struct ib_cq *VAR_11;
 struct ib_pd *VAR_12;
 struct ib_wq *VAR_13;
 struct ib_wq_init_attr VAR_14 = {};
 struct ib_device *VAR_15;

 VAR_10 = FUNC_14(VAR_6, &VAR_7, sizeof(VAR_7));
 if (VAR_10)
  return VAR_10;

 if (VAR_7.comp_mask)
  return -VAR_1;

 VAR_9 = (struct ib_uwq_object *)FUNC_8(VAR_4, VAR_6,
       &VAR_15);
 if (FUNC_1(VAR_9))
  return FUNC_2(VAR_9);

 VAR_12 = FUNC_11(VAR_12, VAR_3, VAR_7.pd_handle, VAR_6);
 if (!VAR_12) {
  VAR_10 = -VAR_0;
  goto err_uobj;
 }

 VAR_11 = FUNC_11(VAR_11, VAR_2, VAR_7.cq_handle, VAR_6);
 if (!VAR_11) {
  VAR_10 = -VAR_0;
  goto err_put_pd;
 }

 VAR_14.cq = VAR_11;
 VAR_14.max_sge = VAR_7.max_sge;
 VAR_14.max_wr = VAR_7.max_wr;
 VAR_14.wq_context = VAR_6->ufile;
 VAR_14.wq_type = VAR_7.wq_type;
 VAR_14.event_handler = VAR_5;
 VAR_14.create_flags = VAR_7.create_flags;
 VAR_9->uevent.events_reported = 0;
 FUNC_0(&VAR_9->uevent.event_list);

 VAR_13 = VAR_12->device->ops.create_wq(VAR_12, &VAR_14, &VAR_6->driver_udata);
 if (FUNC_1(VAR_13)) {
  VAR_10 = FUNC_2(VAR_13);
  goto err_put_cq;
 }

 VAR_13->uobject = &VAR_9->uevent.uobject;
 VAR_9->uevent.uobject.object = VAR_13;
 VAR_13->wq_type = VAR_14.wq_type;
 VAR_13->cq = VAR_11;
 VAR_13->pd = VAR_12;
 VAR_13->device = VAR_12->device;
 VAR_13->wq_context = VAR_14.wq_context;
 FUNC_4(&VAR_13->usecnt, 0);
 FUNC_3(&VAR_12->usecnt);
 FUNC_3(&VAR_11->usecnt);
 VAR_13->uobject = &VAR_9->uevent.uobject;
 VAR_9->uevent.uobject.object = VAR_13;

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.wq_handle = VAR_9->uevent.uobject.id;
 VAR_8.max_sge = VAR_14.max_sge;
 VAR_8.max_wr = VAR_14.max_wr;
 VAR_8.wqn = VAR_13->wq_num;
 VAR_8.response_length = FUNC_16(VAR_6, sizeof(VAR_8));
 VAR_10 = FUNC_15(VAR_6, &VAR_8, sizeof(VAR_8));
 if (VAR_10)
  goto err_copy;

 FUNC_12(VAR_12);
 FUNC_12(VAR_11);
 return FUNC_10(&VAR_9->uevent.uobject, VAR_6);

err_copy:
 FUNC_5(VAR_13, FUNC_13(VAR_6));
err_put_cq:
 FUNC_12(VAR_11);
err_put_pd:
 FUNC_12(VAR_12);
err_uobj:
 FUNC_9(&VAR_9->uevent.uobject, VAR_6);

 return VAR_10;
}
