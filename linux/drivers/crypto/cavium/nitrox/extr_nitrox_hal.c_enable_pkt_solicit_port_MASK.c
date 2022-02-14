
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enb; int z; int rh; } ;
union nps_pkt_slc_ctl {TYPE_1__ s; scalar_t__ value; } ;
typedef int u64 ;
struct nitrox_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nitrox_device*,int ) ;
 int FUNC_2 (struct nitrox_device*,int ,scalar_t__) ;
 int FUNC_3 (int) ;

void FUNC_4(struct nitrox_device *VAR_1, int VAR_2)
{
 union nps_pkt_slc_ctl VAR_3;
 int VAR_4 = VAR_0;
 u64 VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 VAR_3.value = 0;
 VAR_3.s.enb = 1;




 VAR_3.s.z = 1;

 VAR_3.s.rh = 1;
 FUNC_2(VAR_1, VAR_5, VAR_3.value);


 do {
  VAR_3.value = FUNC_1(VAR_1, VAR_5);
  if (VAR_3.s.enb)
   break;
  FUNC_3(50);
 } while (VAR_4--);
}
