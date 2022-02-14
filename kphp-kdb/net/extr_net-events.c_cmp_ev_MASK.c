
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int priority; long long timestamp; } ;
typedef TYPE_1__ event_t ;



int FUNC_0 (event_t *VAR_0, event_t *VAR_1) {
  int VAR_2 = VAR_0->priority - VAR_1->priority;
  long long VAR_3;
  if (VAR_2) return VAR_2;
  VAR_3 = VAR_0->timestamp - VAR_1->timestamp;
  return VAR_3 < 0 ? -1 : (VAR_3 ? 1 : 0);
}
