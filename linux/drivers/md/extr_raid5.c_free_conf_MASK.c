
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int pool_size; struct r5conf* pending_data; struct r5conf* stripe_hashtbl; int bio_split; struct r5conf* disks; scalar_t__ extra_page; int shrinker; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct r5conf*) ;
 int FUNC_2 (struct r5conf*) ;
 int FUNC_3 (struct r5conf*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct r5conf*) ;
 int FUNC_6 (struct r5conf*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct r5conf *VAR_0)
{
 int VAR_1;

 FUNC_3(VAR_0);

 FUNC_7(&VAR_0->shrinker);
 FUNC_1(VAR_0);
 FUNC_6(VAR_0);
 FUNC_5(VAR_0);
 for (VAR_1 = 0; VAR_1 < VAR_0->pool_size; VAR_1++)
  if (VAR_0->disks[VAR_1].extra_page)
   FUNC_4(VAR_0->disks[VAR_1].extra_page);
 FUNC_2(VAR_0->disks);
 FUNC_0(&VAR_0->bio_split);
 FUNC_2(VAR_0->stripe_hashtbl);
 FUNC_2(VAR_0->pending_data);
 FUNC_2(VAR_0);
}
