
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef scalar_t__ devclass_t ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_0)
{
 devclass_t VAR_1;
 device_t VAR_2, VAR_3;
 int VAR_4;

 VAR_1 = FUNC_0("pci");
 for (VAR_4 = 1; ; VAR_4++) {
  VAR_2 = FUNC_2(VAR_0);
  VAR_3 = FUNC_2(VAR_2);
  if (FUNC_1(FUNC_2(VAR_3)) !=
      VAR_1)
   return (VAR_4);
  VAR_0 = VAR_3;
 }
}
