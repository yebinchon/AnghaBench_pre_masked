
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {char* sysname; } ;
typedef int machine_arch ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,char*,char*,int,char*) ;
 int FUNC_1 (char*,char*,size_t*,int *,int ) ;
 int FUNC_2 (struct utsname*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_2, size_t VAR_3)
{
 struct utsname VAR_4;
 char VAR_5[255];
 size_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(&VAR_4);
 if (VAR_7)
  return (VAR_1);

 VAR_6 = sizeof(VAR_5);
 VAR_7 = FUNC_1("hw.machine_arch", VAR_5, &VAR_6, ((void*)0), 0);
 if (VAR_7)
  return (VAR_1);
 VAR_5[VAR_6] = '\0';





 FUNC_0(VAR_2, VAR_3, "%s:%d:%s", VAR_4.sysname, VAR_0/100000,
     VAR_5);

 return (VAR_7);
}
