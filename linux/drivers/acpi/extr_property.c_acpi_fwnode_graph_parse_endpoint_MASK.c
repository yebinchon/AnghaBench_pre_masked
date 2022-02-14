
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct fwnode_handle const fwnode_handle ;
struct fwnode_endpoint {int id; int port; struct fwnode_handle const* local_fwnode; } ;


 struct fwnode_handle const* FUNC_0 (struct fwnode_handle const*) ;
 scalar_t__ FUNC_1 (struct fwnode_handle const*,char*,int *) ;

__attribute__((used)) static int FUNC_2(const struct fwnode_handle *VAR_0,
         struct fwnode_endpoint *VAR_1)
{
 struct fwnode_handle *VAR_2 = FUNC_0(VAR_0);

 VAR_1->local_fwnode = VAR_0;

 if (FUNC_1(VAR_2, "reg", &VAR_1->port))
  FUNC_1(VAR_2, "port", &VAR_1->port);
 if (FUNC_1(VAR_0, "reg", &VAR_1->id))
  FUNC_1(VAR_0, "endpoint", &VAR_1->id);

 return 0;
}
