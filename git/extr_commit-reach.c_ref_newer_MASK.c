
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {scalar_t__ type; } ;
struct commit_list {int dummy; } ;
struct commit {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct commit*,struct commit_list**) ;
 struct object* FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (struct commit*,struct commit_list*) ;
 scalar_t__ FUNC_3 (struct commit*) ;
 int FUNC_4 (int ,struct object_id const*) ;
 int VAR_1 ;

int FUNC_5(const struct object_id *VAR_2, const struct object_id *VAR_3)
{
 struct object *VAR_4;
 struct commit *VAR_5, *VAR_6;
 struct commit_list *VAR_7 = ((void*)0);





 VAR_4 = FUNC_1(VAR_1, FUNC_4(VAR_1, VAR_3),
        ((void*)0), 0);
 if (!VAR_4 || VAR_4->type != VAR_0)
  return 0;
 VAR_5 = (struct commit *) VAR_4;

 VAR_4 = FUNC_1(VAR_1, FUNC_4(VAR_1, VAR_2),
        ((void*)0), 0);
 if (!VAR_4 || VAR_4->type != VAR_0)
  return 0;
 VAR_6 = (struct commit *) VAR_4;

 if (FUNC_3(VAR_6) < 0)
  return 0;

 FUNC_0(VAR_5, &VAR_7);
 return FUNC_2(VAR_6, VAR_7);
}
