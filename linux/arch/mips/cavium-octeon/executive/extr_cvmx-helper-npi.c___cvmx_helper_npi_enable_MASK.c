
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ minerr_en; scalar_t__ maxerr_en; } ;
union cvmx_pip_prt_cfgx {int u64; TYPE_1__ s; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(int VAR_2)
{





 if (!FUNC_1(VAR_0) &&
     !FUNC_1(VAR_1)) {
  int VAR_3 = FUNC_3(VAR_2);
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
   union cvmx_pip_prt_cfgx VAR_5;
   int VAR_6 =
       FUNC_2(VAR_2, VAR_4);
   VAR_5.u64 =
       FUNC_4(FUNC_0(VAR_6));
   VAR_5.s.maxerr_en = 0;
   VAR_5.s.minerr_en = 0;
   FUNC_5(FUNC_0(VAR_6),
           VAR_5.u64);
  }
 }


 return 0;
}
