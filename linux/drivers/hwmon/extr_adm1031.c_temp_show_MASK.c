
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1031_data {int* ext_temp; int * temp; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int ,int) ;
 struct adm1031_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 int VAR_3 = FUNC_3(VAR_1)->index;
 struct adm1031_data *VAR_4 = FUNC_1(VAR_0);
 int VAR_5;
 VAR_5 = VAR_3 == 0 ?
     ((VAR_4->ext_temp[VAR_3] >> 6) & 0x3) * 2 :
     (((VAR_4->ext_temp[VAR_3] >> ((VAR_3 - 1) * 3)) & 7));
 return FUNC_2(VAR_2, "%d\n", FUNC_0(VAR_4->temp[VAR_3], VAR_5));
}
