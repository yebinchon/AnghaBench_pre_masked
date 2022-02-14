
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;
 char const* FUNC_1 () ;

int
FUNC_2(const char *VAR_0, const char *VAR_1)
{

 if (FUNC_0(VAR_1, "freebsd-ufs") == 0)
  return (1);

 if (FUNC_0(VAR_1, "freebsd-zfs") == 0 &&
     FUNC_0(VAR_0, "GPT") == 0 &&
     FUNC_0(FUNC_1(), "BIOS") == 0)
  return (1);

 return (0);
}
