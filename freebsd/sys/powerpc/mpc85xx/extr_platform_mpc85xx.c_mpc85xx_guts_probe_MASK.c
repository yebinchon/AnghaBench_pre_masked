
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 if (!FUNC_1(VAR_2, "fsl,mpc8572-guts") &&
     !FUNC_1(VAR_2, "fsl,p1020-guts") &&
     !FUNC_1(VAR_2, "fsl,p1021-guts") &&
     !FUNC_1(VAR_2, "fsl,p1022-guts") &&
     !FUNC_1(VAR_2, "fsl,p1023-guts") &&
     !FUNC_1(VAR_2, "fsl,p2020-guts"))
  return (VAR_1);

 FUNC_0(VAR_2, "MPC85xx Global Utilities");
 return (VAR_0);
}
