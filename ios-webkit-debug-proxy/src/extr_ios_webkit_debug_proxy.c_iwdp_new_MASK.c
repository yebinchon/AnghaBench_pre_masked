
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct iwdp_struct {int dummy; } ;
struct iwdp_private {int dummy; } ;
typedef TYPE_1__* iwdp_t ;
typedef TYPE_1__* iwdp_private_t ;
struct TYPE_6__ {int device_id_to_iport; int * sim_wi_socket_addr; int * frontend; struct TYPE_6__* private_state; int on_error; int on_close; int on_recv; int on_accept; int start; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int * FUNC_4 (char const*) ;

iwdp_t FUNC_5(const char *VAR_6, const char *VAR_7) {
  iwdp_t VAR_8 = (iwdp_t)FUNC_2(sizeof(struct iwdp_struct));
  iwdp_private_t VAR_9 = (iwdp_private_t)FUNC_2(sizeof(struct iwdp_private));
  if (!VAR_8 || !VAR_9) {
    FUNC_1(VAR_8);
    return ((void*)0);
  }
  FUNC_3(VAR_8, 0, sizeof(struct iwdp_struct));
  FUNC_3(VAR_9, 0, sizeof(struct iwdp_private));
  VAR_8->start = VAR_5;
  VAR_8->on_accept = VAR_1;
  VAR_8->on_recv = VAR_4;
  VAR_8->on_close = VAR_2;
  VAR_8->on_error = VAR_3;
  VAR_8->private_state = VAR_9;
  VAR_9->frontend = (VAR_6 ? FUNC_4(VAR_6) : ((void*)0));
  VAR_9->sim_wi_socket_addr = FUNC_4(VAR_7);
  VAR_9->device_id_to_iport = FUNC_0(VAR_0);
  if (!VAR_9->device_id_to_iport) {
    FUNC_1(VAR_8);
    return ((void*)0);
  }
  return VAR_8;
}
