
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long long node_id; } ;


 TYPE_1__* VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;

int FUNC_0 (long long VAR_3) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) if (VAR_1[VAR_4] && VAR_1[VAR_4]->node_id == VAR_3) {
    VAR_0 = VAR_1[VAR_4];
    return VAR_4;
  }
  return -1;
}
