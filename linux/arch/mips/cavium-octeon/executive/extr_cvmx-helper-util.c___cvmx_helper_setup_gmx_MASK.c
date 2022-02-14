
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int mode0; int mode1; } ;
union cvmx_pko_reg_gmx_port_mode {void* u64; TYPE_3__ s; } ;
struct TYPE_8__ {int cnt; } ;
union cvmx_gmxx_txx_thresh {void* u64; TYPE_4__ s; } ;
struct TYPE_5__ {int prts; } ;
union cvmx_gmxx_tx_prts {void* u64; TYPE_1__ s; } ;
struct TYPE_6__ {int prts; } ;
union cvmx_gmxx_rx_prts {void* u64; TYPE_2__ s; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ,void*) ;

int FUNC_8(int VAR_8, int VAR_9)
{
 union cvmx_gmxx_tx_prts VAR_10;
 union cvmx_gmxx_rx_prts VAR_11;
 union cvmx_pko_reg_gmx_port_mode VAR_12;
 union cvmx_gmxx_txx_thresh VAR_13;
 int VAR_14;


 VAR_10.u64 = FUNC_6(FUNC_2(VAR_8));
 VAR_10.s.prts = VAR_9;
 FUNC_7(FUNC_2(VAR_8), VAR_10.u64);



 if (FUNC_5(VAR_8) ==
     VAR_1
     || FUNC_5(VAR_8) ==
     VAR_2
     || FUNC_5(VAR_8) ==
     VAR_0
     || FUNC_5(VAR_8) ==
     VAR_3) {
  if (VAR_9 > 4) {
   FUNC_4("__cvmx_helper_setup_gmx: Illegal "
         "num_ports\n");
   return -1;
  }

  VAR_11.u64 = FUNC_6(FUNC_0(VAR_8));
  VAR_11.s.prts = VAR_9;
  FUNC_7(FUNC_0(VAR_8), VAR_11.u64);
 }


 if (!FUNC_3(VAR_5) && !FUNC_3(VAR_6)
     && !FUNC_3(VAR_7)) {

  VAR_12.u64 = FUNC_6(VAR_4);
  if (VAR_8 == 0) {
   if (VAR_9 == 1)
    VAR_12.s.mode0 = 4;
   else if (VAR_9 == 2)
    VAR_12.s.mode0 = 3;
   else if (VAR_9 <= 4)
    VAR_12.s.mode0 = 2;
   else if (VAR_9 <= 8)
    VAR_12.s.mode0 = 1;
   else
    VAR_12.s.mode0 = 0;
  } else {
   if (VAR_9 == 1)
    VAR_12.s.mode1 = 4;
   else if (VAR_9 == 2)
    VAR_12.s.mode1 = 3;
   else if (VAR_9 <= 4)
    VAR_12.s.mode1 = 2;
   else if (VAR_9 <= 8)
    VAR_12.s.mode1 = 1;
   else
    VAR_12.s.mode1 = 0;
  }
  FUNC_7(VAR_4, VAR_12.u64);
 }
 VAR_13.u64 = FUNC_6(FUNC_1(0, VAR_8));
 if (FUNC_3(VAR_5) || FUNC_3(VAR_6)
     || FUNC_3(VAR_7)) {

  VAR_13.s.cnt = 0x40;
 } else {

  if (VAR_9 <= 1)
   VAR_13.s.cnt = 0x100 / 1;
  else if (VAR_9 == 2)
   VAR_13.s.cnt = 0x100 / 2;
  else
   VAR_13.s.cnt = 0x100 / 4;
 }




 if (VAR_9 > 4)
  VAR_9 = 4;
 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
  FUNC_7(FUNC_1(VAR_14, VAR_8),
          VAR_13.u64);

 return 0;
}
