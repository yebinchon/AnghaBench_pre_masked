
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int *,int) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, uint32_t *VAR_3)
{
 phandle_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0("/cpus");
 if (VAR_4 == -1) {
  if (VAR_1)
   FUNC_3(VAR_2, "Can't find cpus node.\n");
  return (VAR_0);
 }

 VAR_5 = FUNC_2(VAR_4, "timebase-frequency");
 if (VAR_5 != 4) {
  if (VAR_1)
   FUNC_3(VAR_2,
       "Can't find timebase-frequency property.\n");
  return (VAR_0);
 }

 FUNC_1(VAR_4, "timebase-frequency", VAR_3, VAR_5);

 return (0);
}
