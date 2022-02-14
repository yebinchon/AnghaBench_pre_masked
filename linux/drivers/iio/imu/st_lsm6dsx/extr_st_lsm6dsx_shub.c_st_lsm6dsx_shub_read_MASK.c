
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct st_lsm6dsx_shub_settings {int shub_out; int slv0_addr; } ;
struct TYPE_4__ {int addr; } ;
struct st_lsm6dsx_sensor {TYPE_2__ ext_info; struct st_lsm6dsx_hw* hw; } ;
struct st_lsm6dsx_hw {TYPE_1__* settings; } ;
typedef int config ;
struct TYPE_3__ {struct st_lsm6dsx_shub_settings shub_settings; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct st_lsm6dsx_sensor*,int) ;
 int FUNC_3 (struct st_lsm6dsx_hw*,int ,int*,int) ;
 int FUNC_4 (struct st_lsm6dsx_hw*) ;
 int FUNC_5 (struct st_lsm6dsx_hw*,int,int*,int) ;

__attribute__((used)) static int
FUNC_6(struct st_lsm6dsx_sensor *VAR_1, u8 VAR_2,
       u8 *VAR_3, int VAR_4)
{
 const struct st_lsm6dsx_shub_settings *VAR_5;
 struct st_lsm6dsx_hw *VAR_6 = VAR_1->hw;
 u8 VAR_7[3], VAR_8;
 int VAR_9;

 VAR_5 = &VAR_6->settings->shub_settings;
 VAR_8 = FUNC_0(0, VAR_5->slv0_addr);

 VAR_7[0] = (VAR_1->ext_info.addr << 1) | 1;
 VAR_7[1] = VAR_2;
 VAR_7[2] = VAR_4 & VAR_0;

 VAR_9 = FUNC_5(VAR_6, VAR_8, VAR_7,
     sizeof(VAR_7));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_1, 1);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_4(VAR_6);

 VAR_9 = FUNC_3(VAR_6, VAR_5->shub_out, VAR_3,
           VAR_4 & VAR_0);

 FUNC_2(VAR_1, 0);

 FUNC_1(VAR_7, 0, sizeof(VAR_7));
 return FUNC_5(VAR_6, VAR_8, VAR_7,
      sizeof(VAR_7));
}
