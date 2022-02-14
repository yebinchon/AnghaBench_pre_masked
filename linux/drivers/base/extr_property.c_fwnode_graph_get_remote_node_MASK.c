
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fwnode_handle {int dummy; } ;
struct fwnode_endpoint {scalar_t__ port; scalar_t__ id; } ;


 scalar_t__ FUNC_0 (struct fwnode_handle*) ;
 struct fwnode_handle* FUNC_1 (struct fwnode_handle const*,struct fwnode_handle*) ;
 struct fwnode_handle* FUNC_2 (struct fwnode_handle*) ;
 int FUNC_3 (struct fwnode_handle*,struct fwnode_endpoint*) ;

struct fwnode_handle *
FUNC_4(const struct fwnode_handle *VAR_0, u32 VAR_1,
        u32 VAR_2)
{
 struct fwnode_handle *VAR_3 = ((void*)0);

 while ((VAR_3 = FUNC_1(VAR_0, VAR_3))) {
  struct fwnode_endpoint VAR_4;
  struct fwnode_handle *VAR_5;
  int VAR_6;

  VAR_6 = FUNC_3(VAR_3, &VAR_4);
  if (VAR_6 < 0)
   continue;

  if (VAR_4.port != VAR_1 || VAR_4.id != VAR_2)
   continue;

  VAR_5 = FUNC_2(VAR_3);
  if (!VAR_5)
   return ((void*)0);

  return FUNC_0(VAR_5) ? VAR_5 : ((void*)0);
 }

 return ((void*)0);
}
