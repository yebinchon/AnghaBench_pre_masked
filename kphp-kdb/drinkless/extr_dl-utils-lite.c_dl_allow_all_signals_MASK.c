
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int *) ;

void FUNC_3 (void) {
  sigset_t VAR_3;
  FUNC_1 (&VAR_3);
  int VAR_4 = FUNC_2 (VAR_0, &VAR_3, &VAR_1);
  VAR_2 = 1;
  FUNC_0 (VAR_4 != -1, "failed to allow all signals");
}
