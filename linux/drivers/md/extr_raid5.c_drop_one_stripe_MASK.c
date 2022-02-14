
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int count; } ;
struct r5conf {int max_nr_stripes; int active_stripes; int slab_cache; scalar_t__ hash_locks; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct stripe_head*) ;
 struct stripe_head* FUNC_4 (struct r5conf*,int) ;
 int FUNC_5 (struct stripe_head*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct r5conf *VAR_1)
{
 struct stripe_head *VAR_2;
 int VAR_3 = (VAR_1->max_nr_stripes - 1) & VAR_0;

 FUNC_6(VAR_1->hash_locks + VAR_3);
 VAR_2 = FUNC_4(VAR_1, VAR_3);
 FUNC_7(VAR_1->hash_locks + VAR_3);
 if (!VAR_2)
  return 0;
 FUNC_0(FUNC_2(&VAR_2->count));
 FUNC_5(VAR_2);
 FUNC_3(VAR_1->slab_cache, VAR_2);
 FUNC_1(&VAR_1->active_stripes);
 VAR_1->max_nr_stripes--;
 return 1;
}
