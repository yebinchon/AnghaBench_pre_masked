
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,char*,int,int,int,int,int,int) ;

__attribute__((used)) static char *
FUNC_1(u_char *VAR_0)
{
 static char VAR_1[sizeof("xx:xx:xx:xx:xx:xx")];

 (void)FUNC_0(VAR_1, "%x:%x:%x:%x:%x:%x",
     VAR_0[0], VAR_0[1], VAR_0[2], VAR_0[3], VAR_0[4], VAR_0[5]);
 return (VAR_1);
}
