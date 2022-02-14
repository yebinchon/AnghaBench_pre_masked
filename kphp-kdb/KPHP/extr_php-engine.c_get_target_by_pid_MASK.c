
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct conn_target {int port; TYPE_1__ target; } ;


 int FUNC_0 (struct conn_target*) ;
 int FUNC_1 (int) ;

int FUNC_2 (int VAR_0, int VAR_1, struct conn_target *VAR_2) {
  VAR_2->target.s_addr = FUNC_1 (VAR_0);
  VAR_2->port = VAR_1;

  return FUNC_0 (VAR_2);
}
