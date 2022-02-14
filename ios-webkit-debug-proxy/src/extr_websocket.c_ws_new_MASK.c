
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ws_t ;
typedef scalar_t__ ws_private_t ;
struct ws_struct {int dummy; } ;
struct TYPE_4__ {scalar_t__ private_state; int on_error; int on_recv; int send_close; int send_frame; int send_upgrade; int send_connect; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

ws_t FUNC_4() {
  ws_private_t VAR_6 = FUNC_3();
  if (!VAR_6) {
    return ((void*)0);
  }
  ws_t VAR_7 = (ws_t)FUNC_0(sizeof(struct ws_struct));
  if (!VAR_7) {
    FUNC_2(VAR_6);
    return ((void*)0);
  }
  FUNC_1(VAR_7, 0, sizeof(struct ws_struct));
  VAR_7->send_connect = VAR_3;
  VAR_7->send_upgrade = VAR_5;
  VAR_7->send_frame = VAR_4;
  VAR_7->send_close = VAR_2;
  VAR_7->on_recv = VAR_1;
  VAR_7->on_error = VAR_0;
  VAR_7->private_state = VAR_6;
  return VAR_7;
}
