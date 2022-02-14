
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {char* machine; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct utsname*) ;

void FUNC_3(char *VAR_0)
{
 struct utsname VAR_1;

 FUNC_2(&VAR_1);
 FUNC_1(VAR_0, VAR_1.machine);
}
