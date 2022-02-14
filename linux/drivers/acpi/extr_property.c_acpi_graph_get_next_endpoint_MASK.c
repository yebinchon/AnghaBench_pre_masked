
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct fwnode_handle const fwnode_handle ;


 struct fwnode_handle const* FUNC_0 (struct fwnode_handle const*,struct fwnode_handle const*) ;
 struct fwnode_handle const* FUNC_1 (struct fwnode_handle const*) ;
 scalar_t__ FUNC_2 (struct fwnode_handle const*,char*) ;

__attribute__((used)) static struct fwnode_handle *FUNC_3(
 const struct fwnode_handle *VAR_0, struct fwnode_handle *VAR_1)
{
 struct fwnode_handle *VAR_2 = ((void*)0);
 struct fwnode_handle *VAR_3;

 if (!VAR_1) {
  do {
   VAR_2 = FUNC_0(VAR_0, VAR_2);







   if (FUNC_2(VAR_2, "port"))
    break;
  } while (VAR_2);
 } else {
  VAR_2 = FUNC_1(VAR_1);
 }

 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 while (!VAR_3) {
  VAR_2 = FUNC_0(VAR_0, VAR_2);
  if (!VAR_2)
   break;
  if (FUNC_2(VAR_2, "port"))
   VAR_3 = FUNC_0(VAR_2, ((void*)0));
 }
 if (!FUNC_2(VAR_3, "endpoint"))
  return ((void*)0);

 return VAR_3;
}
