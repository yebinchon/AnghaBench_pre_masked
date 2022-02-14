
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* ws_t ;
typedef TYPE_2__* rpc_t ;
typedef int rpc_status ;
typedef TYPE_3__* iwdp_iws_t ;
typedef TYPE_4__* iwdp_iwi_t ;
typedef TYPE_5__* iwdp_iport_t ;
struct TYPE_13__ {int ws_id_to_iws; } ;
struct TYPE_12__ {TYPE_5__* iport; } ;
struct TYPE_11__ {TYPE_1__* ws; } ;
struct TYPE_10__ {scalar_t__ state; } ;
struct TYPE_9__ {int (* send_frame ) (TYPE_1__*,int,int ,int,char const*,size_t const) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ,char const*) ;
 int FUNC_1 (TYPE_1__*,int,int ,int,char const*,size_t const) ;

rpc_status FUNC_2(rpc_t VAR_2,
    const char *VAR_3, const char *VAR_4,
    const char *VAR_5, const size_t VAR_6) {
  iwdp_iport_t VAR_7 = ((iwdp_iwi_t)VAR_2->state)->iport;
  iwdp_iws_t VAR_8 = FUNC_0(VAR_7->ws_id_to_iws, VAR_4);
  if (!VAR_8) {
    return VAR_1;
  }
  ws_t VAR_9 = VAR_8->ws;
  return VAR_9->send_frame(VAR_9,
      1, VAR_0, 0,
      VAR_5, VAR_6);
}
