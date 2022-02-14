
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int table; } ;
struct entry {int pending_work; } ;


 int FUNC_0 (int *,struct entry*) ;
 int FUNC_1 (struct smq_policy*,struct entry*) ;

__attribute__((used)) static void FUNC_2(struct smq_policy *VAR_0, struct entry *VAR_1)
{
 FUNC_0(&VAR_0->table, VAR_1);
 if (!VAR_1->pending_work)
  FUNC_1(VAR_0, VAR_1);
}
