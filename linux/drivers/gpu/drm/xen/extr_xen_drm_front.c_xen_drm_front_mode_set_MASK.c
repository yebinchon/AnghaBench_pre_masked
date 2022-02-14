
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct TYPE_9__ {int fb_cookie; void* bpp; void* height; void* width; void* y; void* x; } ;
struct TYPE_10__ {TYPE_3__ set_config; } ;
struct xendispl_req {TYPE_4__ op; } ;
struct xen_drm_front_info {int io_lock; TYPE_2__* evt_pairs; } ;
struct TYPE_11__ {int req_io_lock; } ;
struct TYPE_12__ {TYPE_5__ req; } ;
struct xen_drm_front_evtchnl {TYPE_6__ u; } ;
struct xen_drm_front_drm_pipeline {size_t index; TYPE_1__* drm_info; } ;
struct TYPE_8__ {struct xen_drm_front_evtchnl req; } ;
struct TYPE_7__ {struct xen_drm_front_info* front_info; } ;


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

int FUNC_8(struct xen_drm_front_drm_pipeline *VAR_2,
      u32 VAR_3, u32 VAR_4, u32 VAR_5, u32 VAR_6,
      u32 VAR_7, u64 VAR_8)
{
 struct xen_drm_front_evtchnl *VAR_9;
 struct xen_drm_front_info *VAR_10;
 struct xendispl_req *VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 VAR_10 = VAR_2->drm_info->front_info;
 VAR_9 = &VAR_10->evt_pairs[VAR_2->index].req;
 if (FUNC_7(!VAR_9))
  return -VAR_0;

 FUNC_3(&VAR_9->u.req.req_io_lock);

 FUNC_5(&VAR_10->io_lock, VAR_12);
 VAR_11 = FUNC_0(VAR_9, VAR_1);
 VAR_11->op.set_config.x = VAR_3;
 VAR_11->op.set_config.y = VAR_4;
 VAR_11->op.set_config.width = VAR_5;
 VAR_11->op.set_config.height = VAR_6;
 VAR_11->op.set_config.bpp = VAR_7;
 VAR_11->op.set_config.fb_cookie = VAR_8;

 VAR_13 = FUNC_1(VAR_9, VAR_11);
 FUNC_6(&VAR_10->io_lock, VAR_12);

 if (VAR_13 == 0)
  VAR_13 = FUNC_2(VAR_9);

 FUNC_4(&VAR_9->u.req.req_io_lock);
 return VAR_13;
}
