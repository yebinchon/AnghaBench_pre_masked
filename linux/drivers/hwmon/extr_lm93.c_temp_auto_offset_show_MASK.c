
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sensor_device_attribute_2 {int index; int nr; } ;
struct TYPE_2__ {int * offset; } ;
struct lm93_data {TYPE_1__ block10; int sfc2; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int) ;
 struct lm93_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute_2 *VAR_3 = FUNC_4(VAR_1);
 int VAR_4 = VAR_3->index;
 int VAR_5 = VAR_3->nr;
 struct lm93_data *VAR_6 = FUNC_2(VAR_0);
 int VAR_7 = FUNC_1(VAR_6->sfc2, VAR_4);
 return FUNC_3(VAR_2, "%d\n",
        FUNC_0(VAR_6->block10.offset[VAR_5],
           VAR_4, VAR_7));
}
