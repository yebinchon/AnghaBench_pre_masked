
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfit_spa {TYPE_1__* spa; } ;
struct nd_region {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int range_index; } ;


 struct nfit_spa* FUNC_0 (struct nd_region*) ;
 int FUNC_1 (char*,char*,int) ;
 struct nd_region* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct nd_region *VAR_3 = FUNC_2(VAR_0);
 struct nfit_spa *VAR_4 = FUNC_0(VAR_3);

 return FUNC_1(VAR_2, "%d\n", VAR_4->spa->range_index);
}
