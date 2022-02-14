
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {int argv; int argc; } ;


 struct argv_array VAR_0 ;
 int FUNC_0 (struct argv_array*,char const*) ;
 int FUNC_1 (struct argv_array*,char*,char*,int *) ;
 int FUNC_2 (int ,int ,char const*) ;

int FUNC_3(int VAR_1, const char **VAR_2, const char *VAR_3)
{
 struct argv_array VAR_4 = VAR_0;
 int VAR_5;

 FUNC_1(&VAR_4, "annotate", "-c", ((void*)0));

 for (VAR_5 = 1; VAR_5 < VAR_1; VAR_5++) {
  FUNC_0(&VAR_4, VAR_2[VAR_5]);
 }

 return FUNC_2(VAR_4.argc, VAR_4.argv, VAR_3);
}
