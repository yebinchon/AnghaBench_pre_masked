
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int *,struct fwnode_handle*) ;
 int VAR_1 ;

__attribute__((used)) static struct device *
FUNC_1(struct fwnode_handle *VAR_2)
{
 struct device *VAR_3 = ((void*)0);





 VAR_3 = FUNC_0(&VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;





 return FUNC_0(&VAR_0, VAR_2);
}
