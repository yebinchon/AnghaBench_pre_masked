
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct dev_dax {struct dax_device* dax_dev; struct dax_region* region; } ;
struct dax_region {int dummy; } ;
struct dax_device {int dummy; } ;


 int FUNC_0 (struct dax_region*) ;
 int FUNC_1 (struct dev_dax*) ;
 int FUNC_2 (struct dax_device*) ;
 struct dev_dax* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct dev_dax *VAR_1 = FUNC_3(VAR_0);
 struct dax_region *VAR_2 = VAR_1->region;
 struct dax_device *VAR_3 = VAR_1->dax_dev;

 FUNC_0(VAR_2);
 FUNC_2(VAR_3);
 FUNC_1(VAR_1);
}
