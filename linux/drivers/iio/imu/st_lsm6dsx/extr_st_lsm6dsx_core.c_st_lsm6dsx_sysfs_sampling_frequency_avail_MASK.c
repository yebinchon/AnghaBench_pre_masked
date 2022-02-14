
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_lsm6dsx_sensor {int id; struct st_lsm6dsx_hw* hw; } ;
struct st_lsm6dsx_hw {TYPE_3__* settings; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum st_lsm6dsx_sensor_id { ____Placeholder_st_lsm6dsx_sensor_id } st_lsm6dsx_sensor_id ;
struct TYPE_6__ {TYPE_2__* odr_table; } ;
struct TYPE_5__ {TYPE_1__* odr_avl; } ;
struct TYPE_4__ {int hz; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct st_lsm6dsx_sensor* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,char*,int ) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2,
       struct device_attribute *VAR_3,
       char *VAR_4)
{
 struct st_lsm6dsx_sensor *VAR_5 = FUNC_1(FUNC_0(VAR_2));
 enum st_lsm6dsx_sensor_id VAR_6 = VAR_5->id;
 struct st_lsm6dsx_hw *VAR_7 = VAR_5->hw;
 int VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_9 += FUNC_2(VAR_4 + VAR_9, VAR_0 - VAR_9, "%d ",
     VAR_7->settings->odr_table[VAR_6].odr_avl[VAR_8].hz);
 VAR_4[VAR_9 - 1] = '\n';

 return VAR_9;
}
