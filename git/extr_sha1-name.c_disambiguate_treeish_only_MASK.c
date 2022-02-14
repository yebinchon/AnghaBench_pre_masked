
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct object {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct object* FUNC_0 (struct repository*,int ,int *,int ) ;
 int FUNC_1 (struct repository*,struct object_id const*,int *) ;
 int FUNC_2 (struct repository*,struct object_id const*) ;

__attribute__((used)) static int FUNC_3(struct repository *VAR_3,
         const struct object_id *VAR_4,
         void *VAR_5)
{
 struct object *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_4, ((void*)0));
 if (VAR_7 == VAR_2 || VAR_7 == VAR_0)
  return 1;
 if (VAR_7 != VAR_1)
  return 0;


 VAR_6 = FUNC_0(VAR_3, FUNC_2(VAR_3, VAR_4), ((void*)0), 0);
 if (VAR_6 && (VAR_6->type == VAR_2 || VAR_6->type == VAR_0))
  return 1;
 return 0;
}
