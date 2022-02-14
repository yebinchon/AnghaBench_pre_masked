
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct st_lsm6dsx_ext_dev_settings* settings; } ;
struct st_lsm6dsx_sensor {TYPE_3__ ext_info; } ;
struct TYPE_5__ {int fs_len; TYPE_1__* fs_avl; } ;
struct st_lsm6dsx_ext_dev_settings {TYPE_2__ fs_table; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int gain; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct st_lsm6dsx_sensor* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct st_lsm6dsx_sensor *VAR_4 = FUNC_1(FUNC_0(VAR_1));
 const struct st_lsm6dsx_ext_dev_settings *VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_5 = VAR_4->ext_info.settings;
 for (VAR_6 = 0; VAR_6 < VAR_5->fs_table.fs_len; VAR_6++)
  VAR_7 += FUNC_2(VAR_3 + VAR_7, VAR_0 - VAR_7, "0.%06u ",
     VAR_5->fs_table.fs_avl[VAR_6].gain);
 VAR_3[VAR_7 - 1] = '\n';

 return VAR_7;
}
