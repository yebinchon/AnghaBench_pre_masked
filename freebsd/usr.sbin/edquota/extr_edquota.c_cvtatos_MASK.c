
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,char*) ;

int
FUNC_2(uint64_t VAR_0, char *VAR_1, uint64_t *VAR_2)
{

 if (FUNC_0(VAR_1, "second", 6) == 0)
  *VAR_2 = VAR_0;
 else if (FUNC_0(VAR_1, "minute", 6) == 0)
  *VAR_2 = VAR_0 * 60;
 else if (FUNC_0(VAR_1, "hour", 4) == 0)
  *VAR_2 = VAR_0 * 60 * 60;
 else if (FUNC_0(VAR_1, "day", 3) == 0)
  *VAR_2 = VAR_0 * 24 * 60 * 60;
 else {
  FUNC_1("%s: bad units, specify %s\n", VAR_1,
      "days, hours, minutes, or seconds");
  return (0);
 }
 return (1);
}
