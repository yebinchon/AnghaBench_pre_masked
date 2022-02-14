
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int snd_wnd; int rcv_wnd; } ;
typedef TYPE_1__ ikcpcb ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

int FUNC_1(ikcpcb *VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_1) {
  if (VAR_2 > 0) {
   VAR_1->snd_wnd = VAR_2;
  }
  if (VAR_3 > 0) {
   VAR_1->rcv_wnd = FUNC_0(VAR_3, VAR_0);
  }
 }
 return 0;
}
