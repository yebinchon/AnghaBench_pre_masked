
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nodelay; int interval; int fastresend; int nocwnd; int rx_minrto; } ;
typedef TYPE_1__ ikcpcb ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(ikcpcb *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_3 >= 0) {
  VAR_2->nodelay = VAR_3;
  if (VAR_3) {
   VAR_2->rx_minrto = VAR_1;
  }
  else {
   VAR_2->rx_minrto = VAR_0;
  }
 }
 if (VAR_4 >= 0) {
  if (VAR_4 > 5000) VAR_4 = 5000;
  else if (VAR_4 < 10) VAR_4 = 10;
  VAR_2->interval = VAR_4;
 }
 if (VAR_5 >= 0) {
  VAR_2->fastresend = VAR_5;
 }
 if (VAR_6 >= 0) {
  VAR_2->nocwnd = VAR_6;
 }
 return 0;
}
