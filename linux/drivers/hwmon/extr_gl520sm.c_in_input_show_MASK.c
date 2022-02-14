
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gl520_data {int * in_input; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct gl520_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3 = FUNC_4(VAR_1)->index;
 struct gl520_data *VAR_4 = FUNC_2(VAR_0);
 u8 VAR_5 = VAR_4->in_input[VAR_3];

 if (VAR_3 == 0)
  return FUNC_3(VAR_2, "%d\n", FUNC_1(VAR_5));
 else
  return FUNC_3(VAR_2, "%d\n", FUNC_0(VAR_5));
}
