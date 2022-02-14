
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int *) ;

void FUNC_4(void)
{
 sigset_t VAR_3, VAR_4;

 FUNC_2(&VAR_4);
 if (!FUNC_3(VAR_0, &VAR_4, &VAR_3)) {

  if (VAR_2)
   FUNC_1(VAR_2);
  else
   FUNC_0("regulator not available to shut down system\n");
  (void) FUNC_3(VAR_1, &VAR_3, ((void*)0));
 }
 return;
}
