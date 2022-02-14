
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int nr; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct argv_array {int dummy; } ;


 struct argv_array VAR_0 ;
 struct string_list VAR_1 ;
 int FUNC_0 (struct argv_array*) ;
 int FUNC_1 (struct argv_array*,char*) ;
 int FUNC_2 (struct repository*,struct string_list*,struct argv_array*) ;
 int FUNC_3 (struct string_list*) ;
 int FUNC_4 (struct object_id*) ;
 char* FUNC_5 (struct object_id*) ;
 int FUNC_6 (struct repository*,int *,int *) ;

int FUNC_7(struct repository *VAR_2,
          struct object_id *VAR_3,
          struct object_id *VAR_4)
{
 struct string_list VAR_5 = VAR_1;
 struct argv_array VAR_6 = VAR_0;
 int VAR_7;


 if (!FUNC_6(VAR_2, ((void*)0), ((void*)0)))
  return 0;

 FUNC_1(&VAR_6, "--");
 FUNC_1(&VAR_6, FUNC_5(VAR_4));
 if (!FUNC_4(VAR_3)) {
  FUNC_1(&VAR_6, "--not");
  FUNC_1(&VAR_6, FUNC_5(VAR_3));
 }

 FUNC_2(VAR_2, &VAR_5, &VAR_6);
 VAR_7 = VAR_5.nr;

 FUNC_0(&VAR_6);

 FUNC_3(&VAR_5);
 return VAR_7;
}
