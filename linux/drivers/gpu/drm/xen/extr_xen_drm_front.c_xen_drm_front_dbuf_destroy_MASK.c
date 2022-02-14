
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
struct TYPE_9__ {int dbuf_cookie; } ;
struct TYPE_10__ {TYPE_3__ dbuf_destroy; } ;
struct xendispl_req {TYPE_4__ op; } ;
struct TYPE_8__ {int be_alloc; } ;
struct xen_drm_front_info {int dbuf_list; int io_lock; TYPE_2__ cfg; TYPE_1__* evt_pairs; } ;
struct TYPE_11__ {int req_io_lock; } ;
struct TYPE_12__ {TYPE_5__ req; } ;
struct xen_drm_front_evtchnl {TYPE_6__ u; } ;
struct TYPE_7__ {struct xen_drm_front_evtchnl req; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct xendispl_req* FUNC_0 (struct xen_drm_front_evtchnl*,int ) ;
 int FUNC_1 (struct xen_drm_front_evtchnl*,struct xendispl_req*) ;
 int FUNC_2 (struct xen_drm_front_evtchnl*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct xen_drm_front_info *VAR_3,
          u64 VAR_4)
{
 struct xen_drm_front_evtchnl *VAR_5;
 struct xendispl_req *VAR_6;
 unsigned long VAR_7;
 bool VAR_8;
 int VAR_9;

 VAR_5 = &VAR_3->evt_pairs[VAR_1].req;
 if (FUNC_8(!VAR_5))
  return -VAR_0;

 VAR_8 = VAR_3->cfg.be_alloc;





 if (VAR_8)
  FUNC_3(&VAR_3->dbuf_list, VAR_4);

 FUNC_4(&VAR_5->u.req.req_io_lock);

 FUNC_6(&VAR_3->io_lock, VAR_7);
 VAR_6 = FUNC_0(VAR_5, VAR_2);
 VAR_6->op.dbuf_destroy.dbuf_cookie = VAR_4;

 VAR_9 = FUNC_1(VAR_5, VAR_6);
 FUNC_7(&VAR_3->io_lock, VAR_7);

 if (VAR_9 == 0)
  VAR_9 = FUNC_2(VAR_5);





 if (!VAR_8)
  FUNC_3(&VAR_3->dbuf_list, VAR_4);

 FUNC_5(&VAR_5->u.req.req_io_lock);
 return VAR_9;
}
