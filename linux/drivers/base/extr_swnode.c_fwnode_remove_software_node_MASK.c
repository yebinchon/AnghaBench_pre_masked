
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swnode {int kobj; int id; int entry; TYPE_1__* parent; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_2__ {int child_ids; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 struct swnode* FUNC_3 (struct fwnode_handle*) ;

void FUNC_4(struct fwnode_handle *VAR_1)
{
 struct swnode *VAR_2 = FUNC_3(VAR_1);

 if (!VAR_2)
  return;

 if (VAR_2->parent) {
  FUNC_0(&VAR_2->parent->child_ids, VAR_2->id);
  FUNC_2(&VAR_2->entry);
 } else {
  FUNC_0(&VAR_0, VAR_2->id);
 }

 FUNC_1(&VAR_2->kobj);
}
