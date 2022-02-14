
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_signature ;
struct TYPE_10__ {char* msg; int const oid_cur; int const oid_old; int committer; } ;
typedef TYPE_1__ git_reflog_entry ;
struct TYPE_11__ {int entries; } ;
typedef TYPE_2__ git_reflog ;
typedef int git_oid ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int,int) ;
 char* FUNC_3 (char const*,size_t) ;
 int FUNC_4 (int const*,int const*) ;
 int FUNC_5 (int const*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_8 (int *,int const*) ;
 scalar_t__ FUNC_9 (int *,TYPE_1__*) ;
 size_t FUNC_10 (char const*) ;

int FUNC_11(git_reflog *VAR_1, const git_oid *VAR_2, const git_signature *VAR_3, const char *VAR_4)
{
 const git_reflog_entry *VAR_5;
 git_reflog_entry *VAR_6;

 FUNC_1(VAR_1 && VAR_2 && VAR_3);

 VAR_6 = FUNC_2(1, sizeof(git_reflog_entry));
 FUNC_0(VAR_6);

 if ((FUNC_8(&VAR_6->committer, VAR_3)) < 0)
  goto cleanup;

 if (VAR_4 != ((void*)0)) {
  size_t VAR_7, VAR_8 = FUNC_10(VAR_4);

  if ((VAR_6->msg = FUNC_3(VAR_4, VAR_8)) == ((void*)0))
   goto cleanup;





  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
   if (VAR_6->msg[VAR_7] == '\n')
    VAR_6->msg[VAR_7] = ' ';
 }

 VAR_5 = FUNC_7(VAR_1, 0);

 if (VAR_5 == ((void*)0))
  FUNC_5(&VAR_6->oid_old, VAR_0);
 else
  FUNC_4(&VAR_6->oid_old, &VAR_5->oid_cur);

 FUNC_4(&VAR_6->oid_cur, VAR_2);

 if (FUNC_9(&VAR_1->entries, VAR_6) < 0)
  goto cleanup;

 return 0;

cleanup:
 FUNC_6(VAR_6);
 return -1;
}
