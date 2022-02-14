
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char const*,char const*,int) ;

int FUNC_4(int VAR_2, const char **VAR_3)
{
 int VAR_4;
 for (VAR_4 = 2; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_3[VAR_4][0] == '/')
   FUNC_0("Forward slash is not allowed at the beginning of the\n"
       "pattern because Windows does not like it. Use `XXX/' instead.");
  else if (!FUNC_2(VAR_3[VAR_4], "XXX/", 4))
   VAR_3[VAR_4] += 3;
 }
 if (!FUNC_1(VAR_3[1], "wildmatch"))
  return !!FUNC_3(VAR_3[3], VAR_3[2], VAR_1);
 else if (!FUNC_1(VAR_3[1], "iwildmatch"))
  return !!FUNC_3(VAR_3[3], VAR_3[2], VAR_1 | VAR_0);
 else if (!FUNC_1(VAR_3[1], "pathmatch"))
  return !!FUNC_3(VAR_3[3], VAR_3[2], 0);
 else if (!FUNC_1(VAR_3[1], "ipathmatch"))
  return !!FUNC_3(VAR_3[3], VAR_3[2], VAR_0);
 else
  return 1;
}
