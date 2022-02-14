
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int treespace_t ;
struct TYPE_2__ {int free_queue_cnt; scalar_t__* free_queue; } ;


 TYPE_1__* VAR_0 ;

int FUNC_0 (treespace_t VAR_1) {
  int VAR_2;
  long long VAR_3 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_0->free_queue_cnt; VAR_2++) {
    VAR_3 += VAR_0->free_queue[2 * VAR_2 + 1];
  }
  return VAR_3;
}
