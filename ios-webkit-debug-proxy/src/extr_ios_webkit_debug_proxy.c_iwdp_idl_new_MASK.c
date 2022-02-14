
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct iwdp_idl_struct {int dummy; } ;
typedef TYPE_2__* iwdp_idl_t ;
typedef TYPE_3__* dl_t ;
struct TYPE_10__ {TYPE_2__* state; int on_detach; int on_attach; int send_packet; } ;
struct TYPE_8__ {int type; } ;
struct TYPE_9__ {TYPE_3__* dl; TYPE_1__ type; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

iwdp_idl_t FUNC_4() {
  iwdp_idl_t VAR_4 = (iwdp_idl_t)FUNC_2(sizeof(struct iwdp_idl_struct));
  dl_t VAR_5 = FUNC_0();
  if (!VAR_4 || !VAR_5) {
    FUNC_1(VAR_4);
    return ((void*)0);
  }
  FUNC_3(VAR_4, 0, sizeof(struct iwdp_idl_struct));
  VAR_4->type.type = VAR_0;
  VAR_4->dl = VAR_5;
  VAR_5->send_packet = VAR_3;
  VAR_5->on_attach = VAR_1;
  VAR_5->on_detach = VAR_2;
  VAR_5->state = VAR_4;
  return VAR_4;
}
