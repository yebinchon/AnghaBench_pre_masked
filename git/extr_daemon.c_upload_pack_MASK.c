
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int env_array; int args; } ;
struct argv_array {int argv; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,char*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct child_process*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(const struct argv_array *VAR_2)
{
 struct child_process VAR_3 = VAR_0;
 FUNC_1(&VAR_3.args, "upload-pack", "--strict", ((void*)0));
 FUNC_0(&VAR_3.args, "--timeout=%u", VAR_1);

 FUNC_2(&VAR_3.env_array, VAR_2->argv);

 return FUNC_3(&VAR_3);
}
