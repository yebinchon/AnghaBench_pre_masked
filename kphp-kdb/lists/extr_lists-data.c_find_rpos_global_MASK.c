
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int N; size_t* IA; scalar_t__* DA; } ;
typedef TYPE_1__ listree_global_t ;
typedef scalar_t__ global_id_t ;


 int FUNC_0 (int) ;

int FUNC_1 (listree_global_t *VAR_0, global_id_t VAR_1) {
  int VAR_2 = -1, VAR_3 = VAR_0->N, VAR_4;


  while (VAR_3 - VAR_2 > 1) {
    VAR_4 = (VAR_2 + VAR_3) / 2;
    if (VAR_1 <= (global_id_t)VAR_0->DA[VAR_0->IA[VAR_4]]) {
      VAR_3 = VAR_4;
    } else {
      VAR_2 = VAR_4;
    }
  }
  FUNC_0 (VAR_3 >= 0 && VAR_3 <= VAR_0->N);
  return VAR_0->N - VAR_3;
}
