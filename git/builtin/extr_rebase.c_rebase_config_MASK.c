
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rebase_options {int use_legacy_rebase; void* reschedule_failed_exec; void* autostash; int * gpg_sign_opt; void* autosquash; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char const*,void*) ;
 int FUNC_3 (char const*,char*) ;
 int * FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, const char *VAR_2, void *VAR_3)
{
 struct rebase_options *VAR_4 = VAR_3;

 if (!FUNC_3(VAR_1, "rebase.stat")) {
  if (FUNC_1(VAR_1, VAR_2))
   VAR_4->flags |= VAR_0;
  else
   VAR_4->flags &= ~VAR_0;
  return 0;
 }

 if (!FUNC_3(VAR_1, "rebase.autosquash")) {
  VAR_4->autosquash = FUNC_1(VAR_1, VAR_2);
  return 0;
 }

 if (!FUNC_3(VAR_1, "commit.gpgsign")) {
  FUNC_0(VAR_4->gpg_sign_opt);
  VAR_4->gpg_sign_opt = FUNC_1(VAR_1, VAR_2) ?
   FUNC_4("-S") : ((void*)0);
  return 0;
 }

 if (!FUNC_3(VAR_1, "rebase.autostash")) {
  VAR_4->autostash = FUNC_1(VAR_1, VAR_2);
  return 0;
 }

 if (!FUNC_3(VAR_1, "rebase.reschedulefailedexec")) {
  VAR_4->reschedule_failed_exec = FUNC_1(VAR_1, VAR_2);
  return 0;
 }

 if (!FUNC_3(VAR_1, "rebase.usebuiltin")) {
  VAR_4->use_legacy_rebase = !FUNC_1(VAR_1, VAR_2);
  return 0;
 }

 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
