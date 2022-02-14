
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct iwdp_iport_struct {int dummy; } ;
typedef TYPE_1__* iwdp_iport_t ;
struct TYPE_5__ {int ws_id_to_iws; struct TYPE_5__* device_name; struct TYPE_5__* device_id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void FUNC_3(iwdp_iport_t VAR_0) {
  if (VAR_0) {
    FUNC_0(VAR_0->device_id);
    FUNC_0(VAR_0->device_name);
    FUNC_1(VAR_0->ws_id_to_iws);
    FUNC_2(VAR_0, 0, sizeof(struct iwdp_iport_struct));
    FUNC_0(VAR_0);
  }
}
