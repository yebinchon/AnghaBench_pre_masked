
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,int) ;
 int FUNC_1 (char const*,char*,char const**) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, int VAR_1)
{
 static const char VAR_2[] =
  "From e6807f3efca28b30decfecb1732a56c7db1137ee Mon Sep 17 00:00:00 2001\n";
 const char *VAR_3;

 if (VAR_1 != FUNC_2(VAR_2))
  return 0;
 if (!FUNC_1(VAR_0, "From ", &VAR_3))
  return 0;
 if (FUNC_3(VAR_3, "0123456789abcdef") != 40)
  return 0;
 VAR_3 += 40;
 return !FUNC_0(VAR_2 + (VAR_3 - VAR_0), VAR_3, FUNC_2(VAR_2) - (VAR_3 - VAR_0));
}
