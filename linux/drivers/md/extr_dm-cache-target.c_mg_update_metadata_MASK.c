
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct policy_work {int op; int cblock; int oblock; } ;
struct dm_cache_migration {int k; struct policy_work* op; struct cache* cache; } ;
struct cache {int committer; int cmd; } ;


 int FUNC_0 (char*,int ) ;



 int FUNC_1 (struct cache*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct cache*,char*,int) ;
 int FUNC_7 (struct dm_cache_migration*,int) ;
 int VAR_0 ;
 int FUNC_8 (int *) ;
 struct dm_cache_migration* FUNC_9 (struct work_struct*) ;

__attribute__((used)) static void FUNC_10(struct work_struct *VAR_1)
{
 int VAR_2;
 struct dm_cache_migration *VAR_3 = FUNC_9(VAR_1);
 struct cache *VAR_4 = VAR_3->cache;
 struct policy_work *VAR_5 = VAR_3->op;

 switch (VAR_5->op) {
 case 129:
  VAR_2 = FUNC_3(VAR_4->cmd, VAR_5->cblock, VAR_5->oblock);
  if (VAR_2) {
   FUNC_0("%s: migration failed; couldn't insert mapping",
        FUNC_1(VAR_4));
   FUNC_6(VAR_4, "dm_cache_insert_mapping", VAR_2);

   FUNC_7(VAR_3, 0);
   return;
  }
  FUNC_7(VAR_3, 1);
  break;

 case 130:
  VAR_2 = FUNC_4(VAR_4->cmd, VAR_5->cblock);
  if (VAR_2) {
   FUNC_0("%s: migration failed; couldn't update on disk metadata",
        FUNC_1(VAR_4));
   FUNC_6(VAR_4, "dm_cache_remove_mapping", VAR_2);

   FUNC_7(VAR_3, 0);
   return;
  }
  FUNC_5(&VAR_3->k, VAR_0);
  FUNC_2(&VAR_4->committer, &VAR_3->k);
  FUNC_8(&VAR_4->committer);
  break;

 case 128:
  FUNC_7(VAR_3, 1);
  break;
 }
}
