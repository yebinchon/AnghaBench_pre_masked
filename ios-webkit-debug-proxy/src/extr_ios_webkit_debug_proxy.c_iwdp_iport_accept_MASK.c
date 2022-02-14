
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* iwdp_t ;
typedef int iwdp_status ;
typedef TYPE_2__* iwdp_iws_t ;
typedef TYPE_3__* iwdp_iport_t ;
struct TYPE_11__ {int ws_id_to_iws; } ;
struct TYPE_10__ {int ws_fd; int ws_id; TYPE_3__* iport; } ;
struct TYPE_9__ {int is_debug; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

iwdp_status FUNC_3(iwdp_t VAR_1, iwdp_iport_t VAR_2, int VAR_3,
    iwdp_iws_t *VAR_4) {
  iwdp_iws_t VAR_5 = FUNC_1(VAR_1->is_debug);
  VAR_5->iport = VAR_2;
  VAR_5->ws_fd = VAR_3;
  FUNC_2(&VAR_5->ws_id);
  FUNC_0(VAR_2->ws_id_to_iws, VAR_5->ws_id, VAR_5);
  *VAR_4 = VAR_5;
  return VAR_0;
}
