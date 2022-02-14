
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;
struct swnode {struct fwnode_handle fwnode; int kobj; } ;


 int FUNC_0 (int *) ;
 struct swnode* FUNC_1 (struct fwnode_handle*) ;

__attribute__((used)) static struct fwnode_handle *FUNC_2(struct fwnode_handle *VAR_0)
{
 struct swnode *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->kobj);

 return &VAR_1->fwnode;
}
