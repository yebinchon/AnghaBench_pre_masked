
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int req_prod_pvt; } ;
struct TYPE_4__ {TYPE_3__ ring; } ;
struct TYPE_5__ {TYPE_1__ req; } ;
struct xen_drm_front_evtchnl {int irq; TYPE_2__ u; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct xen_drm_front_evtchnl *VAR_0)
{
 int VAR_1;

 VAR_0->u.req.ring.req_prod_pvt++;
 FUNC_0(&VAR_0->u.req.ring, VAR_1);
 if (VAR_1)
  FUNC_1(VAR_0->irq);
}
