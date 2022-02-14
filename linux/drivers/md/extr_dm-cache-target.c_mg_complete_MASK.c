
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct policy_work {int op; int oblock; int cblock; } ;
struct TYPE_3__ {int input; } ;
struct dm_cache_migration {scalar_t__ cell; TYPE_2__* overwrite_bio; TYPE_1__ k; struct policy_work* op; struct cache* cache; } ;
struct cache {int prison; int policy; int stats; } ;
struct bio_list {int dummy; } ;
typedef int dm_cblock_t ;
struct TYPE_4__ {int bi_status; } ;


 int VAR_0 ;



 int FUNC_0 (struct cache*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct bio_list*) ;
 int FUNC_3 (struct cache*,int ) ;
 int FUNC_4 (struct cache*) ;
 int FUNC_5 (struct cache*,struct bio_list*) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,struct bio_list*) ;
 int FUNC_7 (struct cache*,int ) ;
 int FUNC_8 (struct cache*,int ) ;
 int FUNC_9 (struct dm_cache_migration*) ;
 int FUNC_10 (struct cache*,scalar_t__) ;
 int FUNC_11 (struct cache*,int ) ;
 int FUNC_12 (int ,struct policy_work*,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (struct cache*) ;

__attribute__((used)) static void FUNC_15(struct dm_cache_migration *VAR_1, bool VAR_2)
{
 struct bio_list VAR_3;
 struct cache *VAR_4 = VAR_1->cache;
 struct policy_work *VAR_5 = VAR_1->op;
 dm_cblock_t VAR_6 = VAR_5->cblock;

 if (VAR_2)
  FUNC_13(&VAR_4->stats, VAR_5->op);

 switch (VAR_5->op) {
 case 129:
  FUNC_3(VAR_4, FUNC_11(VAR_4, VAR_5->oblock));
  FUNC_12(VAR_4->policy, VAR_5, VAR_2);

  if (VAR_1->overwrite_bio) {
   if (VAR_2)
    FUNC_8(VAR_4, VAR_6);
   else if (VAR_1->k.input)
    VAR_1->overwrite_bio->bi_status = VAR_1->k.input;
   else
    VAR_1->overwrite_bio->bi_status = VAR_0;
   FUNC_1(VAR_1->overwrite_bio);
  } else {
   if (VAR_2)
    FUNC_7(VAR_4, VAR_6);
   FUNC_4(VAR_4);
  }
  break;

 case 130:



  if (VAR_2)
   FUNC_7(VAR_4, VAR_6);
  FUNC_12(VAR_4->policy, VAR_5, VAR_2);
  FUNC_4(VAR_4);
  break;

 case 128:
  if (VAR_2)
   FUNC_7(VAR_4, VAR_6);
  FUNC_12(VAR_4->policy, VAR_5, VAR_2);
  FUNC_4(VAR_4);
  break;
 }

 FUNC_2(&VAR_3);
 if (VAR_1->cell) {
  if (FUNC_6(VAR_4->prison, VAR_1->cell, &VAR_3))
   FUNC_10(VAR_4, VAR_1->cell);
 }

 FUNC_9(VAR_1);
 FUNC_5(VAR_4, &VAR_3);
 FUNC_14(VAR_4);

 FUNC_0(VAR_4);
}
