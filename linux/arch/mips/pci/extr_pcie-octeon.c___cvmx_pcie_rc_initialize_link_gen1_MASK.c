
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ qlm_cfg; int lane_swp; int lnk_enb; } ;
union cvmx_pescx_ctl_status {void* u64; TYPE_3__ s; } ;
struct TYPE_7__ {int m_cpl_len_err; } ;
union cvmx_pciercx_cfg455 {void* u32; TYPE_2__ s; } ;
struct TYPE_6__ {int lme; } ;
union cvmx_pciercx_cfg452 {void* u32; TYPE_1__ s; } ;
struct TYPE_10__ {int rtl; } ;
union cvmx_pciercx_cfg448 {void* u32; TYPE_5__ s; } ;
struct TYPE_9__ {scalar_t__ dlla; int nlw; } ;
union cvmx_pciercx_cfg032 {TYPE_4__ s; void* u32; } ;
typedef int uint64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 () ;
 void* FUNC_10 (int,int ) ;
 int FUNC_11 (int,int ,void*) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (int ,void*) ;
 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(int VAR_4)
{
 uint64_t VAR_5;
 union cvmx_pescx_ctl_status VAR_6;
 union cvmx_pciercx_cfg452 VAR_7;
 union cvmx_pciercx_cfg032 VAR_8;
 union cvmx_pciercx_cfg448 VAR_9;


 VAR_7 = FUNC_10(VAR_4, FUNC_2(VAR_4));
 VAR_6.u64 = FUNC_12(FUNC_4(VAR_4));
 if (VAR_6.s.qlm_cfg == 0)

  VAR_7 = 0xf;
 else

  VAR_7 = 0x7;
 FUNC_11(VAR_4, FUNC_2(VAR_4), VAR_7);






 if (FUNC_5(VAR_3)) {
  union cvmx_pciercx_cfg455 VAR_10;
  VAR_10 = FUNC_10(VAR_4, FUNC_3(VAR_4));
  VAR_10 = 1;
  FUNC_11(VAR_4, FUNC_3(VAR_4), VAR_10);
 }


 if (FUNC_5(VAR_1) && (VAR_4 == 1)) {
  VAR_6.s.lane_swp = 1;
  FUNC_13(FUNC_4(VAR_4), VAR_6.u64);
 }


 VAR_6.u64 = FUNC_12(FUNC_4(VAR_4));
 VAR_6.s.lnk_enb = 1;
 FUNC_13(FUNC_4(VAR_4), VAR_6.u64);





 if (FUNC_5(VAR_2))
  FUNC_6(0);


 VAR_5 = FUNC_9();
 do {
  if (FUNC_9() - VAR_5 > 2 * FUNC_14()) {
   FUNC_8("PCIe: Port %d link timeout\n", VAR_4);
   return -1;
  }
  FUNC_7(10000);
  VAR_8 = FUNC_10(VAR_4, FUNC_0(VAR_4));
 } while (VAR_8 == 0);


 FUNC_13(VAR_0, FUNC_12(VAR_0));
 VAR_9 = FUNC_10(VAR_4, FUNC_1(VAR_4));
 switch (VAR_8) {
 case 1:
  VAR_9 = 1677;
  break;
 case 2:
  VAR_9 = 867;
  break;
 case 4:
  VAR_9 = 462;
  break;
 case 8:
  VAR_9 = 258;
  break;
 }
 FUNC_11(VAR_4, FUNC_1(VAR_4), VAR_9);

 return 0;
}
