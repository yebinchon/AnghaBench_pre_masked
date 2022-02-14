
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swnode {struct software_node const* node; } ;
struct software_node {int dummy; } ;
struct fwnode_handle {int dummy; } ;


 struct swnode* FUNC_0 (struct fwnode_handle*) ;

const struct software_node *FUNC_1(struct fwnode_handle *VAR_0)
{
 struct swnode *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 ? VAR_1->node : ((void*)0);
}
