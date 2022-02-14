
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;
struct fwnode_endpoint {int dummy; } ;


 int FUNC_0 (struct fwnode_handle const*,int ,struct fwnode_endpoint*) ;
 int VAR_0 ;
 int FUNC_1 (struct fwnode_endpoint*,int ,int) ;

int FUNC_2(const struct fwnode_handle *VAR_1,
    struct fwnode_endpoint *VAR_2)
{
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));

 return FUNC_0(VAR_1, VAR_0, VAR_2);
}
