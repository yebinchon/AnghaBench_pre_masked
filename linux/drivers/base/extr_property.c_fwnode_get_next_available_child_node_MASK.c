
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;


 scalar_t__ FUNC_0 (struct fwnode_handle*) ;
 struct fwnode_handle* FUNC_1 (struct fwnode_handle const*,struct fwnode_handle*) ;

struct fwnode_handle *
FUNC_2(const struct fwnode_handle *VAR_0,
         struct fwnode_handle *VAR_1)
{
 struct fwnode_handle *VAR_2 = VAR_1;

 if (!VAR_0)
  return ((void*)0);

 do {
  VAR_2 = FUNC_1(VAR_0, VAR_2);

  if (!VAR_2 || FUNC_0(VAR_2))
   break;
 } while (VAR_2);

 return VAR_2;
}
