
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct st_lsm6dsx_ext_dev_settings* settings; } ;
struct st_lsm6dsx_sensor {TYPE_1__ ext_info; } ;
struct TYPE_8__ {int mask; scalar_t__ addr; } ;
struct TYPE_7__ {int mask; scalar_t__ addr; } ;
struct TYPE_6__ {int mask; scalar_t__ addr; } ;
struct st_lsm6dsx_ext_dev_settings {TYPE_4__ off_canc; TYPE_3__ temp_comp; TYPE_2__ bdu; } ;


 int FUNC_0 (struct st_lsm6dsx_sensor*,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_1(struct st_lsm6dsx_sensor *VAR_0)
{
 const struct st_lsm6dsx_ext_dev_settings *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->ext_info.settings;
 if (VAR_1->bdu.addr) {
  VAR_2 = FUNC_0(VAR_0,
            VAR_1->bdu.addr,
            VAR_1->bdu.mask, 1);
  if (VAR_2 < 0)
   return VAR_2;
 }

 if (VAR_1->temp_comp.addr) {
  VAR_2 = FUNC_0(VAR_0,
     VAR_1->temp_comp.addr,
     VAR_1->temp_comp.mask, 1);
  if (VAR_2 < 0)
   return VAR_2;
 }

 if (VAR_1->off_canc.addr) {
  VAR_2 = FUNC_0(VAR_0,
     VAR_1->off_canc.addr,
     VAR_1->off_canc.mask, 1);
  if (VAR_2 < 0)
   return VAR_2;
 }

 return 0;
}
