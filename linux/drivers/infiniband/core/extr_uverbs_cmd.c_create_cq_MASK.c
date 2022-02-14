
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct uverbs_attr_bundle {TYPE_7__* ufile; int driver_udata; } ;
struct TYPE_10__ {int cqe; int cq_handle; } ;
struct ib_uverbs_ex_create_cq_resp {int response_length; TYPE_3__ base; } ;
struct ib_uverbs_ex_create_cq {scalar_t__ comp_vector; scalar_t__ comp_channel; int flags; int cqe; int user_handle; } ;
struct TYPE_11__ {int id; struct ib_cq* object; int user_handle; } ;
struct ib_uverbs_completion_event_file {TYPE_4__ uobject; int ev_queue; int async_list; int comp_list; scalar_t__ async_events_reported; scalar_t__ comp_events_reported; } ;
struct ib_ucq_object {TYPE_4__ uobject; int ev_queue; int async_list; int comp_list; scalar_t__ async_events_reported; scalar_t__ comp_events_reported; } ;
struct TYPE_9__ {int (* create_cq ) (struct ib_cq*,struct ib_cq_init_attr*,int *) ;} ;
struct ib_device {TYPE_2__ ops; } ;
struct ib_cq_init_attr {scalar_t__ comp_vector; int flags; int cqe; } ;
struct TYPE_12__ {int type; } ;
struct ib_cq {TYPE_6__ res; int cqe; int usecnt; int * cq_context; int event_handler; int comp_handler; TYPE_4__* uobject; struct ib_device* device; } ;
typedef int resp ;
struct TYPE_13__ {TYPE_1__* device; } ;
struct TYPE_8__ {scalar_t__ num_comp_vectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_uverbs_completion_event_file* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct ib_uverbs_completion_event_file*) ;
 int FUNC_3 (struct ib_uverbs_completion_event_file*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct ib_cq*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct ib_uverbs_completion_event_file* FUNC_6 (scalar_t__,struct uverbs_attr_bundle*) ;
 int FUNC_7 (TYPE_7__*,struct ib_uverbs_completion_event_file*,struct ib_uverbs_completion_event_file*) ;
 int FUNC_8 (struct ib_cq*) ;
 int FUNC_9 (struct ib_uverbs_ex_create_cq_resp*,int ,int) ;
 int FUNC_10 (TYPE_6__*) ;
 struct ib_cq* FUNC_11 (struct ib_device*,int ) ;
 int FUNC_12 (struct ib_cq*,struct ib_cq_init_attr*,int *) ;
 scalar_t__ FUNC_13 (int ,struct uverbs_attr_bundle*,struct ib_device**) ;
 int FUNC_14 (TYPE_4__*,struct uverbs_attr_bundle*) ;
 int FUNC_15 (TYPE_4__*,struct uverbs_attr_bundle*) ;
 int FUNC_16 (struct uverbs_attr_bundle*) ;
 int FUNC_17 (struct uverbs_attr_bundle*,struct ib_uverbs_ex_create_cq_resp*,int) ;
 int FUNC_18 (struct uverbs_attr_bundle*,int) ;

__attribute__((used)) static struct ib_ucq_object *FUNC_19(struct uverbs_attr_bundle *VAR_7,
           struct ib_uverbs_ex_create_cq *VAR_8)
{
 struct ib_ucq_object *VAR_9;
 struct ib_uverbs_completion_event_file *VAR_10 = ((void*)0);
 struct ib_cq *VAR_11;
 int VAR_12;
 struct ib_uverbs_ex_create_cq_resp VAR_13;
 struct ib_cq_init_attr VAR_14 = {};
 struct ib_device *VAR_15;

 if (VAR_8->comp_vector >= VAR_7->ufile->device->num_comp_vectors)
  return FUNC_0(-VAR_0);

 VAR_9 = (struct ib_ucq_object *)FUNC_13(VAR_3, VAR_7,
       &VAR_15);
 if (FUNC_2(VAR_9))
  return VAR_9;

 if (VAR_8->comp_channel >= 0) {
  VAR_10 = FUNC_6(VAR_8->comp_channel, VAR_7);
  if (FUNC_2(VAR_10)) {
   VAR_12 = FUNC_3(VAR_10);
   goto err;
  }
 }

 VAR_9->uobject.user_handle = VAR_8->user_handle;
 VAR_9->comp_events_reported = 0;
 VAR_9->async_events_reported = 0;
 FUNC_1(&VAR_9->comp_list);
 FUNC_1(&VAR_9->async_list);

 VAR_14.cqe = VAR_8->cqe;
 VAR_14.comp_vector = VAR_8->comp_vector;
 VAR_14.flags = VAR_8->flags;

 VAR_11 = FUNC_11(VAR_15, VAR_4);
 if (!VAR_11) {
  VAR_12 = -VAR_1;
  goto err_file;
 }
 VAR_11->device = VAR_15;
 VAR_11->uobject = &VAR_9->uobject;
 VAR_11->comp_handler = VAR_5;
 VAR_11->event_handler = VAR_6;
 VAR_11->cq_context = VAR_10 ? &VAR_10->ev_queue : ((void*)0);
 FUNC_4(&VAR_11->usecnt, 0);

 VAR_12 = VAR_15->ops.create_cq(VAR_11, &VAR_14, &VAR_7->driver_udata);
 if (VAR_12)
  goto err_free;

 VAR_9->uobject.object = VAR_11;
 FUNC_9(&VAR_13, 0, sizeof VAR_13);
 VAR_13.base.cq_handle = VAR_9->uobject.id;
 VAR_13.base.cqe = VAR_11->cqe;
 VAR_13.response_length = FUNC_18(VAR_7, sizeof(VAR_13));

 VAR_11->res.type = VAR_2;
 FUNC_10(&VAR_11->res);

 VAR_12 = FUNC_17(VAR_7, &VAR_13, sizeof(VAR_13));
 if (VAR_12)
  goto err_cb;

 VAR_12 = FUNC_15(&VAR_9->uobject, VAR_7);
 if (VAR_12)
  return FUNC_0(VAR_12);
 return VAR_9;

err_cb:
 FUNC_5(VAR_11, FUNC_16(VAR_7));
 VAR_11 = ((void*)0);
err_free:
 FUNC_8(VAR_11);
err_file:
 if (VAR_10)
  FUNC_7(VAR_7->ufile, VAR_10, VAR_9);

err:
 FUNC_14(&VAR_9->uobject, VAR_7);

 return FUNC_0(VAR_12);
}
