
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int resp_status; int completion; } ;
struct TYPE_4__ {TYPE_1__ req; } ;
struct xen_drm_front_evtchnl {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct xen_drm_front_evtchnl *VAR_2)
{
 if (FUNC_1(&VAR_2->u.req.completion,
   FUNC_0(VAR_1)) <= 0)
  return -VAR_0;

 return VAR_2->u.req.resp_status;
}
