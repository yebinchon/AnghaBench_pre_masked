
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {char* machine; char* nodename; char* sysname; char* release; char* version; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct utsname*) ;

void
FUNC_4(void)
{
 struct utsname VAR_1;
 int VAR_2;

 FUNC_0(&VAR_0);

 VAR_2 = FUNC_3(&VAR_1);
 if (VAR_2 != 0)
  FUNC_2(1, "uname");

 FUNC_1("ARCH", VAR_1.machine);
 FUNC_1("CPU", VAR_1.machine);
 FUNC_1("DOLLAR", "$");
 FUNC_1("HOST", VAR_1.nodename);
 FUNC_1("OSNAME", VAR_1.sysname);
 FUNC_1("OSREL", VAR_1.release);
 FUNC_1("OSVERS", VAR_1.version);
}
