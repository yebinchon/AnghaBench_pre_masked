
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lnk_enb; } ;
union cvmx_pemx_ctl_status {int u64; TYPE_1__ s; } ;
struct TYPE_6__ {int rtl; } ;
union cvmx_pciercx_cfg448 {void* u32; TYPE_3__ s; } ;
struct TYPE_5__ {scalar_t__ dlla; int lt; int nlw; } ;
union cvmx_pciercx_cfg032 {TYPE_2__ s; void* u32; } ;
typedef scalar_t__ uint64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ,void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static int FUNC_10(int VAR_0)
{
 uint64_t VAR_1;
 union cvmx_pemx_ctl_status VAR_2;
 union cvmx_pciercx_cfg032 VAR_3;
 union cvmx_pciercx_cfg448 VAR_4;


 VAR_2.u64 = FUNC_7(FUNC_2(VAR_0));
 VAR_2.s.lnk_enb = 1;
 FUNC_8(FUNC_2(VAR_0), VAR_2.u64);


 VAR_1 = FUNC_4();
 do {
  if (FUNC_4() - VAR_1 > FUNC_9())
   return -1;
  FUNC_3(10000);
  VAR_3 = FUNC_5(VAR_0, FUNC_0(VAR_0));
 } while ((VAR_3 == 0) || (VAR_3 == 1));
 VAR_4 = FUNC_5(VAR_0, FUNC_1(VAR_0));
 switch (VAR_3) {
 case 1:
  VAR_4 = 1677;
  break;
 case 2:
  VAR_4 = 867;
  break;
 case 4:
  VAR_4 = 462;
  break;
 case 8:
  VAR_4 = 258;
  break;
 }
 FUNC_6(VAR_0, FUNC_1(VAR_0), VAR_4);

 return 0;
}
