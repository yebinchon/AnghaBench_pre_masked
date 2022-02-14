
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int st_en; } ;
union cvmx_stxx_com_ctl {void* u64; TYPE_2__ s; } ;
struct TYPE_5__ {int inf_en; int st_en; } ;
union cvmx_srxx_com_ctl {void* u64; TYPE_1__ s; } ;
struct TYPE_7__ {scalar_t__ stxcal; } ;
union cvmx_spxx_clk_stat {void* u64; TYPE_3__ s; } ;
typedef unsigned long long uint64_t ;
typedef int cvmx_spi_mode_t ;
struct TYPE_8__ {int cpu_clock_hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,...) ;
 unsigned long long FUNC_4 () ;
 void* FUNC_5 (int ) ;
 TYPE_4__* FUNC_6 () ;
 int FUNC_7 (int ,void*) ;

int FUNC_8(int VAR_2, cvmx_spi_mode_t VAR_3, int VAR_4)
{
 uint64_t VAR_5 = FUNC_6()->cpu_clock_hz / 1000;
 if (VAR_3 & VAR_0) {

  union cvmx_srxx_com_ctl VAR_6;
  FUNC_3
      ("SPI%d: Rx is synchronized, start sending calendar data\n",
       VAR_2);
  VAR_6.u64 = FUNC_5(FUNC_1(VAR_2));
  VAR_6.s.inf_en = 1;
  VAR_6.s.st_en = 1;
  FUNC_7(FUNC_1(VAR_2), VAR_6.u64);
 }

 if (VAR_3 & VAR_1) {



  union cvmx_spxx_clk_stat VAR_7;
  uint64_t VAR_8;
  union cvmx_stxx_com_ctl VAR_9;
  VAR_9.u64 = 0;
  VAR_9.s.st_en = 1;
  FUNC_7(FUNC_2(VAR_2), VAR_9.u64);


  FUNC_3("SPI%d: Waiting to sync on STX[%d] STAT\n",
        VAR_2, VAR_2);
  VAR_8 = FUNC_4() + 1000ull * VAR_5 * VAR_4;

  do {
   VAR_7.u64 = FUNC_5(FUNC_0(VAR_2));
   if (FUNC_4() > VAR_8) {
    FUNC_3("SPI%d: Timeout\n", VAR_2);
    return -1;
   }
  } while (VAR_7.s.stxcal == 0);
 }

 return 0;
}
