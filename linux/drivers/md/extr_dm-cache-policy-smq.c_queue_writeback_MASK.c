
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nr_levels; } ;
struct smq_policy {TYPE_1__ dirty; int bg_work; } ;
struct policy_work {int cblock; int oblock; int op; } ;
struct entry {int oblock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct policy_work*,int *) ;
 int FUNC_1 (struct smq_policy*,struct entry*) ;
 int FUNC_2 (struct smq_policy*,struct entry*) ;
 int FUNC_3 (struct smq_policy*,struct entry*) ;
 int FUNC_4 (TYPE_1__*,struct entry*) ;
 struct entry* FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*,struct entry*) ;

__attribute__((used)) static void FUNC_7(struct smq_policy *VAR_1, bool VAR_2)
{
 int VAR_3;
 struct policy_work VAR_4;
 struct entry *VAR_5;

 VAR_5 = FUNC_5(&VAR_1->dirty, VAR_1->dirty.nr_levels, VAR_2);
 if (VAR_5) {
  FUNC_3(VAR_1, VAR_5);
  FUNC_4(&VAR_1->dirty, VAR_5);

  VAR_4.op = VAR_0;
  VAR_4.oblock = VAR_5->oblock;
  VAR_4.cblock = FUNC_2(VAR_1, VAR_5);

  VAR_3 = FUNC_0(VAR_1->bg_work, &VAR_4, ((void*)0));
  if (VAR_3) {
   FUNC_1(VAR_1, VAR_5);
   FUNC_6(&VAR_1->dirty, VAR_5);
  }
 }
}
