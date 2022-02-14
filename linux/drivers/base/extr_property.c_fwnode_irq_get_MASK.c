
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct fwnode_handle {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct fwnode_handle*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int,struct resource*) ;
 int FUNC_3 (struct device_node*,unsigned int) ;
 struct device_node* FUNC_4 (struct fwnode_handle*) ;

int FUNC_5(struct fwnode_handle *VAR_1, unsigned int VAR_2)
{
 struct device_node *VAR_3 = FUNC_4(VAR_1);
 struct resource VAR_4;
 int VAR_5;

 if (FUNC_1(VAR_0) && VAR_3)
  return FUNC_3(VAR_3, VAR_2);

 VAR_5 = FUNC_2(FUNC_0(VAR_1), VAR_2, &VAR_4);
 if (VAR_5)
  return VAR_5;

 return VAR_4.start;
}
