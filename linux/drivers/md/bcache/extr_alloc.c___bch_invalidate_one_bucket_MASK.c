
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache {int buckets; TYPE_1__* set; } ;
struct bucket {int pin; int prio; } ;
struct TYPE_2__ {int bucket_lock; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bucket*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct bucket*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cache*,struct bucket*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct cache*,struct bucket*) ;

void FUNC_7(struct cache *VAR_2, struct bucket *VAR_3)
{
 FUNC_5(&VAR_2->set->bucket_lock);
 FUNC_0(FUNC_1(VAR_3) && FUNC_1(VAR_3) != VAR_0);

 if (FUNC_2(VAR_3))
  FUNC_6(VAR_2, VAR_3 - VAR_2->buckets);

 FUNC_4(VAR_2, VAR_3);
 VAR_3->prio = VAR_1;
 FUNC_3(&VAR_3->pin);
}
