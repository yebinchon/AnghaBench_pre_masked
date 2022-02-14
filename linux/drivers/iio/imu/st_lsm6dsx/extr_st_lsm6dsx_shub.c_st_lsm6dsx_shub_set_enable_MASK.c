
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {struct st_lsm6dsx_ext_dev_settings* settings; } ;
struct st_lsm6dsx_sensor {int odr; TYPE_1__ ext_info; } ;
struct TYPE_9__ {int mask; scalar_t__ addr; } ;
struct TYPE_10__ {TYPE_4__ reg; int off_val; int on_val; } ;
struct TYPE_7__ {int mask; scalar_t__ addr; } ;
struct TYPE_8__ {TYPE_2__ reg; } ;
struct st_lsm6dsx_ext_dev_settings {TYPE_5__ pwr_table; TYPE_3__ odr_table; } ;


 int FUNC_0 (struct st_lsm6dsx_sensor*,int) ;
 int FUNC_1 (struct st_lsm6dsx_sensor*,int) ;
 int FUNC_2 (struct st_lsm6dsx_sensor*,int ) ;
 int FUNC_3 (struct st_lsm6dsx_sensor*,scalar_t__,int ,int ) ;

int FUNC_4(struct st_lsm6dsx_sensor *VAR_0, bool VAR_1)
{
 const struct st_lsm6dsx_ext_dev_settings *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2 = VAR_0->ext_info.settings;
 if (VAR_1) {
  VAR_3 = FUNC_2(VAR_0, VAR_0->odr);
  if (VAR_3 < 0)
   return VAR_3;
 } else {
  VAR_3 = FUNC_3(VAR_0,
     VAR_2->odr_table.reg.addr,
     VAR_2->odr_table.reg.mask, 0);
  if (VAR_3 < 0)
   return VAR_3;
 }

 if (VAR_2->pwr_table.reg.addr) {
  u8 VAR_4;

  VAR_4 = VAR_1 ? VAR_2->pwr_table.on_val
        : VAR_2->pwr_table.off_val;
  VAR_3 = FUNC_3(VAR_0,
     VAR_2->pwr_table.reg.addr,
     VAR_2->pwr_table.reg.mask, VAR_4);
  if (VAR_3 < 0)
   return VAR_3;
 }

 return FUNC_1(VAR_0, VAR_1);
}
