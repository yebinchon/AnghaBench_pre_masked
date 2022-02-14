
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long long cluster_id; } ;


 TYPE_1__* VAR_0 ;
 long long VAR_1 ;
 TYPE_1__** VAR_2 ;
 int VAR_3 ;

int FUNC_0 (long long VAR_4) {
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) if (VAR_2[VAR_5] && (VAR_2[VAR_5]->cluster_id & VAR_1) == (VAR_4 & VAR_1)) {
    VAR_0 = VAR_2[VAR_5];
    return VAR_5;
  }
  return -1;
}
