
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct RHash {TYPE_1__* ht; } ;
typedef int mrb_state ;
struct TYPE_2__ {int size; } ;



size_t
FUNC_0(mrb_state *VAR_0, struct RHash *VAR_1)
{
  if (!VAR_1->ht) return 0;
  return VAR_1->ht->size*2;
}
