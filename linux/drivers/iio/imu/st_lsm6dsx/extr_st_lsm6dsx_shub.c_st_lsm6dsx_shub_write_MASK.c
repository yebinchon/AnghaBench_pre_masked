
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int mask; scalar_t__ addr; } ;
struct st_lsm6dsx_shub_settings {int dw_slv0_addr; int slv0_addr; TYPE_2__ wr_once; } ;
struct TYPE_6__ {int addr; } ;
struct st_lsm6dsx_sensor {TYPE_3__ ext_info; struct st_lsm6dsx_hw* hw; } ;
struct st_lsm6dsx_hw {TYPE_1__* settings; } ;
typedef int config ;
struct TYPE_4__ {struct st_lsm6dsx_shub_settings shub_settings; } ;


 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct st_lsm6dsx_sensor*,int) ;
 int FUNC_4 (struct st_lsm6dsx_hw*) ;
 int FUNC_5 (struct st_lsm6dsx_hw*,int,int*,int) ;
 int FUNC_6 (struct st_lsm6dsx_hw*,scalar_t__,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_7(struct st_lsm6dsx_sensor *VAR_0, u8 VAR_1,
        u8 *VAR_2, int VAR_3)
{
 const struct st_lsm6dsx_shub_settings *VAR_4;
 struct st_lsm6dsx_hw *VAR_5 = VAR_0->hw;
 u8 VAR_6[2], VAR_7;
 int VAR_8, VAR_9;

 VAR_4 = &VAR_5->settings->shub_settings;
 if (VAR_4->wr_once.addr) {
  unsigned int VAR_10;

  VAR_10 = FUNC_0(1, VAR_4->wr_once.mask);
  VAR_8 = FUNC_6(VAR_5,
   VAR_4->wr_once.addr,
   VAR_4->wr_once.mask,
   VAR_10);
  if (VAR_8 < 0)
   return VAR_8;
 }

 VAR_7 = FUNC_1(0, VAR_4->slv0_addr);
 VAR_6[0] = VAR_0->ext_info.addr << 1;
 for (VAR_9 = 0 ; VAR_9 < VAR_3; VAR_9++) {
  VAR_6[1] = VAR_1 + VAR_9;

  VAR_8 = FUNC_5(VAR_5, VAR_7, VAR_6,
      sizeof(VAR_6));
  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = FUNC_5(VAR_5, VAR_4->dw_slv0_addr,
      &VAR_2[VAR_9], 1);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = FUNC_3(VAR_0, 1);
  if (VAR_8 < 0)
   return VAR_8;

  FUNC_4(VAR_5);

  FUNC_3(VAR_0, 0);
 }

 FUNC_2(VAR_6, 0, sizeof(VAR_6));
 return FUNC_5(VAR_5, VAR_7, VAR_6, sizeof(VAR_6));
}
