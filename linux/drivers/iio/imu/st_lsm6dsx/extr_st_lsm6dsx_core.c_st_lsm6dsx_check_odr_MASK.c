
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct st_lsm6dsx_sensor {size_t id; TYPE_3__* hw; } ;
struct st_lsm6dsx_odr_table_entry {TYPE_1__* odr_avl; } ;
struct TYPE_6__ {TYPE_2__* settings; } ;
struct TYPE_5__ {struct st_lsm6dsx_odr_table_entry* odr_table; } ;
struct TYPE_4__ {scalar_t__ hz; int val; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct st_lsm6dsx_sensor *VAR_2, u16 VAR_3, u8 *VAR_4)
{
 const struct st_lsm6dsx_odr_table_entry *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_2->hw->settings->odr_table[VAR_2->id];
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)




  if (VAR_5->odr_avl[VAR_6].hz >= VAR_3)
   break;

 if (VAR_6 == VAR_1)
  return -VAR_0;

 *VAR_4 = VAR_5->odr_avl[VAR_6].val;

 return 0;
}
