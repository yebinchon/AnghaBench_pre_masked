
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nps_slc_buf_thrsh; } ;
union bmo_ctl2 {int value; TYPE_1__ s; } ;
typedef int u64 ;
struct nitrox_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nitrox_device*,int ) ;
 int FUNC_1 (struct nitrox_device*,int ,int ) ;

void FUNC_2(struct nitrox_device *VAR_1)
{
 union bmo_ctl2 VAR_2;
 u64 VAR_3;


 VAR_3 = VAR_0;
 VAR_2 = FUNC_0(VAR_1, VAR_3);
 VAR_2 = 0xff;
 FUNC_1(VAR_1, VAR_3, VAR_2);
}
