
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swnode {int child_ids; struct swnode* node; int properties; scalar_t__ allocated; } ;
struct kobject {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct swnode*) ;
 struct swnode* FUNC_2 (struct kobject*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct kobject *VAR_0)
{
 struct swnode *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->allocated) {
  FUNC_3(VAR_1->node->properties);
  FUNC_1(VAR_1->node);
 }
 FUNC_0(&VAR_1->child_ids);
 FUNC_1(VAR_1);
}
