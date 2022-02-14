
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int pko_nxa; int undflw; } ;
struct TYPE_7__ {int ncb_nxa; } ;
union cvmx_gmxx_tx_int_en {scalar_t__ u64; TYPE_4__ s; TYPE_3__ cn38xx; } ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ en; } ;
struct TYPE_5__ {int mode; } ;
union cvmx_gmxx_inf_mode {TYPE_2__ s; TYPE_1__ cn52xx; int u64; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;

void FUNC_6(int VAR_4)
{
 union cvmx_gmxx_inf_mode VAR_5;
 union cvmx_gmxx_tx_int_en VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_5.u64 = FUNC_4(FUNC_0(VAR_4));

 if (FUNC_2(VAR_2) || FUNC_2(VAR_1)) {
  if (VAR_5.s.en) {
   switch (VAR_5.cn52xx.mode) {
   case 1:
    VAR_7 = 1;
    break;
   case 2:
   case 3:
    VAR_7 = 4;
    break;
   default:
    VAR_7 = 0;
    break;
   }
  } else
   VAR_7 = 0;
 } else {
  if (VAR_5.s.en) {
   if (FUNC_2(VAR_0)
       || FUNC_2(VAR_3)) {





    if (VAR_5.s.type)
     VAR_7 = 1;
    else
     VAR_7 = 4;
   } else {





    if (VAR_5.s.type)
     VAR_7 = 2;
    else
     VAR_7 = 3;
   }
  } else
   VAR_7 = 0;
 }

 VAR_6.u64 = 0;
 if (VAR_7) {
  if (FUNC_2(VAR_0)
      || FUNC_2(VAR_3))
   VAR_6.cn38xx.ncb_nxa = 1;
  VAR_6.s.pko_nxa = 1;
 }
 VAR_6.s.undflw = (1 << VAR_7) - 1;
 FUNC_5(FUNC_1(VAR_4), VAR_6.u64);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_3(VAR_8, VAR_4);
}
