
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {struct fwnode_handle* secondary; } ;
struct device {struct fwnode_handle* fwnode; } ;


 int FUNC_0 (struct fwnode_handle*) ;
 scalar_t__ FUNC_1 (struct fwnode_handle*) ;

void FUNC_2(struct device *VAR_0, struct fwnode_handle *VAR_1)
{
 if (VAR_1) {
  struct fwnode_handle *VAR_2 = VAR_0->fwnode;

  if (FUNC_1(VAR_2))
   VAR_2 = VAR_2->secondary;

  if (VAR_2) {
   FUNC_0(VAR_1->secondary);
   VAR_1->secondary = VAR_2;
  }
  VAR_0->fwnode = VAR_1;
 } else {
  VAR_0->fwnode = FUNC_1(VAR_0->fwnode) ?
   VAR_0->fwnode->secondary : ((void*)0);
 }
}
