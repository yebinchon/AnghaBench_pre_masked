
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ device_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 int VAR_2;
 device_t VAR_3;

 VAR_3 = FUNC_1(FUNC_2(VAR_1), "acpi_perf", -1);
 if (VAR_3) {
  VAR_2 = FUNC_3(VAR_1, VAR_3);
  if (VAR_2)
   VAR_2 = FUNC_4(VAR_1);
 } else
  VAR_2 = FUNC_4(VAR_1);

 if (VAR_2 != 0)
  return (VAR_0);
 FUNC_0(VAR_1);
 return (0);
}
