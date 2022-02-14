
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bmp280_data {TYPE_1__* chip_info; } ;
typedef int ssize_t ;
struct TYPE_2__ {int num_oversampling_temp_avail; int oversampling_temp_avail; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct device*) ;
 struct bmp280_data* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct bmp280_data *VAR_3 = FUNC_2(FUNC_1(VAR_0));

 return FUNC_0(VAR_2, VAR_3->chip_info->oversampling_temp_avail,
     VAR_3->chip_info->num_oversampling_temp_avail);
}
