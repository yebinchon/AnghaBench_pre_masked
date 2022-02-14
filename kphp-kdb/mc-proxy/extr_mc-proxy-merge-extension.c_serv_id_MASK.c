
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {scalar_t__ target; } ;
struct TYPE_2__ {int tot_buckets; scalar_t__* buckets; } ;


 TYPE_1__* VAR_0 ;

int FUNC_0 (struct connection *VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->tot_buckets; VAR_2++) {
    if (VAR_0->buckets[VAR_2] == VAR_1->target) {
      return VAR_2;
    }
  }
  return -1;
}
