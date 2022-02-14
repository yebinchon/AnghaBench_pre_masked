
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mc_cluster {int a_timeouts; int a_sbytes; int a_rbytes; int a_req; } ;
struct TYPE_2__ {int clusters_num; struct mc_cluster* Clusters; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_0 (void) {
  int VAR_2;
  struct mc_cluster *VAR_3 = VAR_1->Clusters;
  for (VAR_2 = 0; VAR_2 < VAR_1->clusters_num; VAR_2++, VAR_3++) {
    VAR_3->a_req *= VAR_0;
    VAR_3->a_rbytes *= VAR_0;
    VAR_3->a_sbytes *= VAR_0;
    VAR_3->a_timeouts *= VAR_0;
  }
}
