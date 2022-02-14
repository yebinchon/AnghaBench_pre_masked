
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xen_drm_front_info {int xb_dev; } ;
struct TYPE_5__ {scalar_t__ sring; } ;
struct TYPE_7__ {int completion; int resp_status; TYPE_1__ ring; } ;
struct TYPE_6__ {scalar_t__ page; } ;
struct TYPE_8__ {TYPE_3__ req; TYPE_2__ evt; } ;
struct xen_drm_front_evtchnl {scalar_t__ type; scalar_t__ gref; scalar_t__ port; scalar_t__ irq; TYPE_4__ u; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ,unsigned long) ;
 int FUNC_2 (struct xen_drm_front_evtchnl*,int ,int) ;
 int FUNC_3 (scalar_t__,struct xen_drm_front_evtchnl*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct xen_drm_front_info *VAR_5,
    struct xen_drm_front_evtchnl *VAR_6)
{
 unsigned long VAR_7 = 0;

 if (VAR_6->type == VAR_3)
  VAR_7 = (unsigned long)VAR_6->u.req.ring.sring;
 else if (VAR_6->type == VAR_2)
  VAR_7 = (unsigned long)VAR_6->u.evt.page;
 if (!VAR_7)
  return;

 VAR_6->state = VAR_1;

 if (VAR_6->type == VAR_3) {

  VAR_6->u.req.resp_status = -VAR_0;
  FUNC_0(&VAR_6->u.req.completion);
 }

 if (VAR_6->irq)
  FUNC_3(VAR_6->irq, VAR_6);

 if (VAR_6->port)
  FUNC_4(VAR_5->xb_dev, VAR_6->port);


 if (VAR_6->gref != VAR_4)
  FUNC_1(VAR_6->gref, 0, VAR_7);

 FUNC_2(VAR_6, 0, sizeof(*VAR_6));
}
