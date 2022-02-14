
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mask; int addr; } ;
struct st_lsm6dsx_shub_settings {TYPE_2__ page_mux; } ;
struct st_lsm6dsx_hw {int regmap; TYPE_1__* settings; } ;
struct TYPE_3__ {struct st_lsm6dsx_shub_settings shub_settings; } ;


 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 int FUNC_2 (int,int) ;

int FUNC_3(struct st_lsm6dsx_hw *VAR_0, bool VAR_1)
{
 const struct st_lsm6dsx_shub_settings *VAR_2;
 unsigned int VAR_3;
 int VAR_4;

 VAR_2 = &VAR_0->settings->shub_settings;
 VAR_3 = FUNC_0(VAR_1, VAR_2->page_mux.mask);
 VAR_4 = FUNC_1(VAR_0->regmap, VAR_2->page_mux.addr,
     VAR_2->page_mux.mask, VAR_3);
 FUNC_2(100, 150);

 return VAR_4;
}
