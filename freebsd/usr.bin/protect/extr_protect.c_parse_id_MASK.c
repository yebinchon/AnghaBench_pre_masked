
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long id_t ;


 long FUNC_0 (char*,char**,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;

__attribute__((used)) static id_t
FUNC_3(char *VAR_0)
{
 static bool VAR_1 = 1;
 long VAR_2;
 char *VAR_3;

 if (!VAR_1) {
  FUNC_2("only one -g or -p flag is permitted");
  FUNC_1();
 }
 VAR_2 = FUNC_0(VAR_0, &VAR_3, 0);
 if (*VAR_3 != '\0') {
  FUNC_2("invalid process id");
  FUNC_1();
 }
 return (VAR_2);
}
