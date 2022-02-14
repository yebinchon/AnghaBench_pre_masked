
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nrcv_que; scalar_t__ rcv_wnd; } ;
typedef TYPE_1__ ikcpcb ;



__attribute__((used)) static int FUNC_0(const ikcpcb *VAR_0)
{
 if (VAR_0->nrcv_que < VAR_0->rcv_wnd) {
  return VAR_0->rcv_wnd - VAR_0->nrcv_que;
 }
 return 0;
}
