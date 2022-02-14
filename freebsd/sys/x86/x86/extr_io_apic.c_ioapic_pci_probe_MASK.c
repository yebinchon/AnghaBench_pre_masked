
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{

 if (FUNC_2(VAR_3) == VAR_1 &&
     FUNC_4(VAR_3) == VAR_2) {
  switch (FUNC_3(VAR_3)) {
  case 128:
   FUNC_1(VAR_3, "IO APIC");
   break;
  case 129:
   FUNC_1(VAR_3, "IO(x) APIC");
   break;
  default:
   return (VAR_0);
  }
  FUNC_0(VAR_3);
  return (-10000);
 }
 return (VAR_0);
}
