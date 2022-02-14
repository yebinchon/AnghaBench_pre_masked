
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm92_data {int* temp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 struct lm92_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 size_t VAR_0 ;
 TYPE_1__* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
     char *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_2)->index;
 struct lm92_data *VAR_5 = FUNC_0(VAR_1);
 return FUNC_1(VAR_3, "%d\n", (VAR_5->temp[VAR_0] >> VAR_4) & 1);
}
