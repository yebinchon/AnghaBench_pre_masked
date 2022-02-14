
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct dm_cache_migration {int cache; int * overwrite_bio; TYPE_1__* op; } ;
struct TYPE_2__ {int oblock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct work_struct*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct dm_cache_migration*,int ) ;
 struct dm_cache_migration* FUNC_6 (struct work_struct*) ;

__attribute__((used)) static void FUNC_7(struct work_struct *VAR_1)
{
 struct dm_cache_migration *VAR_2 = FUNC_6(VAR_1);

 if (VAR_2->overwrite_bio) {





  if (!FUNC_4(VAR_2->cache, VAR_2->overwrite_bio, VAR_2->op->oblock)) {



   bool VAR_3 = FUNC_1(VAR_2->cache, VAR_2->op->oblock, VAR_2->overwrite_bio);
   FUNC_0(VAR_3);
   VAR_2->overwrite_bio = ((void*)0);
   FUNC_2(VAR_2->cache);
   FUNC_3(VAR_1);
   return;
  }
  FUNC_5(VAR_2, VAR_0);

 } else
  FUNC_3(VAR_1);
}
