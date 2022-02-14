
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct object {int dummy; } ;


 int VAR_0 ;
 struct object* FUNC_0 (struct repository*,struct object_id const*) ;
 scalar_t__ FUNC_1 (struct repository*,int *,int ,struct object*,int ) ;
 struct repository* VAR_1 ;

struct tree *FUNC_2(const struct object_id *VAR_2)
{
 struct repository *VAR_3 = VAR_1;
 struct object *VAR_4 = FUNC_0(VAR_3, VAR_2);
 return (struct tree *)FUNC_1(VAR_3, ((void*)0), 0, VAR_4, VAR_0);
}
