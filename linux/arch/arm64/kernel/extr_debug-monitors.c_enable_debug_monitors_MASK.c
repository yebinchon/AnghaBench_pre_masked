
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum dbg_active_el { ____Placeholder_dbg_active_el } dbg_active_el ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

void FUNC_5(enum dbg_active_el VAR_6)
{
 u32 VAR_7, VAR_8 = 0;

 FUNC_0(FUNC_3());

 if (FUNC_4(VAR_5) == 1)
  VAR_8 = VAR_2;

 if (VAR_6 == VAR_0 &&
     FUNC_4(VAR_4) == 1)
  VAR_8 |= VAR_1;

 if (VAR_8 && VAR_3) {
  VAR_7 = FUNC_1();
  VAR_7 |= VAR_8;
  FUNC_2(VAR_7);
 }
}
