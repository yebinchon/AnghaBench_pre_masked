
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fw ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,size_t*,int *,int) ;

__attribute__((used)) static const char *
FUNC_2(void)
{
 static char VAR_0[255] = "";
 size_t VAR_1 = sizeof(VAR_0);
 int VAR_2;

 if (FUNC_0(VAR_0) == 0) {
  VAR_2 = FUNC_1("machdep.bootmethod", VAR_0, &VAR_1, ((void*)0), -1);
  if (VAR_2 != 0)
   return ("BIOS");
 }

 return (VAR_0);
}
