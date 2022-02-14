
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {struct st_lsm6dsx_ext_dev_settings* settings; } ;
struct st_lsm6dsx_sensor {TYPE_1__ ext_info; } ;
struct TYPE_5__ {TYPE_3__* odr_avl; } ;
struct st_lsm6dsx_ext_dev_settings {TYPE_2__ odr_table; } ;
struct TYPE_6__ {scalar_t__ hz; scalar_t__ val; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct st_lsm6dsx_sensor *VAR_2,
       u16 VAR_3, u16 *VAR_4)
{
 const struct st_lsm6dsx_ext_dev_settings *VAR_5;
 int VAR_6;

 VAR_5 = VAR_2->ext_info.settings;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  if (VAR_5->odr_table.odr_avl[VAR_6].hz == VAR_3)
   break;

 if (VAR_6 == VAR_1)
  return -VAR_0;

 *VAR_4 = VAR_5->odr_table.odr_avl[VAR_6].val;
 return 0;
}
