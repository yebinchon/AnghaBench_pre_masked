
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ counter_id; scalar_t__ created_at; } ;


 TYPE_1__** VAR_0 ;

int FUNC_0 (const void *VAR_1, const void *VAR_2) {
  int VAR_3 = *(int *)VAR_1;
  int VAR_4 = *(int *)VAR_2;
  if (VAR_0[VAR_3]->counter_id < VAR_0[VAR_4]->counter_id) return -1;
  if (VAR_0[VAR_3]->counter_id > VAR_0[VAR_4]->counter_id) return 1;
  if (VAR_0[VAR_3]->created_at < VAR_0[VAR_4]->created_at) return 1;
  if (VAR_0[VAR_3]->created_at > VAR_0[VAR_4]->created_at) return -1;
  return 0;
}
