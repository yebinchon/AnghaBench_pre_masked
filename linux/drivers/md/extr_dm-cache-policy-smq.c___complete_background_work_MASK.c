
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int bg_work; int cache_alloc; int table; } ;
struct policy_work {int op; int oblock; int cblock; } ;
struct entry {int level; int oblock; } ;


 int VAR_0 ;



 int FUNC_0 (int ,struct policy_work*) ;
 int FUNC_1 (struct smq_policy*,struct entry*) ;
 int FUNC_2 (int *,struct entry*) ;
 int FUNC_3 (int ) ;
 struct entry* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,struct entry*) ;
 int FUNC_6 (struct smq_policy*,struct entry*) ;
 int FUNC_7 (struct smq_policy*,struct entry*) ;

__attribute__((used)) static void FUNC_8(struct smq_policy *VAR_1,
           struct policy_work *VAR_2,
           bool VAR_3)
{
 struct entry *VAR_4 = FUNC_4(&VAR_1->cache_alloc,
        FUNC_3(VAR_2->cblock));

 switch (VAR_2->op) {
 case 129:

  FUNC_1(VAR_1, VAR_4);
  if (VAR_3) {
   VAR_4->oblock = VAR_2->oblock;
   VAR_4->level = VAR_0 - 1;
   FUNC_6(VAR_1, VAR_4);

  } else {
   FUNC_2(&VAR_1->cache_alloc, VAR_4);

  }
  break;

 case 130:

  if (VAR_3) {
   FUNC_5(&VAR_1->table, VAR_4);
   FUNC_2(&VAR_1->cache_alloc, VAR_4);

  } else {
   FUNC_1(VAR_1, VAR_4);
   FUNC_7(VAR_1, VAR_4);

  }
  break;

 case 128:

  FUNC_1(VAR_1, VAR_4);
  FUNC_7(VAR_1, VAR_4);

  break;
 }

 FUNC_0(VAR_1->bg_work, VAR_2);
}
