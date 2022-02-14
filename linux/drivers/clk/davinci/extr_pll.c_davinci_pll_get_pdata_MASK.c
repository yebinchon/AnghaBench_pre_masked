
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ of_node; } ;
struct davinci_pll_platform_data {int cfgchip; } ;


 int VAR_0 ;
 struct davinci_pll_platform_data* FUNC_0 (struct device*) ;
 struct davinci_pll_platform_data* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct davinci_pll_platform_data *FUNC_3(struct device *VAR_1)
{
 struct davinci_pll_platform_data *VAR_2 = FUNC_0(VAR_1);





 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_1, sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);


 if (VAR_1->of_node)
  VAR_2->cfgchip =
   FUNC_2("ti,da830-cfgchip");

 return VAR_2;
}
