
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mask; int addr; } ;
struct st_lsm6dsx_shub_settings {TYPE_2__ master_en; } ;
struct st_lsm6dsx_sensor {struct st_lsm6dsx_hw* hw; } ;
struct st_lsm6dsx_hw {int page_lock; int regmap; TYPE_1__* settings; } ;
struct TYPE_3__ {struct st_lsm6dsx_shub_settings shub_settings; } ;


 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,unsigned int) ;
 int FUNC_4 (struct st_lsm6dsx_sensor*,int) ;
 int FUNC_5 (struct st_lsm6dsx_hw*,int) ;

__attribute__((used)) static int FUNC_6(struct st_lsm6dsx_sensor *VAR_0,
      bool VAR_1)
{
 const struct st_lsm6dsx_shub_settings *VAR_2;
 struct st_lsm6dsx_hw *VAR_3 = VAR_0->hw;
 unsigned int VAR_4;
 int VAR_5;


 VAR_5 = FUNC_4(VAR_0, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_1(&VAR_3->page_lock);

 VAR_2 = &VAR_3->settings->shub_settings;
 VAR_5 = FUNC_5(VAR_3, 1);
 if (VAR_5 < 0)
  goto out;

 VAR_4 = FUNC_0(VAR_1, VAR_2->master_en.mask);
 VAR_5 = FUNC_3(VAR_3->regmap, VAR_2->master_en.addr,
     VAR_2->master_en.mask, VAR_4);

 FUNC_5(VAR_3, 0);
out:
 FUNC_2(&VAR_3->page_lock);

 return VAR_5;
}
