
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct object {scalar_t__ type; } ;
struct commit {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct object* FUNC_0 (struct repository*,int ,char const*,int ) ;
 struct commit* FUNC_1 (struct repository*,struct tree*,char const*) ;
 scalar_t__ FUNC_2 (struct commit*) ;
 int FUNC_3 (struct repository*,struct object_id const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static struct commit *FUNC_5(struct repository *VAR_2,
         const struct object_id *VAR_3,
         const char *VAR_4)
{
 struct object *VAR_5;

 VAR_5 = FUNC_0(VAR_2, FUNC_3(VAR_2, VAR_3),
      VAR_4, FUNC_4(VAR_4));
 if (!VAR_5)
  return ((void*)0);
 if (VAR_5->type == VAR_1)
  return FUNC_1(VAR_2, (struct tree*)VAR_5, VAR_4);
 if (VAR_5->type != VAR_0)
  return ((void*)0);
 if (FUNC_2((struct commit *)VAR_5))
  return ((void*)0);
 return (struct commit *)VAR_5;
}
