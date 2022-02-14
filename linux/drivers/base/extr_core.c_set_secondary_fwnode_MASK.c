
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {struct fwnode_handle* secondary; } ;
struct device {struct fwnode_handle* fwnode; } ;


 int VAR_0 ;
 struct fwnode_handle* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct fwnode_handle*) ;

void FUNC_2(struct device *VAR_1, struct fwnode_handle *VAR_2)
{
 if (VAR_2)
  VAR_2->secondary = FUNC_0(-VAR_0);

 if (FUNC_1(VAR_1->fwnode))
  VAR_1->fwnode->secondary = VAR_2;
 else
  VAR_1->fwnode = VAR_2;
}
