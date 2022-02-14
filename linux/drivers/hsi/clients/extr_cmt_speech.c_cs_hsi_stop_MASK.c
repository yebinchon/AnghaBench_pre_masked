
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs_hsi_iface {int lock; int pm_qos_req; int data_state; int control_state; TYPE_1__* cl; int iface_state; int master; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cs_hsi_iface*) ;
 int FUNC_2 (struct cs_hsi_iface*) ;
 int FUNC_3 (struct cs_hsi_iface*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct cs_hsi_iface*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct cs_hsi_iface *VAR_1)
{
 FUNC_5(&VAR_1->cl->device, "cs_hsi_stop\n");
 FUNC_3(VAR_1, 0);
 FUNC_12(VAR_1->master);


 VAR_1->iface_state = VAR_0;
 FUNC_6(VAR_1->cl);






 FUNC_0(!FUNC_4(VAR_1->control_state));
 FUNC_0(!FUNC_4(VAR_1->data_state));

 if (FUNC_9(&VAR_1->pm_qos_req))
  FUNC_8(&VAR_1->pm_qos_req);

 FUNC_10(&VAR_1->lock);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 FUNC_11(&VAR_1->lock);
 FUNC_7(VAR_1);
}
