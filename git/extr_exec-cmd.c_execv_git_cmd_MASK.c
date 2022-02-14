
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {scalar_t__ argv; } ;


 struct argv_array VAR_0 ;
 int FUNC_0 (struct argv_array*) ;
 int VAR_1 ;
 int FUNC_1 (struct argv_array*,char const**) ;
 int FUNC_2 (char*,char**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (char*,int ) ;

int FUNC_6(const char **VAR_2)
{
 struct argv_array VAR_3 = VAR_0;

 FUNC_1(&VAR_3, VAR_2);
 FUNC_4(VAR_3.argv, "trace: exec:");


 FUNC_2("git", (char **)VAR_3.argv);

 FUNC_5("trace: exec failed: %s\n", FUNC_3(VAR_1));

 FUNC_0(&VAR_3);
 return -1;
}
