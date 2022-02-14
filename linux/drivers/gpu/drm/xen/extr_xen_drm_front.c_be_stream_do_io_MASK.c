
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xendispl_req {int dummy; } ;
struct TYPE_3__ {int completion; } ;
struct TYPE_4__ {TYPE_1__ req; } ;
struct xen_drm_front_evtchnl {scalar_t__ state; TYPE_2__ u; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct xen_drm_front_evtchnl*) ;

__attribute__((used)) static int FUNC_3(struct xen_drm_front_evtchnl *VAR_2,
      struct xendispl_req *VAR_3)
{
 FUNC_0(&VAR_2->u.req.completion);
 if (FUNC_1(VAR_2->state != VAR_1))
  return -VAR_0;

 FUNC_2(VAR_2);
 return 0;
}
