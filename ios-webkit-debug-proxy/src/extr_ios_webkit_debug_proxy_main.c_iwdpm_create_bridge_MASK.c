
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* sm_t ;
typedef TYPE_2__* iwdpm_t ;
typedef TYPE_3__* iwdp_t ;
struct TYPE_10__ {int * is_debug; TYPE_2__* state; int remove_fd; int add_fd; int send; int connect; int listen; int select_port; int attach; int subscribe; } ;
struct TYPE_9__ {int is_debug; TYPE_3__* iwdp; TYPE_1__* sm; int sim_wi_socket_addr; int frontend; } ;
struct TYPE_8__ {int * is_debug; TYPE_2__* state; int on_close; int on_recv; int on_sent; int on_accept; } ;


 TYPE_3__* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;

void FUNC_3(iwdpm_t VAR_12) {
  sm_t VAR_13 = FUNC_2(4096);
  iwdp_t VAR_14 = FUNC_0(VAR_12->frontend, VAR_12->sim_wi_socket_addr);
  if (!VAR_13 || !VAR_14) {
    FUNC_1(VAR_13);
    return;
  }
  VAR_12->sm = VAR_13;
  VAR_12->iwdp = VAR_14;
  VAR_14->subscribe = VAR_11;
  VAR_14->attach = VAR_1;
  VAR_14->select_port = VAR_9;
  VAR_14->listen = VAR_3;
  VAR_14->connect = VAR_2;
  VAR_14->send = VAR_10;
  VAR_14->add_fd = VAR_0;
  VAR_14->remove_fd = VAR_8;
  VAR_14->state = VAR_12;
  VAR_14->is_debug = &VAR_12->is_debug;
  VAR_13->on_accept = VAR_4;
  VAR_13->on_sent = VAR_7;
  VAR_13->on_recv = VAR_6;
  VAR_13->on_close = VAR_5;
  VAR_13->state = VAR_12;
  VAR_13->is_debug = &VAR_12->is_debug;
}
