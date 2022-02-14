
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property_entry {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct fwnode_handle*) ;
 int FUNC_1 (struct fwnode_handle*) ;
 struct fwnode_handle* FUNC_2 (struct property_entry const*,int *) ;
 int FUNC_3 (struct device*,struct fwnode_handle*) ;

int FUNC_4(struct device *VAR_0,
     const struct property_entry *VAR_1)
{
 struct fwnode_handle *VAR_2;

 VAR_2 = FUNC_2(VAR_1, ((void*)0));
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_3(VAR_0, VAR_2);
 return 0;
}
