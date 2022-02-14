
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atfork_state {int old; int cs; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_5(struct atfork_state *VAR_1)
{




 FUNC_0(FUNC_2(VAR_1->cs, ((void*)0)),
  "re-enabling cancellation");
 FUNC_0(FUNC_3(VAR_0, &VAR_1->old, ((void*)0)),
  "restoring signal mask");

}
