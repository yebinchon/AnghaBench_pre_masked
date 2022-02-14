
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct emc6w201_data {scalar_t__** temp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; int nr; } ;


 struct emc6w201_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 TYPE_1__* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct emc6w201_data *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = FUNC_2(VAR_1)->index;
 int VAR_5 = FUNC_2(VAR_1)->nr;

 return FUNC_1(VAR_2, "%d\n", (int)VAR_3->temp[VAR_4][VAR_5] * 1000);
}
