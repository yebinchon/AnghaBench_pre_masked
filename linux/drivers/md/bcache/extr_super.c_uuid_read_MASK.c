
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uuid_entry_v0 {int invalidated; int last_reg; int first_reg; int label; int uuid; } ;
struct uuid_entry {scalar_t__ sectors; scalar_t__ flags; int invalidated; int last_reg; int first_reg; int label; int uuid; } ;
struct bkey {int dummy; } ;
struct jset {scalar_t__ version; struct bkey uuid_bucket; } ;
struct closure {int dummy; } ;
struct cache_set {int nr_uuids; scalar_t__ uuids; int uuid_bucket; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cache_set*,struct bkey*) ;
 int FUNC_1 (int *,struct bkey*) ;
 int FUNC_2 (struct closure*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct cache_set*,int ,int ,struct bkey*,struct closure*) ;

__attribute__((used)) static char *FUNC_5(struct cache_set *VAR_2, struct jset *VAR_3, struct closure *VAR_4)
{
 struct bkey *VAR_5 = &VAR_3->uuid_bucket;

 if (FUNC_0(VAR_2, VAR_5))
  return "bad uuid pointer";

 FUNC_1(&VAR_2->uuid_bucket, VAR_5);
 FUNC_4(VAR_2, VAR_1, 0, VAR_5, VAR_4);

 if (VAR_3->version < VAR_0) {
  struct uuid_entry_v0 *VAR_6 = (void *) VAR_2->uuids;
  struct uuid_entry *VAR_7 = (void *) VAR_2->uuids;
  int VAR_8;

  FUNC_2(VAR_4);







  for (VAR_8 = VAR_2->nr_uuids - 1;
       VAR_8 >= 0;
       --VAR_8) {
   FUNC_3(VAR_7[VAR_8].uuid, VAR_6[VAR_8].uuid, 16);
   FUNC_3(VAR_7[VAR_8].label, VAR_6[VAR_8].label, 32);

   VAR_7[VAR_8].first_reg = VAR_6[VAR_8].first_reg;
   VAR_7[VAR_8].last_reg = VAR_6[VAR_8].last_reg;
   VAR_7[VAR_8].invalidated = VAR_6[VAR_8].invalidated;

   VAR_7[VAR_8].flags = 0;
   VAR_7[VAR_8].sectors = 0;
  }
 }

 return ((void*)0);
}
