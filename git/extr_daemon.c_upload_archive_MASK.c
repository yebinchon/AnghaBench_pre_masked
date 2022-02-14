
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int env_array; int args; } ;
struct argv_array {int argv; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct child_process*) ;

__attribute__((used)) static int FUNC_3(const struct argv_array *VAR_1)
{
 struct child_process VAR_2 = VAR_0;
 FUNC_0(&VAR_2.args, "upload-archive");

 FUNC_1(&VAR_2.env_array, VAR_1->argv);

 return FUNC_2(&VAR_2);
}
