
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {int len; int m; } ;
union cvmx_stxx_spi4_stat {scalar_t__ u64; TYPE_10__ s; } ;
struct TYPE_19__ {int alpha; int max_t; } ;
union cvmx_stxx_spi4_dat {scalar_t__ u64; TYPE_8__ s; } ;
struct TYPE_20__ {int oddpar; int prt3; int prt2; int prt1; int prt0; } ;
union cvmx_stxx_spi4_calx {scalar_t__ u64; TYPE_9__ s; } ;
struct TYPE_15__ {scalar_t__ mintrn; scalar_t__ igntpa; } ;
union cvmx_stxx_arb_ctl {scalar_t__ u64; TYPE_4__ s; } ;
struct TYPE_14__ {int len; int m; } ;
union cvmx_srxx_spi4_stat {scalar_t__ u64; TYPE_3__ s; } ;
struct TYPE_13__ {int oddpar; int prt3; int prt2; int prt1; int prt0; } ;
union cvmx_srxx_spi4_calx {scalar_t__ u64; TYPE_2__ s; } ;
struct TYPE_12__ {int prts; scalar_t__ inf_en; scalar_t__ st_en; } ;
union cvmx_srxx_com_ctl {scalar_t__ u64; TYPE_1__ s; } ;
struct TYPE_17__ {int thresh; } ;
union cvmx_gmxx_tx_spi_thresh {scalar_t__ u64; TYPE_6__ s; } ;
struct TYPE_16__ {int max1; int max2; scalar_t__ slice; } ;
union cvmx_gmxx_tx_spi_max {scalar_t__ u64; TYPE_5__ s; } ;
struct TYPE_18__ {scalar_t__ cont_pkt; scalar_t__ tpa_clr; } ;
union cvmx_gmxx_tx_spi_ctl {scalar_t__ u64; TYPE_7__ s; } ;
typedef int cvmx_spi_mode_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,scalar_t__) ;

int FUNC_12(int VAR_2, cvmx_spi_mode_t VAR_3,
          int VAR_4)
{
 int VAR_5;
 int VAR_6;
 if (VAR_3 & VAR_0) {
  union cvmx_srxx_com_ctl VAR_7;
  union cvmx_srxx_spi4_stat VAR_8;


  VAR_7.u64 = 0;
  VAR_7.s.prts = VAR_4 - 1;
  VAR_7.s.st_en = 0;
  VAR_7.s.inf_en = 0;
  FUNC_11(FUNC_3(VAR_2), VAR_7.u64);


  VAR_5 = 0;
  VAR_6 = 0;
  while (VAR_5 < VAR_4) {
   union cvmx_srxx_spi4_calx VAR_9;
   VAR_9.u64 = 0;
   VAR_9.s.prt0 = VAR_5++;
   VAR_9.s.prt1 = VAR_5++;
   VAR_9.s.prt2 = VAR_5++;
   VAR_9.s.prt3 = VAR_5++;
   VAR_9.s.oddpar =
       ~(FUNC_10(VAR_9.u64) & 1);
   FUNC_11(FUNC_4(VAR_6, VAR_2),
           VAR_9.u64);
   VAR_6++;
  }
  VAR_8.u64 = 0;
  VAR_8.s.len = VAR_4;
  VAR_8.s.m = 1;
  FUNC_11(FUNC_5(VAR_2),
          VAR_8.u64);
 }

 if (VAR_3 & VAR_1) {
  union cvmx_stxx_arb_ctl VAR_10;
  union cvmx_gmxx_tx_spi_max VAR_11;
  union cvmx_gmxx_tx_spi_thresh VAR_12;
  union cvmx_gmxx_tx_spi_ctl VAR_13;
  union cvmx_stxx_spi4_stat VAR_14;
  union cvmx_stxx_spi4_dat VAR_15;


  VAR_10.u64 = 0;
  VAR_10.s.igntpa = 0;
  VAR_10.s.mintrn = 0;
  FUNC_11(FUNC_6(VAR_2), VAR_10.u64);

  VAR_11.u64 = 0;
  VAR_11.s.max1 = 8;
  VAR_11.s.max2 = 4;
  VAR_11.s.slice = 0;
  FUNC_11(FUNC_1(VAR_2),
          VAR_11.u64);

  VAR_12.u64 = 0;
  VAR_12.s.thresh = 4;
  FUNC_11(FUNC_2(VAR_2),
          VAR_12.u64);

  VAR_13.u64 = 0;
  VAR_13.s.tpa_clr = 0;
  VAR_13.s.cont_pkt = 0;
  FUNC_11(FUNC_0(VAR_2),
          VAR_13.u64);


  VAR_15.u64 = 0;

  VAR_15.s.alpha = 32;
  VAR_15.s.max_t = 0xFFFF;
  FUNC_11(FUNC_8(VAR_2),
          VAR_15.u64);


  VAR_5 = 0;
  VAR_6 = 0;
  while (VAR_5 < VAR_4) {
   union cvmx_stxx_spi4_calx VAR_16;
   VAR_16.u64 = 0;
   VAR_16.s.prt0 = VAR_5++;
   VAR_16.s.prt1 = VAR_5++;
   VAR_16.s.prt2 = VAR_5++;
   VAR_16.s.prt3 = VAR_5++;
   VAR_16.s.oddpar =
       ~(FUNC_10(VAR_16.u64) & 1);
   FUNC_11(FUNC_7(VAR_6, VAR_2),
           VAR_16.u64);
   VAR_6++;
  }
  VAR_14.u64 = 0;
  VAR_14.s.len = VAR_4;
  VAR_14.s.m = 1;
  FUNC_11(FUNC_9(VAR_2),
          VAR_14.u64);
 }

 return 0;
}
