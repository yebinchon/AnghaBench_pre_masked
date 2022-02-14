
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int * ops; } ;


 int FUNC_0 (struct fwnode_handle const*) ;
 int VAR_0 ;

bool FUNC_1(const struct fwnode_handle *VAR_1)
{
 return !FUNC_0(VAR_1) && VAR_1->ops == &VAR_0;
}
