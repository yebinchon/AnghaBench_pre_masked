
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 uint32_t VAR_3;

 if (!FUNC_4(VAR_2))
  return (VAR_0);

 if (!FUNC_3(VAR_2, "gpio"))
  return (VAR_0);

 VAR_3 = FUNC_2(VAR_1);
 switch (FUNC_0(VAR_3)) {
 case 129:
 case 128:
  break;
 default:
  return (VAR_0);
 }

 FUNC_1(VAR_2, "MPC85xx GPIO driver");
 return (0);
}
