
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;

int
FUNC_2(pid_t VAR_0)
{

 if (FUNC_1(VAR_0) < 0) {
  FUNC_0("Fatal error in process.\n");
  return (-1);
 }
 return (0);
}
