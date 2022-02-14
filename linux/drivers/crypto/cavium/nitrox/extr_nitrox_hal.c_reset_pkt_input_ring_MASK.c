
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enb; } ;
union nps_pkt_in_instr_ctl {TYPE_1__ s; void* value; } ;
union nps_pkt_in_done_cnts {void* value; } ;
typedef int u64 ;
struct nitrox_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (struct nitrox_device*,int ) ;
 int FUNC_3 (struct nitrox_device*,int ,void*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct nitrox_device *VAR_1, int VAR_2)
{
 union nps_pkt_in_instr_ctl VAR_3;
 union nps_pkt_in_done_cnts VAR_4;
 int VAR_5 = VAR_0;
 u64 VAR_6;


 VAR_6 = FUNC_1(VAR_2);
 VAR_3.value = FUNC_2(VAR_1, VAR_6);
 VAR_3.s.enb = 0;
 FUNC_3(VAR_1, VAR_6, VAR_3.value);


 FUNC_5(100, 150);
 do {
  VAR_3.value = FUNC_2(VAR_1, VAR_6);
  if (!VAR_3.s.enb)
   break;
  FUNC_4(50);
 } while (VAR_5--);


 VAR_6 = FUNC_0(VAR_2);
 VAR_4.value = FUNC_2(VAR_1, VAR_6);
 FUNC_3(VAR_1, VAR_6, VAR_4.value);
 FUNC_5(50, 100);
}
