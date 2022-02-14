
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {int dummy; } ;


 int FUNC_0 (struct argv_array*,char const*,int,char const*) ;
 char** VAR_0 ;
 int FUNC_1 (char const*) ;

void FUNC_2(struct argv_array *VAR_1, const char *VAR_2)
{
 const char **VAR_3;
 int VAR_4 = FUNC_1(VAR_2);

 for (VAR_3 = VAR_0; *VAR_3; VAR_3++)
  FUNC_0(VAR_1, *VAR_3, VAR_4, VAR_2);
}
