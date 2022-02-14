
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwnode_handle {int dummy; } ;
struct device {struct fwnode_handle* fwnode; TYPE_1__* of_node; } ;
struct TYPE_2__ {struct fwnode_handle fwnode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

struct fwnode_handle *FUNC_1(struct device *VAR_1)
{
 return FUNC_0(VAR_0) && VAR_1->of_node ?
  &VAR_1->of_node->fwnode : VAR_1->fwnode;
}
