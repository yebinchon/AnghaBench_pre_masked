
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bma180_data {TYPE_1__* part_info; } ;
typedef int ssize_t ;
struct TYPE_2__ {int num_scales; int scale_table; } ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (struct device*) ;
 struct bma180_data* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct bma180_data *VAR_3 = FUNC_2(FUNC_1(VAR_0));

 return FUNC_0(VAR_2, VAR_3->part_info->scale_table,
  VAR_3->part_info->num_scales, 1);
}
