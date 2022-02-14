
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 char const* VAR_0 ;

__attribute__((used)) static int
FUNC_1(void)
{

 static const char *VAR_1[] = {
  "/dev/srandom", "/dev/urandom", "/dev/random", ((void*)0)
 };
 int VAR_2;
 if (VAR_0)
  return FUNC_0(VAR_0);

 for (VAR_2 = 0; VAR_1[VAR_2]; ++VAR_2) {
  if (FUNC_0(VAR_1[VAR_2]) == 0) {
   return 0;
  }
 }

 return -1;
}
