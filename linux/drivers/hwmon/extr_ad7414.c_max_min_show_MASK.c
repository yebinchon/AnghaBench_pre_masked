
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7414_data {int* temps; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 struct ad7414_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 TYPE_1__* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
       char *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1)->index;
 struct ad7414_data *VAR_4 = FUNC_0(VAR_0);
 return FUNC_1(VAR_2, "%d\n", VAR_4->temps[VAR_3] * 1000);
}
