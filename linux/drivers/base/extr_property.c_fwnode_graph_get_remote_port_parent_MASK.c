
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;


 struct fwnode_handle* FUNC_0 (struct fwnode_handle*) ;
 struct fwnode_handle* FUNC_1 (struct fwnode_handle const*) ;
 int FUNC_2 (struct fwnode_handle*) ;

struct fwnode_handle *
FUNC_3(const struct fwnode_handle *VAR_0)
{
 struct fwnode_handle *VAR_1, *VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_1);

 return VAR_2;
}
