
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hsi_msg {scalar_t__ ttype; struct cs_hsi_iface* context; } ;
struct cs_hsi_iface {scalar_t__ iface_state; int control_state; int lock; TYPE_2__* cl; } ;
struct TYPE_6__ {TYPE_1__* cl; } ;
struct TYPE_5__ {int device; } ;
struct TYPE_4__ {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_0 (struct hsi_msg*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hsi_msg *VAR_7)
{
 struct cs_hsi_iface *VAR_8 = VAR_7->context;

 FUNC_3(&VAR_8->lock);

 FUNC_1(&VAR_6.cl->device, "control cmd destructor\n");

 if (VAR_8->iface_state != VAR_0)
  FUNC_2(&VAR_8->cl->device, "Cmd flushed while driver active\n");

 if (VAR_7->ttype == VAR_1)
  VAR_8->control_state &=
   ~(VAR_3 | VAR_4);
 else if (VAR_7->ttype == VAR_2 &&
   VAR_8->control_state & VAR_5)
  VAR_8->control_state &= ~VAR_5;

 FUNC_0(VAR_7);

 FUNC_4(&VAR_8->lock);
}
