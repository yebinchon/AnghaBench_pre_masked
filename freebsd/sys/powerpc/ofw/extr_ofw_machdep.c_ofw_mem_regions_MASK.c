
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_region {int dummy; } ;
typedef scalar_t__ phandle_t ;
typedef int name ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct mem_region*,int) ;
 int FUNC_7 (struct mem_region*,int) ;
 int FUNC_8 (struct mem_region*,int) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (scalar_t__,char*,struct mem_region*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;

void
FUNC_13(struct mem_region *VAR_0, int *VAR_1,
  struct mem_region *VAR_2, int *VAR_3)
{
 phandle_t VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;
 char VAR_8[31];

 VAR_5 = VAR_6 = 0;




 for (VAR_4 = FUNC_0(FUNC_5(0)); VAR_4 != 0;
     VAR_4 = FUNC_5(VAR_4)) {
  if (FUNC_2(VAR_4, "name", VAR_8, sizeof(VAR_8)) <= 0)
   continue;
  if (FUNC_12(VAR_8, "memory", sizeof(VAR_8)) != 0 &&
      FUNC_12(VAR_8, "memory@", FUNC_11("memory@")) != 0)
   continue;

  VAR_7 = FUNC_10(VAR_4, "reg", &VAR_0[VAR_6]);
  VAR_6 += VAR_7;







  if (FUNC_3(VAR_4, "linux,usable-memory") >= 0)
   VAR_7 = FUNC_10(VAR_4, "linux,usable-memory",
       &VAR_2[VAR_5]);
  else if (FUNC_3(VAR_4, "available") >= 0)
   VAR_7 = FUNC_10(VAR_4, "available",
       &VAR_2[VAR_5]);
  else
   VAR_7 = FUNC_10(VAR_4, "reg", &VAR_2[VAR_5]);
  VAR_5 += VAR_7;
 }
 *VAR_1 = VAR_6;
 *VAR_3 = VAR_5;
}
