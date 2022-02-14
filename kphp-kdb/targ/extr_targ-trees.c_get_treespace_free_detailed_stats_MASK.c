
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int treespace_t ;
struct TYPE_2__ {int free_queue_cnt; int* free_queue; } ;


 TYPE_1__* VAR_0 ;

int FUNC_0 (treespace_t VAR_1, int *VAR_2) {
  int VAR_3, VAR_4 = VAR_0->free_queue_cnt;
  int *VAR_5 = VAR_0->free_queue + 1;
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
    *VAR_2++ = *VAR_5++;
    ++VAR_5;
  }
  return VAR_4;
}
