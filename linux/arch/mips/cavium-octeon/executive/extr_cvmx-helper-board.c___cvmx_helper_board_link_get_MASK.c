
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status; int duplex; int speed; } ;
union cvmx_gmxx_rxx_rx_inbnd {TYPE_1__ s; int u64; } ;
struct TYPE_6__ {int link_up; int full_duplex; int speed; } ;
struct TYPE_7__ {scalar_t__ u64; TYPE_2__ s; } ;
typedef TYPE_3__ cvmx_helper_link_info_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;

cvmx_helper_link_info_t FUNC_7(int VAR_3)
{
 cvmx_helper_link_info_t VAR_4;

 FUNC_2(!FUNC_6(),
      "Using deprecated link status - please update your DT");


 VAR_4.u64 = 0;

 if (FUNC_6()) {

  VAR_4.s.link_up = 1;
  VAR_4.s.full_duplex = 1;
  VAR_4.s.speed = 1000;
  return VAR_4;
 }

 if (FUNC_1(VAR_0)
     || FUNC_1(VAR_2)
     || FUNC_1(VAR_1)) {







  union cvmx_gmxx_rxx_rx_inbnd VAR_5;
  int VAR_6 = FUNC_4(VAR_3);
  int VAR_7 = FUNC_3(VAR_3);
  VAR_5.u64 =
      FUNC_5(FUNC_0(VAR_7, VAR_6));

  VAR_4.s.link_up = VAR_5.s.status;
  VAR_4.s.full_duplex = VAR_5.s.duplex;
  switch (VAR_5.s.speed) {
  case 0:
   VAR_4.s.speed = 10;
   break;
  case 1:
   VAR_4.s.speed = 100;
   break;
  case 2:
   VAR_4.s.speed = 1000;
   break;
  case 3:
   VAR_4.u64 = 0;
   break;
  }
 } else {






  VAR_4.u64 = 0;
 }


 if (!VAR_4.s.link_up)
  VAR_4.u64 = 0;

 return VAR_4;
}
