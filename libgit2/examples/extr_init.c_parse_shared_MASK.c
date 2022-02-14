
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*) ;
 long FUNC_1 (char const*,char**,int) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static uint32_t FUNC_3(const char *VAR_3)
{
 if (!FUNC_0(VAR_3, "false") || !FUNC_0(VAR_3, "umask"))
  return VAR_2;

 else if (!FUNC_0(VAR_3, "true") || !FUNC_0(VAR_3, "group"))
  return VAR_1;

 else if (!FUNC_0(VAR_3, "all") || !FUNC_0(VAR_3, "world") ||
    !FUNC_0(VAR_3, "everybody"))
  return VAR_0;

 else if (VAR_3[0] == '0') {
  long VAR_4;
  char *VAR_5 = ((void*)0);
  VAR_4 = FUNC_1(VAR_3 + 1, &VAR_5, 8);
  if (VAR_5 == VAR_3 + 1 || *VAR_5 != 0)
   FUNC_2("invalid octal value for --shared", VAR_3);
  return (uint32_t)VAR_4;
 }

 else
  FUNC_2("unknown value for --shared", VAR_3);

 return 0;
}
