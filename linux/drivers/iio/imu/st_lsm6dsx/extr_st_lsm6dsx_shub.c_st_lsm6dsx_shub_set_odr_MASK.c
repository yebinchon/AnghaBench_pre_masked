
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {struct st_lsm6dsx_ext_dev_settings* settings; } ;
struct st_lsm6dsx_sensor {TYPE_1__ ext_info; } ;
struct TYPE_5__ {int mask; int addr; } ;
struct TYPE_6__ {TYPE_2__ reg; } ;
struct st_lsm6dsx_ext_dev_settings {TYPE_3__ odr_table; } ;


 int FUNC_0 (struct st_lsm6dsx_sensor*,int ,int *) ;
 int FUNC_1 (struct st_lsm6dsx_sensor*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct st_lsm6dsx_sensor *VAR_0, u16 VAR_1)
{
 const struct st_lsm6dsx_ext_dev_settings *VAR_2;
 u16 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2 = VAR_0->ext_info.settings;
 return FUNC_1(VAR_0,
            VAR_2->odr_table.reg.addr,
            VAR_2->odr_table.reg.mask,
            VAR_3);
}
