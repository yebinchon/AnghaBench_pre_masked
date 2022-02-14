
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cell_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int*,...) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, int VAR_2)
{
 cell_t VAR_3, VAR_4;

 if (VAR_2 & VAR_0) {
  VAR_3 = FUNC_1("power-off");
  if (VAR_3 == -1)
   return;

  FUNC_0(VAR_3, 2, 1, 0, 0, &VAR_4);
 } else {
  VAR_3 = FUNC_1("system-reboot");
  if (VAR_3 == -1)
   return;

  FUNC_0(VAR_3, 0, 1, &VAR_4);
 }
}
