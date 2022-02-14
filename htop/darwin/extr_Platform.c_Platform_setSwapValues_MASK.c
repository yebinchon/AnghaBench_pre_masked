
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int swapused ;
struct xsw_usage {int xsu_total; int xsu_used; } ;
struct TYPE_3__ {int total; int* values; } ;
typedef TYPE_1__ Meter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int,struct xsw_usage*,size_t*,int *,int ) ;

void FUNC_1(Meter* VAR_2) {
  int VAR_3[2] = {VAR_0, VAR_1};
  struct xsw_usage VAR_4;
  size_t VAR_5 = sizeof(VAR_4);
  FUNC_0(VAR_3, 2, &VAR_4, &VAR_5, ((void*)0), 0);

  VAR_2->total = VAR_4.xsu_total / 1024;
  VAR_2->values[0] = VAR_4.xsu_used / 1024;
}
