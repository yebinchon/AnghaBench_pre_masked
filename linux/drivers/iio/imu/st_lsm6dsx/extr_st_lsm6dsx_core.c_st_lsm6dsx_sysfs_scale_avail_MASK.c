
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_lsm6dsx_sensor {size_t id; struct st_lsm6dsx_hw* hw; } ;
struct st_lsm6dsx_hw {TYPE_1__* settings; } ;
struct st_lsm6dsx_fs_table_entry {int fs_len; TYPE_2__* fs_avl; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int gain; } ;
struct TYPE_3__ {struct st_lsm6dsx_fs_table_entry* fs_table; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct st_lsm6dsx_sensor* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct st_lsm6dsx_sensor *VAR_4 = FUNC_1(FUNC_0(VAR_1));
 const struct st_lsm6dsx_fs_table_entry *VAR_5;
 struct st_lsm6dsx_hw *VAR_6 = VAR_4->hw;
 int VAR_7, VAR_8 = 0;

 VAR_5 = &VAR_6->settings->fs_table[VAR_4->id];
 for (VAR_7 = 0; VAR_7 < VAR_5->fs_len; VAR_7++)
  VAR_8 += FUNC_2(VAR_3 + VAR_8, VAR_0 - VAR_8, "0.%06u ",
     VAR_5->fs_avl[VAR_7].gain);
 VAR_3[VAR_8 - 1] = '\n';

 return VAR_8;
}
