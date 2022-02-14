
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int trap_nr; int error_code; int cp0_baduaddr; int cp0_badvaddr; int cp0_status; int reg31; int reg30; int reg29; int reg23; int reg22; int reg21; int reg20; int reg19; int reg18; int reg17; int reg16; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_1__ VAR_17 ;

void FUNC_3(void)
{
 FUNC_1("MIPS specific thread_struct offsets.");
 FUNC_2(VAR_3, VAR_16, VAR_17.reg16);
 FUNC_2(VAR_4, VAR_16, VAR_17.reg17);
 FUNC_2(VAR_5, VAR_16, VAR_17.reg18);
 FUNC_2(VAR_6, VAR_16, VAR_17.reg19);
 FUNC_2(VAR_7, VAR_16, VAR_17.reg20);
 FUNC_2(VAR_8, VAR_16, VAR_17.reg21);
 FUNC_2(VAR_9, VAR_16, VAR_17.reg22);
 FUNC_2(VAR_10, VAR_16, VAR_17.reg23);
 FUNC_2(VAR_11, VAR_16, VAR_17.reg29);
 FUNC_2(VAR_12, VAR_16, VAR_17.reg30);
 FUNC_2(VAR_13, VAR_16, VAR_17.reg31);
 FUNC_2(VAR_14, VAR_16,
        VAR_17.cp0_status);

 FUNC_2(VAR_1, VAR_16, VAR_17.cp0_badvaddr);

 FUNC_2(VAR_0, VAR_16, VAR_17.cp0_baduaddr);

 FUNC_2(VAR_2, VAR_16, VAR_17.error_code);

 FUNC_2(VAR_15, VAR_16, VAR_17.trap_nr);
 FUNC_0();
}
