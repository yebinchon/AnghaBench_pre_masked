
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timet; } ;
union nps_pkt_slc_int_levels {scalar_t__ value; TYPE_1__ s; } ;
typedef int u64 ;
struct nitrox_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nitrox_device*,int) ;
 int FUNC_2 (struct nitrox_device*,int ,scalar_t__) ;
 int FUNC_3 (struct nitrox_device*,int) ;

__attribute__((used)) static void FUNC_4(struct nitrox_device *VAR_0, int VAR_1)
{
 union nps_pkt_slc_int_levels VAR_2;
 u64 VAR_3;

 FUNC_3(VAR_0, VAR_1);


 VAR_3 = FUNC_0(VAR_1);
 VAR_2.value = 0;

 VAR_2.s.timet = 0x3fffff;
 FUNC_2(VAR_0, VAR_3, VAR_2.value);


 FUNC_1(VAR_0, VAR_1);
}
