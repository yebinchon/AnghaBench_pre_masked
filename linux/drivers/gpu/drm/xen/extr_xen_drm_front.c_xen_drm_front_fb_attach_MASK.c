
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u64 ;
typedef void* u32 ;
struct TYPE_7__ {void* pixel_format; void* height; void* width; void* fb_cookie; void* dbuf_cookie; } ;
struct TYPE_8__ {TYPE_2__ fb_attach; } ;
struct xendispl_req {TYPE_3__ op; } ;
struct xen_drm_front_info {int io_lock; int dbuf_list; TYPE_1__* evt_pairs; } ;
struct TYPE_9__ {int req_io_lock; } ;
struct TYPE_10__ {TYPE_4__ req; } ;
struct xen_drm_front_evtchnl {TYPE_5__ u; } ;
struct xen_drm_front_dbuf {void* fb_cookie; } ;
struct TYPE_6__ {struct xen_drm_front_evtchnl req; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct xendispl_req* FUNC_0 (struct xen_drm_front_evtchnl*,int ) ;
 int FUNC_1 (struct xen_drm_front_evtchnl*,struct xendispl_req*) ;
 int FUNC_2 (struct xen_drm_front_evtchnl*) ;
 struct xen_drm_front_dbuf* FUNC_3 (int *,void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct xen_drm_front_info *VAR_4,
       u64 VAR_5, u64 VAR_6, u32 VAR_7,
       u32 VAR_8, u32 VAR_9)
{
 struct xen_drm_front_evtchnl *VAR_10;
 struct xen_drm_front_dbuf *VAR_11;
 struct xendispl_req *VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 VAR_10 = &VAR_4->evt_pairs[VAR_2].req;
 if (FUNC_8(!VAR_10))
  return -VAR_1;

 VAR_11 = FUNC_3(&VAR_4->dbuf_list, VAR_5);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->fb_cookie = VAR_6;

 FUNC_4(&VAR_10->u.req.req_io_lock);

 FUNC_6(&VAR_4->io_lock, VAR_13);
 VAR_12 = FUNC_0(VAR_10, VAR_3);
 VAR_12->op.fb_attach.dbuf_cookie = VAR_5;
 VAR_12->op.fb_attach.fb_cookie = VAR_6;
 VAR_12->op.fb_attach.width = VAR_7;
 VAR_12->op.fb_attach.height = VAR_8;
 VAR_12->op.fb_attach.pixel_format = VAR_9;

 VAR_14 = FUNC_1(VAR_10, VAR_12);
 FUNC_7(&VAR_4->io_lock, VAR_13);

 if (VAR_14 == 0)
  VAR_14 = FUNC_2(VAR_10);

 FUNC_5(&VAR_10->u.req.req_io_lock);
 return VAR_14;
}
