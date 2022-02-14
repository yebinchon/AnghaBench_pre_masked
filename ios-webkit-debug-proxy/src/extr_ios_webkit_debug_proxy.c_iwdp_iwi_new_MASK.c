
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* wi_t ;
struct iwdp_iwi_struct {int dummy; } ;
typedef TYPE_3__* rpc_t ;
typedef TYPE_4__* iwdp_iwi_t ;
struct TYPE_10__ {int type; } ;
struct TYPE_13__ {TYPE_2__* wi; TYPE_3__* rpc; void* app_id_to_true; void* page_num_to_ipage; TYPE_1__ type; } ;
struct TYPE_12__ {TYPE_4__* state; int send_plist; int on_applicationUpdated; int on_applicationSentData; int on_applicationSentListing; int on_applicationDisconnected; int on_applicationConnected; int on_reportConnectedApplicationList; int on_reportSetup; } ;
struct TYPE_11__ {int* is_debug; TYPE_4__* state; int recv_plist; int send_packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 TYPE_3__* FUNC_4 () ;
 TYPE_2__* FUNC_5 (int) ;

iwdp_iwi_t FUNC_6(bool VAR_13, bool *VAR_14) {
  iwdp_iwi_t VAR_15 = (iwdp_iwi_t)FUNC_2(sizeof(struct iwdp_iwi_struct));
  if (!VAR_15) {
    return ((void*)0);
  }
  FUNC_3(VAR_15, 0, sizeof(struct iwdp_iwi_struct));
  VAR_15->type.type = VAR_2;
  VAR_15->app_id_to_true = FUNC_0(VAR_1);
  VAR_15->page_num_to_ipage = FUNC_0(VAR_0);
  rpc_t VAR_16 = FUNC_4();
  wi_t VAR_17 = FUNC_5(VAR_13);
  if (!VAR_16 || !VAR_17 || !VAR_15->page_num_to_ipage || !VAR_15->app_id_to_true) {
    FUNC_1(VAR_15);
    return ((void*)0);
  }
  VAR_16->on_reportSetup = VAR_9;
  VAR_16->on_reportConnectedApplicationList =
    VAR_8;
  VAR_16->on_applicationConnected = VAR_3;
  VAR_16->on_applicationDisconnected = VAR_4;
  VAR_16->on_applicationSentListing = VAR_6;
  VAR_16->on_applicationSentData = VAR_5;
  VAR_16->on_applicationUpdated = VAR_7;
  VAR_16->send_plist = VAR_12;
  VAR_16->state = VAR_15;
  VAR_15->rpc = VAR_16;
  VAR_17->send_packet = VAR_11;
  VAR_17->recv_plist = VAR_10;
  VAR_17->state = VAR_15;
  VAR_17->is_debug = VAR_14;
  VAR_15->wi = VAR_17;
  return VAR_15;
}
