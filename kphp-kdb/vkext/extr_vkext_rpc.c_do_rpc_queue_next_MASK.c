
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_queue {TYPE_1__* completed; } ;
struct TYPE_2__ {long long x; } ;


 int FUNC_0 (struct rpc_queue*) ;
 double VAR_0 ;
 scalar_t__ FUNC_1 (double) ;

long long FUNC_2 (struct rpc_queue *VAR_1, double VAR_2) {
  FUNC_0 (VAR_1);
  if (VAR_1->completed) {

    return VAR_1->completed->x;
  }
  do {
    if (FUNC_1 (VAR_2) < 0) {
      return 0;
    }
    if (VAR_1->completed) {
      return VAR_1->completed->x;
    }
  } while (VAR_0 < VAR_2);
  return 0;
}
