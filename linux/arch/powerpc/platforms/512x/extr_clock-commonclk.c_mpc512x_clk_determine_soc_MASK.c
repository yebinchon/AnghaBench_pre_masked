
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(void)
{
 if (FUNC_0("fsl,mpc5121")) {
  VAR_3 = VAR_0;
  return;
 }
 if (FUNC_0("fsl,mpc5123")) {
  VAR_3 = VAR_1;
  return;
 }
 if (FUNC_0("fsl,mpc5125")) {
  VAR_3 = VAR_2;
  return;
 }
}
