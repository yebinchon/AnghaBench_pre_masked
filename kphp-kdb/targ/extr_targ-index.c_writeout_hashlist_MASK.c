
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int * A; } ;
typedef TYPE_1__ hash_list_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2 (hash_list_t *VAR_0) {
  if (!VAR_0) {
    FUNC_0 (0);
    return;
  }
  FUNC_0 (VAR_0->len);
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < VAR_0->len; VAR_1++) {
    FUNC_1 (VAR_0->A[VAR_1]);
  }
}
