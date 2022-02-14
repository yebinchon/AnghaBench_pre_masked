
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hash; int order; } ;
typedef TYPE_1__ pair_t ;



int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const pair_t *VAR_2 = VAR_0, *VAR_3 = VAR_1;
  if (VAR_2->hash < VAR_3->hash) return -1;
  if (VAR_2->hash > VAR_3->hash) return 1;
  return VAR_2->order - VAR_3->order;
}
