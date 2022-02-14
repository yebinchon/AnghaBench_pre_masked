
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_prom_registers {unsigned int which_io; unsigned int phys_addr; } ;
typedef int s32 ;
typedef int reg ;
typedef scalar_t__ phandle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;
 unsigned int FUNC_5 (char*,char**,int) ;

phandle FUNC_6(char *VAR_2)
{
 char VAR_3[128];
 char *VAR_4 = VAR_2, *VAR_5;
 phandle VAR_6 = VAR_1, VAR_7;
 unsigned int VAR_8, VAR_9;
 struct linux_prom_registers VAR_10[VAR_0];

 while (*VAR_4++) {
  if (!*VAR_4) return VAR_6;
  VAR_6 = FUNC_1(VAR_6);

  for (VAR_5 = VAR_3; *VAR_4 != 0 && *VAR_4 != '@' && *VAR_4 != '/';)
   *VAR_5++ = *VAR_4++;
  *VAR_5 = 0;

  VAR_6 = FUNC_4(VAR_6, VAR_3);
  if (!VAR_6)
   return 0;

  if (*VAR_4 == '@') {
   if (FUNC_0(VAR_4[1]) && VAR_4[2] == ',') {
    VAR_8 = FUNC_5(VAR_4+1, ((void*)0), 16);
    VAR_9 = FUNC_5(VAR_4+3, &VAR_5, 16);
    if (VAR_5 != VAR_4 + 3 && (!*VAR_5 || *VAR_5 == '/')
        && VAR_5 <= VAR_4 + 3 + 8) {
     VAR_7 = VAR_6;
     while (VAR_7 && (s32)VAR_7 != -1) {
      if (FUNC_2 (VAR_7, "reg", (char *)VAR_10, sizeof (VAR_10)) > 0) {
       if (VAR_8 == VAR_10[0].which_io && VAR_9 == VAR_10[0].phys_addr) {
        VAR_6 = VAR_7;
        break;
       }
      }
      VAR_7 = FUNC_3(VAR_7);
      if (!VAR_7 || (s32)VAR_7 == -1)
       break;
      VAR_7 = FUNC_4(FUNC_3(VAR_7), VAR_3);
     }
    }
   }
   while (*VAR_4 != 0 && *VAR_4 != '/') VAR_4++;
  }
 }
 return VAR_6;
}
