
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_oid ;
typedef scalar_t__ git_off_t ;
struct TYPE_6__ {struct TYPE_6__* message; int committer; int author; int id; } ;
typedef TYPE_1__ git_note ;
typedef int git_commit ;
typedef int git_blob ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int ,size_t) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(
 git_note **VAR_0,
 git_oid *VAR_1,
 git_commit *VAR_2,
 git_blob *VAR_3)
{
 git_note *VAR_4 = ((void*)0);
 git_off_t VAR_5;

 VAR_4 = FUNC_2(sizeof(git_note));
 FUNC_0(VAR_4);

 FUNC_8(&VAR_4->id, VAR_1);

 if (FUNC_9(&VAR_4->author, FUNC_6(VAR_2)) < 0 ||
  FUNC_9(&VAR_4->committer, FUNC_7(VAR_2)) < 0)
  return -1;

 VAR_5 = FUNC_5(VAR_3);
 FUNC_1(VAR_5);

 VAR_4->message = FUNC_3(FUNC_4(VAR_3), (size_t)VAR_5);
 FUNC_0(VAR_4->message);

 *VAR_0 = VAR_4;
 return 0;
}
