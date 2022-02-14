
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int pool; } ;
union cvmx_pko_reg_cmd_buf {int u64; TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;

void FUNC_7(void)
{
 union cvmx_pko_reg_cmd_buf VAR_8;






 VAR_8.u64 = 0;
 VAR_8.s.pool = VAR_0;
 VAR_8.s.size = VAR_1 / 8 - 1;

 FUNC_6(VAR_2, VAR_8.u64);




 FUNC_1();





 if (FUNC_0(VAR_4) || FUNC_0(VAR_7)
     || FUNC_0(VAR_6)
     || FUNC_0(VAR_5)) {
  int VAR_9 = FUNC_3();
  int VAR_10 =
      FUNC_2(VAR_9 - 1);
  int VAR_11 =
      FUNC_4(VAR_10) +
      FUNC_5(VAR_10);
  if (FUNC_0(VAR_4)) {
   if (VAR_11 <= 32)
    FUNC_6(VAR_3, 2);
   else if (VAR_11 <= 64)
    FUNC_6(VAR_3, 1);
  } else {
   if (VAR_11 <= 64)
    FUNC_6(VAR_3, 2);
   else if (VAR_11 <= 128)
    FUNC_6(VAR_3, 1);
  }
 }
}
