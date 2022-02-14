
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (char*,size_t,char*,int) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0, size_t VAR_1, u_long VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_2 == 0) {
  *VAR_0 = '\0';
  return;
 }
 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < 32; VAR_3++)
  if (VAR_2 & (1 << VAR_3)) {
   int VAR_5;

   VAR_4 = VAR_3;
   for (VAR_5 = VAR_3+1; VAR_5 < 32; VAR_5++)
    if (!(VAR_2 & (1 << VAR_5))) {
     VAR_4 = -1;
     break;
    }
   break;
  }
 if (VAR_4 == -1)
  FUNC_0(VAR_0, VAR_1, "&0x%lx", VAR_2);
 else
  FUNC_0(VAR_0, VAR_1, "/%d", 32-VAR_4);
}
