
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int hash_lock_index; } ;
struct r5conf {int max_nr_stripes; int active_stripes; int slab_cache; int pool_size; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct stripe_head* FUNC_0 (int ,int ,int ,struct r5conf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct stripe_head*) ;
 scalar_t__ FUNC_3 (struct stripe_head*,int ) ;
 int FUNC_4 (struct stripe_head*) ;
 int FUNC_5 (struct stripe_head*) ;

__attribute__((used)) static int FUNC_6(struct r5conf *VAR_1, gfp_t VAR_2)
{
 struct stripe_head *VAR_3;

 VAR_3 = FUNC_0(VAR_1->slab_cache, VAR_2, VAR_1->pool_size, VAR_1);
 if (!VAR_3)
  return 0;

 if (FUNC_3(VAR_3, VAR_2)) {
  FUNC_5(VAR_3);
  FUNC_2(VAR_1->slab_cache, VAR_3);
  return 0;
 }
 VAR_3->hash_lock_index =
  VAR_1->max_nr_stripes % VAR_0;

 FUNC_1(&VAR_1->active_stripes);

 FUNC_4(VAR_3);
 VAR_1->max_nr_stripes++;
 return 1;
}
