
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swnode {TYPE_1__* parent; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_2__ {struct fwnode_handle fwnode; } ;


 struct swnode* FUNC_0 (struct fwnode_handle const*) ;

__attribute__((used)) static struct fwnode_handle *
FUNC_1(const struct fwnode_handle *VAR_0)
{
 struct swnode *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 ? (VAR_1->parent ? &VAR_1->parent->fwnode : ((void*)0)) : ((void*)0);
}
