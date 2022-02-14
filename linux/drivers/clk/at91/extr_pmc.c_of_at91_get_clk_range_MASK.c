
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct device_node {int dummy; } ;
struct clk_range {void* max; void* min; } ;


 int FUNC_0 (struct device_node*,char const*,int,void**) ;

int FUNC_1(struct device_node *VAR_0, const char *VAR_1,
     struct clk_range *VAR_2)
{
 u32 VAR_3, VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, 0, &VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, 1, &VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_2) {
  VAR_2->min = VAR_3;
  VAR_2->max = VAR_4;
 }

 return 0;
}
