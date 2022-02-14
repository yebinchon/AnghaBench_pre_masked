
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int tim_mult; int en; scalar_t__ ale; scalar_t__ orbit; scalar_t__ oe_ext; scalar_t__ we_ext; scalar_t__ sam; scalar_t__ rd_dly; scalar_t__ dmack; } ;
union cvmx_mio_boot_reg_cfgx {int u64; TYPE_1__ s; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_0, unsigned int VAR_1)
{
 union cvmx_mio_boot_reg_cfgx VAR_2;
 unsigned int VAR_3;

 switch (VAR_1) {
 case 8:
  VAR_3 = 3;
  break;
 case 4:
  VAR_3 = 0;
  break;
 case 2:
  VAR_3 = 2;
  break;
 default:
  VAR_3 = 1;
  break;
 }

 VAR_2.u64 = FUNC_1(FUNC_0(VAR_0));
 VAR_2.s.dmack = 0;
 VAR_2.s.tim_mult = VAR_3;
 VAR_2.s.rd_dly = 0;
 VAR_2.s.sam = 0;
 VAR_2.s.we_ext = 0;
 VAR_2.s.oe_ext = 0;
 VAR_2.s.en = 1;
 VAR_2.s.orbit = 0;
 VAR_2.s.ale = 0;
 FUNC_2(FUNC_0(VAR_0), VAR_2.u64);
}
