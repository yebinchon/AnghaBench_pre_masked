
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct iwdp_struct {int dummy; } ;
struct iwdp_private {int dummy; } ;
typedef TYPE_1__* iwdp_t ;
typedef TYPE_1__* iwdp_private_t ;
struct TYPE_6__ {struct TYPE_6__* sim_wi_socket_addr; struct TYPE_6__* frontend; int device_id_to_iport; struct TYPE_6__* private_state; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void FUNC_3(iwdp_t VAR_0) {
  if (VAR_0) {
    iwdp_private_t VAR_1 = VAR_0->private_state;
    if (VAR_1) {
      FUNC_1(VAR_1->device_id_to_iport);
      FUNC_0(VAR_1->frontend);
      FUNC_0(VAR_1->sim_wi_socket_addr);
      FUNC_2(VAR_1, 0, sizeof(struct iwdp_private));
      FUNC_0(VAR_1);
    }
    FUNC_2(VAR_0, 0, sizeof(struct iwdp_struct));
    FUNC_0(VAR_0);
  }
}
