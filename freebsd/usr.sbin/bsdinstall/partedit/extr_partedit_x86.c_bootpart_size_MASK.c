
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 char const* FUNC_1 () ;

size_t
FUNC_2(const char *VAR_1)
{


 if (FUNC_0(VAR_1, "GPT") != 0)
  return (0);

 if (FUNC_0(FUNC_1(), "BIOS") == 0)
  return (512*1024);
 else
  return (VAR_0);

 return (0);
}
