
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * values; } ;
typedef TYPE_1__ weights_counters_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1 (weights_counters_t *VAR_0) {
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < 32; VAR_1++) {
    if (FUNC_0 (VAR_0->values[VAR_1]) > 1e-9) {
      return 0;
    }
  }
  return 1;
}
