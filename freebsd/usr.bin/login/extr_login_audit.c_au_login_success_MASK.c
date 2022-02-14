
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
typedef int token_t ;
typedef int pid_t ;
typedef int gid_t ;
struct TYPE_4__ {int ai_mask; int ai_termid; int ai_asid; int ai_auid; } ;
typedef TYPE_1__ auditinfo_t ;
typedef int au_mask_t ;
typedef int au_cond ;
struct TYPE_5__ {int pw_name; int pw_gid; int pw_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int,int *) ;
 scalar_t__ FUNC_6 (int ,int*,int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 TYPE_3__* VAR_5 ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int VAR_6 ;

void
FUNC_14(void)
{
 token_t *VAR_7;
 int VAR_8;
 au_mask_t VAR_9;
 auditinfo_t VAR_10;
 uid_t VAR_11 = VAR_5->pw_uid;
 gid_t VAR_12 = VAR_5->pw_gid;
 pid_t VAR_13 = FUNC_12();
 int VAR_14;


  if (FUNC_6(VAR_2, &VAR_14, sizeof(VAR_14)) < 0) {
  if (VAR_4 == VAR_3)
   return;
  FUNC_9(1, "could not determine audit condition");
 }
 if (VAR_14 == VAR_0)
  return;


 if (FUNC_4(VAR_5->pw_name, &VAR_9) == -1)
  FUNC_9(1, "could not calculate audit mask");


 VAR_10.ai_auid = VAR_11;
 VAR_10.ai_asid = VAR_13;
 FUNC_7(&VAR_6, &VAR_10.ai_termid, sizeof(VAR_10.ai_termid));
 FUNC_7(&VAR_9, &VAR_10.ai_mask, sizeof(VAR_10.ai_mask));
 if (FUNC_13(&VAR_10) != 0)
  FUNC_8(1, "setaudit failed");

 if ((VAR_8 = FUNC_1()) == -1)
  FUNC_9(1, "audit error: au_open() failed");

 if ((VAR_7 = FUNC_3(VAR_11, FUNC_11(), FUNC_10(), VAR_11, VAR_12, VAR_13,
     VAR_13, &VAR_6)) == ((void*)0))
  FUNC_9(1, "audit error: au_to_subject32() failed");
 FUNC_5(VAR_8, VAR_7);

 if ((VAR_7 = FUNC_2(0, 0)) == ((void*)0))
  FUNC_9(1, "audit error: au_to_return32() failed");
 FUNC_5(VAR_8, VAR_7);

 if (FUNC_0(VAR_8, 1, VAR_1) == -1)
  FUNC_9(1, "audit record was not committed.");
}
