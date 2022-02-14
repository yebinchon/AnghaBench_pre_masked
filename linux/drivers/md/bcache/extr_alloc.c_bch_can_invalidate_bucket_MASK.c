
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache {TYPE_1__* set; } ;
struct bucket {int pin; } ;
struct TYPE_2__ {int gc_mark_valid; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bucket*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct bucket*) ;

bool FUNC_4(struct cache *VAR_1, struct bucket *VAR_2)
{
 FUNC_0(!VAR_1->set->gc_mark_valid);

 return (!FUNC_1(VAR_2) ||
  FUNC_1(VAR_2) == VAR_0) &&
  !FUNC_2(&VAR_2->pin) &&
  FUNC_3(VAR_2);
}
