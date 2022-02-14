
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nr_levels; } ;
struct smq_policy {TYPE_1__ clean; int bg_work; int migrations_allowed; } ;
struct policy_work {int cblock; int oblock; int op; } ;
struct entry {int oblock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,struct policy_work*,int *) ;
 int FUNC_2 (struct smq_policy*,int) ;
 int FUNC_3 (struct smq_policy*,struct entry*) ;
 int FUNC_4 (struct smq_policy*,struct entry*) ;
 int FUNC_5 (struct smq_policy*,struct entry*) ;
 int FUNC_6 (TYPE_1__*,struct entry*) ;
 struct entry* FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (TYPE_1__*,struct entry*) ;
 int FUNC_9 (struct smq_policy*,int) ;

__attribute__((used)) static void FUNC_10(struct smq_policy *VAR_1)
{
 int VAR_2;
 struct policy_work VAR_3;
 struct entry *VAR_4;

 if (FUNC_0(!VAR_1->migrations_allowed))
  return;

 VAR_4 = FUNC_7(&VAR_1->clean, VAR_1->clean.nr_levels / 2, 1);
 if (!VAR_4) {
  if (!FUNC_2(VAR_1, 1))
   FUNC_9(VAR_1, 0);
  return;
 }

 FUNC_5(VAR_1, VAR_4);
 FUNC_6(&VAR_1->clean, VAR_4);

 VAR_3.op = VAR_0;
 VAR_3.oblock = VAR_4->oblock;
 VAR_3.cblock = FUNC_4(VAR_1, VAR_4);
 VAR_2 = FUNC_1(VAR_1->bg_work, &VAR_3, ((void*)0));
 if (VAR_2) {
  FUNC_3(VAR_1, VAR_4);
  FUNC_8(&VAR_1->clean, VAR_4);
 }
}
