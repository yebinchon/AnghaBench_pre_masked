
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct object {int dummy; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 struct object* FUNC_0 (struct repository*,int ,int *,int ) ;
 struct commit* FUNC_1 (struct repository*,struct object*,int ,int) ;
 int FUNC_2 (struct repository*,struct object_id const*) ;

struct commit *FUNC_3(struct repository *VAR_1,
  const struct object_id *VAR_2, int VAR_3)
{
 struct object *VAR_4 = FUNC_0(VAR_1,
           FUNC_2(VAR_1, VAR_2),
           ((void*)0), 0);

 if (!VAR_4)
  return ((void*)0);
 return FUNC_1(VAR_1, VAR_4, VAR_0, VAR_3);
}
