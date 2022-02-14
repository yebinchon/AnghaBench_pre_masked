
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int flags; } ;
struct tree {struct object object; } ;
struct repository {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct repository*,struct tree*) ;

void FUNC_1(struct repository *VAR_1, struct tree *VAR_2)
{
 struct object *VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = &VAR_2->object;
 if (VAR_3->flags & VAR_0)
  return;
 VAR_3->flags |= VAR_0;
 FUNC_0(VAR_1, VAR_2);
}
