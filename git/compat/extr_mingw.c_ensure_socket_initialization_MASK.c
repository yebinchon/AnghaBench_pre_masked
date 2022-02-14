
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WSADATA ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (void (*) ()) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 WSADATA VAR_1;
 static int VAR_2 = 0;

 if (VAR_2)
  return;

 if (FUNC_2(FUNC_0(2,2), &VAR_1))
  FUNC_4("unable to initialize winsock subsystem, error %d",
   FUNC_1());

 FUNC_3((void(*)(void)) VAR_0);
 VAR_2 = 1;
}
