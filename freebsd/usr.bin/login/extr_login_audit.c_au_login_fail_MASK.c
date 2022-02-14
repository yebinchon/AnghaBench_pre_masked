
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
typedef int token_t ;
typedef int pid_t ;
typedef int gid_t ;
typedef int au_cond ;
struct TYPE_2__ {int pw_uid; int pw_gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 () ;
 int * FUNC_2 (int,scalar_t__) ;
 int * FUNC_3 (int,int ,int ,int,int,int,int,int *) ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (int,int *) ;
 scalar_t__ FUNC_6 (int ,int*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

void
FUNC_11(const char *VAR_7, int VAR_8)
{
 token_t *VAR_9;
 int VAR_10;
 int VAR_11;
 uid_t VAR_12;
 gid_t VAR_13;
 pid_t VAR_14 = FUNC_10();


  if (FUNC_6(VAR_2, &VAR_11, sizeof(VAR_11)) < 0) {
  if (VAR_4 == VAR_3)
   return;
  FUNC_7(1, "could not determine audit condition");
 }
 if (VAR_11 == VAR_0)
  return;

 if ((VAR_10 = FUNC_1()) == -1)
  FUNC_7(1, "audit error: au_open() failed");

 if (VAR_8) {




  if ((VAR_9 = FUNC_3(-1, FUNC_9(), FUNC_8(), -1, -1,
      VAR_14, -1, &VAR_6)) == ((void*)0))
   FUNC_7(1, "audit error: au_to_subject32() failed");
 } else {

  VAR_12 = VAR_5->pw_uid;
  VAR_13 = VAR_5->pw_gid;
  if ((VAR_9 = FUNC_3(VAR_12, FUNC_9(), FUNC_8(), VAR_12,
      VAR_13, VAR_14, VAR_14, &VAR_6)) == ((void*)0))
   FUNC_7(1, "audit error: au_to_subject32() failed");
 }
 FUNC_5(VAR_10, VAR_9);


 if ((VAR_9 = FUNC_4(VAR_7)) == ((void*)0))
  FUNC_7(1, "audit error: au_to_text() failed");
 FUNC_5(VAR_10, VAR_9);

 if ((VAR_9 = FUNC_2(1, VAR_4)) == ((void*)0))
  FUNC_7(1, "audit error: au_to_return32() failed");
 FUNC_5(VAR_10, VAR_9);

 if (FUNC_0(VAR_10, 1, VAR_1) == -1)
  FUNC_7(1, "audit error: au_close() was not committed");
}
