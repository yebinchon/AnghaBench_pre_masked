
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;

int FUNC_1(int VAR_4, struct sigaction *VAR_5, struct sigaction *VAR_6)
{
 if (VAR_4 != VAR_1)
  return VAR_2 = VAR_0,
   FUNC_0("sigaction only implemented for SIGALRM");
 if (VAR_6 != ((void*)0))
  return VAR_2 = VAR_0,
   FUNC_0("sigaction: param 3 != NULL not implemented");

 VAR_3 = VAR_5->sa_handler;
 return 0;
}
