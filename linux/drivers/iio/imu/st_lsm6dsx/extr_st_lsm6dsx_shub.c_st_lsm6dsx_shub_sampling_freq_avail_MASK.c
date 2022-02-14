
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_6__ {struct st_lsm6dsx_ext_dev_settings* settings; } ;
struct st_lsm6dsx_sensor {TYPE_3__ ext_info; } ;
struct TYPE_5__ {TYPE_1__* odr_avl; } ;
struct st_lsm6dsx_ext_dev_settings {TYPE_2__ odr_table; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ hz; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct st_lsm6dsx_sensor* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,char*,scalar_t__) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2,
        struct device_attribute *VAR_3,
        char *VAR_4)
{
 struct st_lsm6dsx_sensor *VAR_5 = FUNC_1(FUNC_0(VAR_2));
 const struct st_lsm6dsx_ext_dev_settings *VAR_6;
 int VAR_7, VAR_8 = 0;

 VAR_6 = VAR_5->ext_info.settings;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  u16 VAR_9 = VAR_6->odr_table.odr_avl[VAR_7].hz;

  if (VAR_9 > 0)
   VAR_8 += FUNC_2(VAR_4 + VAR_8, VAR_0 - VAR_8, "%d ",
      VAR_9);
 }
 VAR_4[VAR_8 - 1] = '\n';

 return VAR_8;
}
