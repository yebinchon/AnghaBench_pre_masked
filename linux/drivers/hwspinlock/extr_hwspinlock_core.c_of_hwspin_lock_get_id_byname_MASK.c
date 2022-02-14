
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,int) ;
 int FUNC_1 (struct device_node*,char*,char const*) ;

int FUNC_2(struct device_node *VAR_1, const char *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1, "hwlock-names", VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_0(VAR_1, VAR_3);
}
