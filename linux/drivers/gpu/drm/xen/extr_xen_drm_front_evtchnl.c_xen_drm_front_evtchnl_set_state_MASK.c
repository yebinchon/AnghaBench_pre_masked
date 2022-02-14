
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xen_drm_front_info {int num_evt_pairs; int io_lock; TYPE_3__* evt_pairs; } ;
typedef enum xen_drm_front_evtchnl_state { ____Placeholder_xen_drm_front_evtchnl_state } xen_drm_front_evtchnl_state ;
struct TYPE_4__ {int state; } ;
struct TYPE_5__ {int state; } ;
struct TYPE_6__ {TYPE_1__ evt; TYPE_2__ req; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct xen_drm_front_info *VAR_0,
         enum xen_drm_front_evtchnl_state VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 if (!VAR_0->evt_pairs)
  return;

 FUNC_0(&VAR_0->io_lock, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_0->num_evt_pairs; VAR_3++) {
  VAR_0->evt_pairs[VAR_3].req.state = VAR_1;
  VAR_0->evt_pairs[VAR_3].evt.state = VAR_1;
 }
 FUNC_1(&VAR_0->io_lock, VAR_2);
}
