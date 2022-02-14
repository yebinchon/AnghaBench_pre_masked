
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* ws_t ;
struct iwdp_iws_struct {int dummy; } ;
typedef TYPE_3__* iwdp_iws_t ;
struct TYPE_8__ {int type; } ;
struct TYPE_10__ {TYPE_2__* ws; TYPE_1__ type; } ;
struct TYPE_9__ {int* is_debug; TYPE_3__* state; int on_frame; int on_upgrade; int on_http_request; int send_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 TYPE_2__* FUNC_3 () ;

iwdp_iws_t FUNC_4(bool *VAR_5) {
  iwdp_iws_t VAR_6 = (iwdp_iws_t)FUNC_1(sizeof(struct iwdp_iws_struct));
  if (!VAR_6) {
    return ((void*)0);
  }
  FUNC_2(VAR_6, 0, sizeof(struct iwdp_iws_struct));
  VAR_6->type.type = VAR_0;
  VAR_6->ws = FUNC_3();
  if (VAR_6->ws) {
    ws_t VAR_7 = VAR_6->ws;
    VAR_7->send_data = VAR_4;
    VAR_7->on_http_request = VAR_2;
    VAR_7->on_upgrade = VAR_3;
    VAR_7->on_frame = VAR_1;
    VAR_7->state = VAR_6;
    VAR_7->is_debug = VAR_5;
  }

  if (!VAR_6->ws) {
    FUNC_0(VAR_6);
    return ((void*)0);
  }
  return VAR_6;
}
