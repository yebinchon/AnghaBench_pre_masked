
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,int) ;
 int FUNC_1 (struct device_node*,int) ;

int FUNC_2(struct device_node *VAR_0, bool VAR_1)
{
 int VAR_2;

 if (!VAR_0)
  return 0;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_1(VAR_0, VAR_1);
}
