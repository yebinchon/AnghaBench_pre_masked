
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xendispl_resp {scalar_t__ id; int operation; int status; } ;
struct xen_drm_front_info {int io_lock; } ;
struct TYPE_9__ {scalar_t__ rsp_cons; scalar_t__ req_prod_pvt; TYPE_1__* sring; } ;
struct TYPE_7__ {TYPE_4__ ring; int completion; int resp_status; } ;
struct TYPE_8__ {TYPE_2__ req; } ;
struct xen_drm_front_evtchnl {scalar_t__ state; scalar_t__ evt_id; TYPE_3__ u; struct xen_drm_front_info* front_info; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {scalar_t__ rsp_prod; scalar_t__ rsp_event; } ;
typedef scalar_t__ RING_IDX ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int) ;
 struct xendispl_resp* FUNC_2 (TYPE_4__*,scalar_t__) ;






 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_2, void *VAR_3)
{
 struct xen_drm_front_evtchnl *VAR_4 = VAR_3;
 struct xen_drm_front_info *VAR_5 = VAR_4->front_info;
 struct xendispl_resp *VAR_6;
 RING_IDX VAR_7, VAR_8;
 unsigned long VAR_9;

 if (FUNC_6(VAR_4->state != VAR_0))
  return VAR_1;

 FUNC_4(&VAR_5->io_lock, VAR_9);

again:
 VAR_8 = VAR_4->u.req.ring.sring->rsp_prod;

 FUNC_7();

 for (VAR_7 = VAR_4->u.req.ring.rsp_cons; VAR_7 != VAR_8; VAR_7++) {
  VAR_6 = FUNC_2(&VAR_4->u.req.ring, VAR_7);
  if (FUNC_6(VAR_6->id != VAR_4->evt_id))
   continue;

  switch (VAR_6->operation) {
  case 129:
  case 131:
  case 130:
  case 133:
  case 132:
  case 128:
   VAR_4->u.req.resp_status = VAR_6->status;
   FUNC_3(&VAR_4->u.req.completion);
   break;

  default:
   FUNC_0("Operation %d is not supported\n",
      VAR_6->operation);
   break;
  }
 }

 VAR_4->u.req.ring.rsp_cons = VAR_7;

 if (VAR_7 != VAR_4->u.req.ring.req_prod_pvt) {
  int VAR_10;

  FUNC_1(&VAR_4->u.req.ring,
            VAR_10);
  if (VAR_10)
   goto again;
 } else {
  VAR_4->u.req.ring.sring->rsp_event = VAR_7 + 1;
 }

 FUNC_5(&VAR_5->io_lock, VAR_9);
 return VAR_1;
}
