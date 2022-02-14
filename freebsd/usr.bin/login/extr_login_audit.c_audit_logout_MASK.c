
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
typedef int token_t ;
typedef int pid_t ;
typedef int gid_t ;
struct TYPE_2__ {int pw_gid; int pw_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_4 (int,int *) ;
 scalar_t__ FUNC_5 (int ,int*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

void
FUNC_10(void)
{
 token_t *VAR_7;
 int VAR_8;
 uid_t VAR_9 = VAR_5->pw_uid;
 gid_t VAR_10 = VAR_5->pw_gid;
 pid_t VAR_11 = FUNC_9();
 int VAR_12;


  if (FUNC_5(VAR_2, &VAR_12, sizeof(int)) < 0) {
  if (VAR_4 == VAR_3)
   return;
  FUNC_6(1, "could not determine audit condition");
 }
 if (VAR_12 == VAR_0)
  return;

 if ((VAR_8 = FUNC_1()) == -1)
  FUNC_6(1, "audit error: au_open() failed");


 if ((VAR_7 = FUNC_3(VAR_9, FUNC_8(), FUNC_7(), VAR_9, VAR_10, VAR_11,
     VAR_11, &VAR_6)) == ((void*)0))
  FUNC_6(1, "audit error: au_to_subject32() failed");
 FUNC_4(VAR_8, VAR_7);

 if ((VAR_7 = FUNC_2(0, 0)) == ((void*)0))
  FUNC_6(1, "audit error: au_to_return32() failed");
 FUNC_4(VAR_8, VAR_7);

 if (FUNC_0(VAR_8, 1, VAR_1) == -1)
  FUNC_6(1, "audit record was not committed.");
}
