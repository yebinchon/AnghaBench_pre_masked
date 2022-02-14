
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct temp_data {int attr_group; } ;
struct platform_data {struct temp_data** core_data; TYPE_1__* hwmon_dev; } ;
struct TYPE_2__ {int kobj; } ;


 int FUNC_0 (struct temp_data*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct platform_data *VAR_0, int VAR_1)
{
 struct temp_data *VAR_2 = VAR_0->core_data[VAR_1];


 FUNC_1(&VAR_0->hwmon_dev->kobj, &VAR_2->attr_group);

 FUNC_0(VAR_0->core_data[VAR_1]);
 VAR_0->core_data[VAR_1] = ((void*)0);
}
