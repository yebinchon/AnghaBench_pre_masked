
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;

int FUNC_1(void)
{
 static int VAR_0 = -1;

 if (VAR_0 < 0) {
  if (FUNC_0("GIT_TEST_VALIDATE_INDEX_CACHE_ENTRIES"))
   VAR_0 = 1;
  else
   VAR_0 = 0;
 }

 return VAR_0;
}
