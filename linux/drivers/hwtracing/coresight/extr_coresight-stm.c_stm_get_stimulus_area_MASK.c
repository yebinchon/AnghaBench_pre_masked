
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct resource*) ;
 struct fwnode_handle* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct fwnode_handle*) ;
 scalar_t__ FUNC_3 (struct fwnode_handle*) ;
 int FUNC_4 (struct device*,struct resource*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, struct resource *VAR_2)
{
 struct fwnode_handle *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_3(VAR_3))
  return FUNC_4(VAR_1, VAR_2);
 else if (FUNC_2(VAR_3))
  return FUNC_0(VAR_1, VAR_2);
 return -VAR_0;
}
