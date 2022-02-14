
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, int VAR_1)
{
 const char *VAR_2;

 if (VAR_1 < 20 || FUNC_1("From ", VAR_0, 5))
  return 0;

 VAR_2 = VAR_0 + VAR_1 - 2;
 VAR_0 += 5;
 for (;;) {
  if (VAR_2 < VAR_0)
   return 0;
  if (*--VAR_2 == ':')
   break;
 }

 if (!FUNC_0(VAR_2[-4]) ||
     !FUNC_0(VAR_2[-2]) ||
     !FUNC_0(VAR_2[-1]) ||
     !FUNC_0(VAR_2[ 1]) ||
     !FUNC_0(VAR_2[ 2]))
  return 0;


 if (FUNC_2(VAR_2+3, ((void*)0), 10) <= 90)
  return 0;


 return 1;
}
