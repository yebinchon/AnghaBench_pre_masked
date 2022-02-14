
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;
struct swnode {struct fwnode_handle fwnode; } ;
struct software_node {int dummy; } ;


 struct swnode* FUNC_0 (struct software_node const*) ;

struct fwnode_handle *FUNC_1(const struct software_node *VAR_0)
{
 struct swnode *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 ? &VAR_1->fwnode : ((void*)0);
}
