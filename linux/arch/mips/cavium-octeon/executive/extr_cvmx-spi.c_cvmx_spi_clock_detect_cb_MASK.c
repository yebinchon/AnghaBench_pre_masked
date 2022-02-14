
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ s4clk0; scalar_t__ s4clk1; scalar_t__ d4clk0; scalar_t__ d4clk1; } ;
union cvmx_spxx_clk_stat {TYPE_1__ s; void* u64; } ;
typedef unsigned long long uint64_t ;
typedef int cvmx_spi_mode_t ;
struct TYPE_4__ {int cpu_clock_hz; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 unsigned long long FUNC_2 () ;
 void* FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (int ,void*) ;

int FUNC_6(int VAR_0, cvmx_spi_mode_t VAR_1, int VAR_2)
{
 int VAR_3;
 union cvmx_spxx_clk_stat VAR_4;
 uint64_t VAR_5;
 uint64_t VAR_6 = FUNC_4()->cpu_clock_hz / 1000;





 FUNC_1("SPI%d: Waiting to see TsClk...\n", VAR_0);
 VAR_5 = FUNC_2() + 1000ull * VAR_6 * VAR_2;




 VAR_3 = 100;
 do {
  VAR_4.u64 = FUNC_3(FUNC_0(VAR_0));
  if (VAR_4.s.s4clk0 && VAR_4.s.s4clk1 && VAR_3) {




   VAR_3--;
   FUNC_5(FUNC_0(VAR_0), VAR_4.u64);
   VAR_4.s.s4clk0 = 0;
   VAR_4.s.s4clk1 = 0;
  }
  if (FUNC_2() > VAR_5) {
   FUNC_1("SPI%d: Timeout\n", VAR_0);
   return -1;
  }
 } while (VAR_4.s.s4clk0 == 0 || VAR_4.s.s4clk1 == 0);

 FUNC_1("SPI%d: Waiting to see RsClk...\n", VAR_0);
 VAR_5 = FUNC_2() + 1000ull * VAR_6 * VAR_2;




 VAR_3 = 100;
 do {
  VAR_4.u64 = FUNC_3(FUNC_0(VAR_0));
  if (VAR_4.s.d4clk0 && VAR_4.s.d4clk1 && VAR_3) {




   VAR_3--;
   FUNC_5(FUNC_0(VAR_0), VAR_4.u64);
   VAR_4.s.d4clk0 = 0;
   VAR_4.s.d4clk1 = 0;
  }
  if (FUNC_2() > VAR_5) {
   FUNC_1("SPI%d: Timeout\n", VAR_0);
   return -1;
  }
 } while (VAR_4.s.d4clk0 == 0 || VAR_4.s.d4clk1 == 0);

 return 0;
}
