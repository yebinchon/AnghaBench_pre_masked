
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;






 int FUNC_0 (char*,int) ;
 void* FUNC_1 (struct repository*,struct object_id const*) ;
 void* FUNC_2 (struct repository*,struct object_id const*) ;
 void* FUNC_3 (struct repository*,struct object_id const*) ;
 void* FUNC_4 (struct repository*,struct object_id const*) ;

__attribute__((used)) static void *FUNC_5(struct repository *VAR_0,
       const struct object_id *VAR_1,
       enum object_type VAR_2)
{
 switch (VAR_2) {
 case 130:
  return FUNC_2(VAR_0, VAR_1);
 case 128:
  return FUNC_4(VAR_0, VAR_1);
 case 129:
  return FUNC_3(VAR_0, VAR_1);
 case 131:
  return FUNC_1(VAR_0, VAR_1);
 default:
  FUNC_0("BUG: unknown object type %d", VAR_2);
 }
}
