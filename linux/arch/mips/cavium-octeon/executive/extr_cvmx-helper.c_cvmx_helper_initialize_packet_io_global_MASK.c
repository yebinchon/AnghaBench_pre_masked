
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rfb_arb_mode; scalar_t__ lrf_arb_mode; } ;
union cvmx_l2c_cfg {int u64; TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int,scalar_t__,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;

int FUNC_17(void)
{
 int VAR_2 = 0;
 int VAR_3;
 union cvmx_l2c_cfg VAR_4;
 const int VAR_5 = FUNC_8();





 if (FUNC_0(VAR_1))
  FUNC_1(1);






 VAR_4.u64 = FUNC_15(VAR_0);
 VAR_4.s.lrf_arb_mode = 0;
 VAR_4.s.rfb_arb_mode = 0;
 FUNC_16(VAR_0, VAR_4.u64);

 FUNC_14();
 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  VAR_2 |= FUNC_11(VAR_3);
  if (FUNC_13(VAR_3) > 0)
   FUNC_7("Interface %d has %d ports (%s)\n",
         VAR_3,
         FUNC_13(VAR_3),
         FUNC_10
         (FUNC_9
          (VAR_3)));
  VAR_2 |= FUNC_5(VAR_3);
  VAR_2 |= FUNC_6(VAR_3);
 }

 VAR_2 |= FUNC_3();
 VAR_2 |= FUNC_4();


 VAR_2 |= FUNC_2();




 return VAR_2;
}
