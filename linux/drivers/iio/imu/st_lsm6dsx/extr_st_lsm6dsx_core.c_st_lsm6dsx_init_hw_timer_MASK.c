
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int mask; scalar_t__ addr; } ;
struct TYPE_7__ {int mask; scalar_t__ addr; } ;
struct TYPE_6__ {int mask; scalar_t__ addr; } ;
struct st_lsm6dsx_hw_ts_settings {TYPE_4__ fifo_en; TYPE_3__ hr_timer; TYPE_2__ timer_en; } ;
struct st_lsm6dsx_hw {int regmap; TYPE_1__* settings; } ;
struct TYPE_5__ {struct st_lsm6dsx_hw_ts_settings ts_settings; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_2(struct st_lsm6dsx_hw *VAR_0)
{
 const struct st_lsm6dsx_hw_ts_settings *VAR_1;
 int VAR_2, VAR_3;

 VAR_1 = &VAR_0->settings->ts_settings;

 if (VAR_1->timer_en.addr) {
  VAR_3 = FUNC_0(1, VAR_1->timer_en.mask);
  VAR_2 = FUNC_1(VAR_0->regmap,
      VAR_1->timer_en.addr,
      VAR_1->timer_en.mask, VAR_3);
  if (VAR_2 < 0)
   return VAR_2;
 }


 if (VAR_1->hr_timer.addr) {
  VAR_3 = FUNC_0(1, VAR_1->hr_timer.mask);
  VAR_2 = FUNC_1(VAR_0->regmap,
      VAR_1->hr_timer.addr,
      VAR_1->hr_timer.mask, VAR_3);
  if (VAR_2 < 0)
   return VAR_2;
 }


 if (VAR_1->fifo_en.addr) {
  VAR_3 = FUNC_0(1, VAR_1->fifo_en.mask);
  VAR_2 = FUNC_1(VAR_0->regmap,
      VAR_1->fifo_en.addr,
      VAR_1->fifo_en.mask, VAR_3);
  if (VAR_2 < 0)
   return VAR_2;
 }
 return 0;
}
