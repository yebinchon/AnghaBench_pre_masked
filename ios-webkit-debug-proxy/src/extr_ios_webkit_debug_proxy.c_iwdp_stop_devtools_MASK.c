
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ws_status ;
typedef TYPE_1__* rpc_t ;
typedef TYPE_2__* iwdp_iws_t ;
typedef TYPE_3__* iwdp_iwi_t ;
typedef TYPE_4__* iwdp_iport_t ;
typedef TYPE_5__* iwdp_ipage_t ;
struct TYPE_13__ {char* sender_id; TYPE_2__* iws; int page_id; int app_id; int connection_id; } ;
struct TYPE_12__ {TYPE_3__* iwi; int ws_id_to_iws; } ;
struct TYPE_11__ {scalar_t__ connection_id; TYPE_1__* rpc; } ;
struct TYPE_10__ {scalar_t__ page_num; TYPE_5__* ipage; TYPE_4__* iport; } ;
struct TYPE_9__ {int (* send_forwardDidClose ) (TYPE_1__*,scalar_t__,int ,int ,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int ,int ,char*) ;

ws_status FUNC_4(iwdp_ipage_t VAR_2) {
  iwdp_iws_t VAR_3 = VAR_2->iws;
  if (!VAR_3) {
    return VAR_1;
  }
  if (VAR_3->ipage != VAR_2) {
    return VAR_0;
  }
  char *VAR_4 = VAR_2->sender_id;
  if (!VAR_4) {
    return VAR_0;
  }
  iwdp_iport_t VAR_5 = VAR_3->iport;
  iwdp_iws_t VAR_6 = FUNC_1(VAR_5->ws_id_to_iws, VAR_4);
  if (VAR_3 != VAR_6) {
    return VAR_0;
  }
  iwdp_iwi_t VAR_7 = VAR_5->iwi;
  if (VAR_7 && VAR_7->connection_id && (!VAR_2->connection_id ||
        !FUNC_2(VAR_2->connection_id, VAR_7->connection_id))) {


    rpc_t VAR_8 = VAR_7->rpc;
    VAR_8->send_forwardDidClose(VAR_8,
        VAR_7->connection_id, VAR_2->app_id,
        VAR_2->page_id, VAR_2->sender_id);
  }

  VAR_3->ipage = ((void*)0);
  VAR_3->page_num = 0;
  VAR_2->iws = ((void*)0);
  VAR_2->sender_id = ((void*)0);
  FUNC_0(VAR_4);
  return VAR_1;
}
