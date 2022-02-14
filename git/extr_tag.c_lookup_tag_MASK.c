
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {int dummy; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct repository*) ;
 struct tag* FUNC_1 (struct repository*,struct object_id const*,int ) ;
 struct object* FUNC_2 (struct repository*,struct object_id const*) ;
 struct tag* FUNC_3 (struct repository*,struct object*,int ,int ) ;

struct tag *FUNC_4(struct repository *VAR_1, const struct object_id *VAR_2)
{
 struct object *VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_3)
  return FUNC_1(VAR_1, VAR_2, FUNC_0(VAR_1));
 return FUNC_3(VAR_1, VAR_3, VAR_0, 0);
}
