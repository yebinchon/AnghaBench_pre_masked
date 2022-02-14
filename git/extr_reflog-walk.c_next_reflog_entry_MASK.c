
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reflog_walk_info {size_t nr; struct commit_reflog* last_commit_reflog; struct commit_reflog** logs; } ;
struct commit_reflog {int recno; } ;
struct commit {int dummy; } ;


 scalar_t__ FUNC_0 (struct commit_reflog*) ;
 struct commit* FUNC_1 (struct commit_reflog*) ;

struct commit *FUNC_2(struct reflog_walk_info *VAR_0)
{
 struct commit_reflog *VAR_1 = ((void*)0);
 struct commit *VAR_2 = ((void*)0);
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nr; VAR_3++) {
  struct commit_reflog *VAR_4 = VAR_0->logs[VAR_3];
  struct commit *VAR_5 = FUNC_1(VAR_4);

  if (!VAR_5)
   continue;

  if (!VAR_1 || FUNC_0(VAR_4) > FUNC_0(VAR_1)) {
   VAR_1 = VAR_4;
   VAR_2 = VAR_5;
  }
 }

 if (VAR_1) {
  VAR_1->recno--;
  VAR_0->last_commit_reflog = VAR_1;
  return VAR_2;
 }

 return ((void*)0);
}
