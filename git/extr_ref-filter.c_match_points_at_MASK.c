
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {int dummy; } ;
struct oid_array {int dummy; } ;
struct object_id {int dummy; } ;
struct object {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 struct object_id* FUNC_2 (struct tag*) ;
 scalar_t__ FUNC_3 (struct oid_array*,struct object_id const*) ;
 struct object* FUNC_4 (int ,struct object_id const*) ;
 int VAR_1 ;

__attribute__((used)) static const struct object_id *FUNC_5(struct oid_array *VAR_2,
            const struct object_id *VAR_3,
            const char *VAR_4)
{
 const struct object_id *VAR_5 = ((void*)0);
 struct object *VAR_6;

 if (FUNC_3(VAR_2, VAR_3) >= 0)
  return VAR_3;
 VAR_6 = FUNC_4(VAR_1, VAR_3);
 if (!VAR_6)
  FUNC_1(FUNC_0("malformed object at '%s'"), VAR_4);
 if (VAR_6->type == VAR_0)
  VAR_5 = FUNC_2((struct tag *)VAR_6);
 if (VAR_5 && FUNC_3(VAR_2, VAR_5) >= 0)
  return VAR_5;
 return ((void*)0);
}
