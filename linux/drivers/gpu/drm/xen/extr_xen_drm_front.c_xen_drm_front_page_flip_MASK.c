
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int fb_cookie; } ;
struct TYPE_8__ {TYPE_2__ pg_flip; } ;
struct xendispl_req {TYPE_3__ op; } ;
struct xen_drm_front_info {int num_evt_pairs; int io_lock; TYPE_1__* evt_pairs; } ;
struct TYPE_9__ {int req_io_lock; } ;
struct TYPE_10__ {TYPE_4__ req; } ;
struct xen_drm_front_evtchnl {TYPE_5__ u; } ;
struct TYPE_6__ {struct xen_drm_front_evtchnl req; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xendispl_req* FUNC_0 (struct xen_drm_front_evtchnl*,int ) ;
 int FUNC_1 (struct xen_drm_front_evtchnl*,struct xendispl_req*) ;
 int FUNC_2 (struct xen_drm_front_evtchnl*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct xen_drm_front_info *VAR_2,
       int VAR_3, u64 VAR_4)
{
 struct xen_drm_front_evtchnl *VAR_5;
 struct xendispl_req *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 if (FUNC_7(VAR_3 >= VAR_2->num_evt_pairs))
  return -VAR_0;

 VAR_5 = &VAR_2->evt_pairs[VAR_3].req;

 FUNC_3(&VAR_5->u.req.req_io_lock);

 FUNC_5(&VAR_2->io_lock, VAR_7);
 VAR_6 = FUNC_0(VAR_5, VAR_1);
 VAR_6->op.pg_flip.fb_cookie = VAR_4;

 VAR_8 = FUNC_1(VAR_5, VAR_6);
 FUNC_6(&VAR_2->io_lock, VAR_7);

 if (VAR_8 == 0)
  VAR_8 = FUNC_2(VAR_5);

 FUNC_4(&VAR_5->u.req.req_io_lock);
 return VAR_8;
}
