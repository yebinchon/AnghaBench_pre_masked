
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atfork_state {int cs; int old; } ;
typedef int sigset_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_6(struct atfork_state *VAR_2)
{
 sigset_t VAR_3;

 if (FUNC_4(&VAR_3))
  FUNC_1("sigfillset");




 FUNC_0(FUNC_3(VAR_1, &VAR_3, &VAR_2->old),
  "blocking all signals");
 FUNC_0(FUNC_2(VAR_0, &VAR_2->cs),
  "disabling cancellation");

}
