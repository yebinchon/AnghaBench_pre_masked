
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int clr_boot; } ;
union cvmx_spxx_trn4_ctl {void* u64; TYPE_2__ s; } ;
struct TYPE_7__ {scalar_t__ srxtrn; } ;
union cvmx_spxx_clk_stat {TYPE_3__ s; void* u64; } ;
struct TYPE_5__ {int clkdly; int statrcv; int sndtrn; int drptrn; int rcvtrn; int srxdlck; scalar_t__ statdrv; scalar_t__ runbist; scalar_t__ seetrn; } ;
union cvmx_spxx_clk_ctl {void* u64; TYPE_1__ s; } ;
typedef unsigned long long uint64_t ;
typedef int cvmx_spi_mode_t ;
struct TYPE_8__ {int cpu_clock_hz; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 unsigned long long FUNC_5 () ;
 void* FUNC_6 (int ) ;
 TYPE_4__* FUNC_7 () ;
 int FUNC_8 (int ,void*) ;

int FUNC_9(int VAR_0, cvmx_spi_mode_t VAR_1, int VAR_2)
{
 union cvmx_spxx_trn4_ctl VAR_3;
 union cvmx_spxx_clk_stat VAR_4;
 uint64_t VAR_5 = FUNC_7()->cpu_clock_hz / 1000;
 uint64_t VAR_6 = FUNC_5() + 1000ull * VAR_5 * VAR_2;
 int VAR_7;


 union cvmx_spxx_clk_ctl VAR_8;
 VAR_8.u64 = 0;
 VAR_8.s.seetrn = 0;
 VAR_8.s.clkdly = 0x10;
 VAR_8.s.runbist = 0;
 VAR_8.s.statdrv = 0;

 VAR_8.s.statrcv = 1;
 VAR_8.s.sndtrn = 1;
 VAR_8.s.drptrn = 1;
 VAR_8.s.rcvtrn = 1;
 VAR_8.s.srxdlck = 1;
 FUNC_8(FUNC_0(VAR_0), VAR_8.u64);
 FUNC_3(1000 * VAR_5);


 VAR_3.u64 = FUNC_6(FUNC_2(VAR_0));
 VAR_3.s.clr_boot = 1;
 FUNC_8(FUNC_2(VAR_0), VAR_3.u64);


 FUNC_4("SPI%d: Waiting for training\n", VAR_0);
 FUNC_3(1000 * VAR_5);

 VAR_6 = FUNC_5() + 1000ull * VAR_5 * 600;




 VAR_7 = 500;
 do {
  VAR_4.u64 = FUNC_6(FUNC_1(VAR_0));
  if (VAR_4.s.srxtrn && VAR_7) {
   VAR_7--;
   FUNC_8(FUNC_1(VAR_0), VAR_4.u64);
   VAR_4.s.srxtrn = 0;
  }
  if (FUNC_5() > VAR_6) {
   FUNC_4("SPI%d: Timeout\n", VAR_0);
   return -1;
  }
 } while (VAR_4.s.srxtrn == 0);

 return 0;
}
