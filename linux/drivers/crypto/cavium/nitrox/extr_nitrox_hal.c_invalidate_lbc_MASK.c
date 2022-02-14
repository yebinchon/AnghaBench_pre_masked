
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ done; } ;
union lbc_inval_status {TYPE_2__ s; void* value; } ;
struct TYPE_3__ {int cam_inval_start; } ;
union lbc_inval_ctl {void* value; TYPE_1__ s; } ;
typedef int u64 ;
struct nitrox_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct nitrox_device*,int ) ;
 int FUNC_1 (struct nitrox_device*,int ,void*) ;
 int FUNC_2 (int) ;

void FUNC_3(struct nitrox_device *VAR_3)
{
 union lbc_inval_ctl VAR_4;
 union lbc_inval_status VAR_5;
 int VAR_6 = VAR_2;
 u64 VAR_7;


 VAR_7 = VAR_0;
 VAR_4.value = FUNC_0(VAR_3, VAR_7);
 VAR_4.s.cam_inval_start = 1;
 FUNC_1(VAR_3, VAR_7, VAR_4.value);

 VAR_7 = VAR_1;
 do {
  VAR_5.value = FUNC_0(VAR_3, VAR_7);
  if (VAR_5.s.done)
   break;
  FUNC_2(50);
 } while (VAR_6--);
}
