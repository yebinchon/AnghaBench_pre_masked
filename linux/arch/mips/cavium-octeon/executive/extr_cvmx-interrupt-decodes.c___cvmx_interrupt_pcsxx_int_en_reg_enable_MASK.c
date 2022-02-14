
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int algnlos_en; int synlos_en; int bitlckls_en; int rxsynbad_en; int rxbad_en; int txflt_en; } ;
union cvmx_pcsxx_int_en_reg {scalar_t__ u64; TYPE_1__ s; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5(int VAR_2)
{
 union cvmx_pcsxx_int_en_reg VAR_3;
 FUNC_4(FUNC_1(VAR_2),
         FUNC_3(FUNC_1(VAR_2)));
 VAR_3.u64 = 0;
 if (FUNC_2(VAR_1)) {

  VAR_3.s.algnlos_en = 1;
  VAR_3.s.synlos_en = 1;
  VAR_3.s.bitlckls_en = 1;
  VAR_3.s.rxsynbad_en = 1;
  VAR_3.s.rxbad_en = 1;
  VAR_3.s.txflt_en = 1;
 }
 if (FUNC_2(VAR_0)) {

  VAR_3.s.algnlos_en = 1;
  VAR_3.s.synlos_en = 1;
  VAR_3.s.bitlckls_en = 0;
  VAR_3.s.rxsynbad_en = 1;
  VAR_3.s.rxbad_en = 1;
  VAR_3.s.txflt_en = 1;
 }
 FUNC_4(FUNC_0(VAR_2), VAR_3.u64);
}
