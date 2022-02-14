
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int * A; } ;
typedef TYPE_1__ hash_list_t ;


 int FUNC_0 (int,int ) ;

void FUNC_1 (int VAR_0, hash_list_t *VAR_1) {
  int VAR_2;
  if (!VAR_1 || VAR_1->len <= 0) { return; }
  for (VAR_2 = 0; VAR_2 < VAR_1->len; VAR_2++) {
    FUNC_0 (VAR_0, VAR_1->A[VAR_2]);
  }
}
