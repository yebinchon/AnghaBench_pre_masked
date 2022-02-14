
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sync_bad_en; int an_bad_en; int rxlock_en; int rxbad_en; int txbad_en; int txfifo_en; int txfifu_en; int an_err_en; } ;
union cvmx_pcsx_intx_en_reg {scalar_t__ u64; TYPE_1__ s; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5(int VAR_2, int VAR_3)
{
 union cvmx_pcsx_intx_en_reg VAR_4;
 FUNC_4(FUNC_1(VAR_2, VAR_3),
         FUNC_3(FUNC_1(VAR_2, VAR_3)));
 VAR_4.u64 = 0;
 if (FUNC_2(VAR_1)) {


  VAR_4.s.sync_bad_en = 1;
  VAR_4.s.an_bad_en = 1;
  VAR_4.s.rxlock_en = 1;
  VAR_4.s.rxbad_en = 1;

  VAR_4.s.txbad_en = 1;
  VAR_4.s.txfifo_en = 1;
  VAR_4.s.txfifu_en = 1;
  VAR_4.s.an_err_en = 1;


 }
 if (FUNC_2(VAR_0)) {


  VAR_4.s.sync_bad_en = 1;
  VAR_4.s.an_bad_en = 1;
  VAR_4.s.rxlock_en = 1;
  VAR_4.s.rxbad_en = 1;

  VAR_4.s.txbad_en = 1;
  VAR_4.s.txfifo_en = 1;
  VAR_4.s.txfifu_en = 1;
  VAR_4.s.an_err_en = 1;


 }
 FUNC_4(FUNC_0(VAR_2, VAR_3), VAR_4.u64);
}
