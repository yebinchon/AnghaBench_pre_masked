
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct replay_opts {int action; } ;


 struct replay_opts VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct repository*) ;
 int FUNC_3 (struct repository*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct replay_opts*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct repository *VAR_3, int VAR_4)
{
 struct replay_opts VAR_5 = VAR_0;
 int VAR_6 = 0;

 if (FUNC_1(FUNC_2(VAR_3))) {
  if (!FUNC_6(FUNC_2(VAR_3)) && VAR_4)
   FUNC_7(FUNC_0("cancelling a cherry picking in progress"));
  VAR_5.action = VAR_1;
  VAR_6 = 1;
 }

 if (FUNC_1(FUNC_3(VAR_3))) {
  if (!FUNC_6(FUNC_3(VAR_3)) && VAR_4)
   FUNC_7(FUNC_0("cancelling a revert in progress"));
  VAR_5.action = VAR_2;
  VAR_6 = 1;
 }

 if (!VAR_6)
  return;

 if (!FUNC_4())
  return;

 FUNC_5(&VAR_5);
}
