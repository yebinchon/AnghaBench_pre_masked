
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int cache_alloc; int bg_work; int migrations_allowed; } ;
struct policy_work {int cblock; int oblock; int op; } ;
struct entry {int pending_work; } ;
typedef int dm_oblock_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct entry* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct policy_work*,struct policy_work**) ;
 int FUNC_5 (int *,struct entry*) ;
 int FUNC_6 (struct smq_policy*) ;
 int FUNC_7 (struct smq_policy*,struct entry*) ;
 int FUNC_8 (struct smq_policy*) ;

__attribute__((used)) static void FUNC_9(struct smq_policy *VAR_1, dm_oblock_t VAR_2,
       struct policy_work **VAR_3)
{
 int VAR_4;
 struct entry *VAR_5;
 struct policy_work VAR_6;

 if (!VAR_1->migrations_allowed)
  return;

 if (FUNC_2(&VAR_1->cache_alloc)) {




  if (!FUNC_6(VAR_1))
   FUNC_8(VAR_1);
  return;
 }

 if (FUNC_3(VAR_1->bg_work, VAR_2))
  return;





 VAR_5 = FUNC_1(&VAR_1->cache_alloc);
 FUNC_0(!VAR_5);
 VAR_5->pending_work = 1;
 VAR_6.op = VAR_0;
 VAR_6.oblock = VAR_2;
 VAR_6.cblock = FUNC_7(VAR_1, VAR_5);
 VAR_4 = FUNC_4(VAR_1->bg_work, &VAR_6, VAR_3);
 if (VAR_4)
  FUNC_5(&VAR_1->cache_alloc, VAR_5);
}
