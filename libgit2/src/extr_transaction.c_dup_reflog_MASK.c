
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {size_t length; TYPE_1__** contents; } ;
struct TYPE_9__ {int committer; struct TYPE_9__* msg; int oid_cur; int oid_old; TYPE_4__ entries; struct TYPE_9__* ref_name; } ;
typedef TYPE_1__ git_reflog_entry ;
typedef TYPE_1__ git_reflog ;
typedef int git_pool ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 void* FUNC_2 (int *,size_t) ;
 void* FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 TYPE_1__* FUNC_5 (TYPE_4__*,size_t) ;

__attribute__((used)) static int FUNC_6(git_reflog **VAR_0, const git_reflog *VAR_1, git_pool *VAR_2)
{
 git_reflog *VAR_3;
 git_reflog_entry *VAR_4;
 size_t VAR_5, VAR_6;

 VAR_3 = FUNC_2(VAR_2, sizeof(git_reflog));
 FUNC_0(VAR_3);

 VAR_3->ref_name = FUNC_3(VAR_2, VAR_1->ref_name);
 FUNC_0(VAR_3->ref_name);

 VAR_5 = VAR_1->entries.length;
 VAR_3->entries.length = VAR_5;
 VAR_3->entries.contents = FUNC_2(VAR_2, VAR_5 * sizeof(void *));
 FUNC_0(*VAR_3->entries.contents);

 VAR_4 = FUNC_2(VAR_2, VAR_5 * sizeof(git_reflog_entry));
 FUNC_0(VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  const git_reflog_entry *VAR_7;
  git_reflog_entry *VAR_8;

  VAR_8 = &VAR_4[VAR_6];
  VAR_3->entries.contents[VAR_6] = VAR_8;

  VAR_7 = FUNC_5(&VAR_1->entries, VAR_6);
  FUNC_1(&VAR_8->oid_old, &VAR_7->oid_old);
  FUNC_1(&VAR_8->oid_cur, &VAR_7->oid_cur);

  VAR_8->msg = FUNC_3(VAR_2, VAR_7->msg);
  FUNC_0(VAR_8->msg);

  if (FUNC_4(&VAR_8->committer, VAR_7->committer, VAR_2) < 0)
   return -1;
 }


 *VAR_0 = VAR_3;
 return 0;
}
