
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isert_device {int dummy; } ;
struct isert_conn {int rem_wait; scalar_t__ dev_removed; scalar_t__ login_req_buf; TYPE_2__* qp; scalar_t__ cm_id; struct isert_device* device; } ;
struct isert_comp {int dummy; } ;
struct TYPE_4__ {TYPE_1__* recv_cq; } ;
struct TYPE_3__ {struct isert_comp* cq_context; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct isert_comp*) ;
 int FUNC_3 (char*,struct isert_conn*) ;
 int FUNC_4 (struct isert_device*) ;
 int FUNC_5 (struct isert_conn*) ;
 int FUNC_6 (struct isert_conn*) ;
 int FUNC_7 (struct isert_conn*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct isert_conn *VAR_0)
{
 struct isert_device *VAR_1 = VAR_0->device;

 FUNC_3("conn %p\n", VAR_0);

 FUNC_0(!VAR_1);

 FUNC_6(VAR_0);
 if (VAR_0->cm_id &&
     !VAR_0->dev_removed)
  FUNC_8(VAR_0->cm_id);

 if (VAR_0->qp) {
  struct isert_comp *VAR_2 = VAR_0->qp->recv_cq->cq_context;

  FUNC_2(VAR_2);
  FUNC_1(VAR_0->qp);
 }

 if (VAR_0->login_req_buf)
  FUNC_5(VAR_0);

 FUNC_4(VAR_1);

 if (VAR_0->dev_removed)
  FUNC_9(&VAR_0->rem_wait);
 else
  FUNC_7(VAR_0);
}
