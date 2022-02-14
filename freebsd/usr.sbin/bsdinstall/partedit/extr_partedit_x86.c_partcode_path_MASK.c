
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;
 char const* FUNC_1 () ;

const char *
FUNC_2(const char *VAR_0, const char *VAR_1)
{

 if (FUNC_0(VAR_0, "GPT") == 0 && FUNC_0(FUNC_1(), "UEFI") != 0) {
  if (FUNC_0(VAR_1, "zfs") == 0)
   return ("/boot/gptzfsboot");
  else
   return ("/boot/gptboot");
 }


 return (((void*)0));
}
