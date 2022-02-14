
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct iwdp_iport_struct {int dummy; } ;
typedef TYPE_2__* iwdp_iport_t ;
struct TYPE_6__ {int type; } ;
struct TYPE_7__ {int ws_id_to_iws; TYPE_1__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

iwdp_iport_t FUNC_4() {
  iwdp_iport_t VAR_2 = (iwdp_iport_t)FUNC_2(sizeof(struct iwdp_iport_struct));
  if (!VAR_2) {
    return ((void*)0);
  }
  FUNC_3(VAR_2, 0, sizeof(struct iwdp_iport_struct));
  VAR_2->type.type = VAR_1;
  VAR_2->ws_id_to_iws = FUNC_0(VAR_0);
  if (!VAR_2->ws_id_to_iws) {
    FUNC_1(VAR_2);
    return ((void*)0);
  }
  return VAR_2;
}
