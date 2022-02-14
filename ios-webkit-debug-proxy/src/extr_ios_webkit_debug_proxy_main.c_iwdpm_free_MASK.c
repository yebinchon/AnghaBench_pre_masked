
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct iwdpm_struct {int dummy; } ;
typedef TYPE_1__* iwdpm_t ;
struct TYPE_5__ {struct TYPE_5__* sim_wi_socket_addr; struct TYPE_5__* frontend; struct TYPE_5__* config; int sm; int iwdp; int pc; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(iwdpm_t VAR_0) {
  if (VAR_0) {
    FUNC_3(VAR_0->pc);
    FUNC_1(VAR_0->iwdp);
    FUNC_4(VAR_0->sm);
    FUNC_0(VAR_0->config);
    FUNC_0(VAR_0->frontend);
    FUNC_0(VAR_0->sim_wi_socket_addr);
    FUNC_2(VAR_0, 0, sizeof(struct iwdpm_struct));
    FUNC_0(VAR_0);
  }
}
