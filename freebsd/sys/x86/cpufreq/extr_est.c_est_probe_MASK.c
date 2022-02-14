
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ device_t ;


 int FUNC_0 (scalar_t__,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5)
{
 device_t VAR_6;
 uint64_t VAR_7;
 int VAR_8, VAR_9;

 if (FUNC_7("est", 0))
  return (VAR_1);





 VAR_6 = FUNC_1(FUNC_2(VAR_5), "acpi_perf", -1);
 if (VAR_6 && FUNC_3(VAR_6)) {
  VAR_8 = FUNC_0(VAR_6, &VAR_9);
  if (VAR_8 == 0 && (VAR_9 & VAR_0) == 0)
   return (VAR_1);
 }


 VAR_7 = FUNC_6(VAR_2);
 if ((VAR_7 & VAR_3) == 0) {
  FUNC_8(VAR_2, VAR_7 | VAR_3);
  if (VAR_4)
   FUNC_4(VAR_5, "enabling SpeedStep\n");


  VAR_7 = FUNC_6(VAR_2);
  if ((VAR_7 & VAR_3) == 0) {
   FUNC_4(VAR_5, "failed to enable SpeedStep\n");
   return (VAR_1);
  }
 }

 FUNC_5(VAR_5, "Enhanced SpeedStep Frequency Control");
 return (0);
}
