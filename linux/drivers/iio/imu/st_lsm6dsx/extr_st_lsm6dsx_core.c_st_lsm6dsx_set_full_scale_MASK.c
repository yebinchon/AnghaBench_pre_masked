
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct st_lsm6dsx_sensor {size_t id; scalar_t__ gain; TYPE_4__* hw; } ;
struct TYPE_7__ {int mask; int addr; } ;
struct st_lsm6dsx_fs_table_entry {int fs_len; TYPE_3__ reg; TYPE_2__* fs_avl; } ;
struct TYPE_8__ {TYPE_1__* settings; } ;
struct TYPE_6__ {scalar_t__ gain; int val; } ;
struct TYPE_5__ {struct st_lsm6dsx_fs_table_entry* fs_table; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct st_lsm6dsx_sensor *VAR_1,
         u32 VAR_2)
{
 const struct st_lsm6dsx_fs_table_entry *VAR_3;
 unsigned int VAR_4;
 int VAR_5, VAR_6;

 VAR_3 = &VAR_1->hw->settings->fs_table[VAR_1->id];
 for (VAR_5 = 0; VAR_5 < VAR_3->fs_len; VAR_5++) {
  if (VAR_3->fs_avl[VAR_5].gain == VAR_2)
   break;
 }

 if (VAR_5 == VAR_3->fs_len)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_3->fs_avl[VAR_5].val,
        VAR_3->reg.mask);
 VAR_6 = FUNC_1(VAR_1->hw, VAR_3->reg.addr,
         VAR_3->reg.mask, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_1->gain = VAR_2;

 return 0;
}
