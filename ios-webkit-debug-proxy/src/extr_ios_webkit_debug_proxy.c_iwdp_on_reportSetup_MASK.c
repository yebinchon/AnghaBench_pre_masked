
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* rpc_t ;
typedef int rpc_status ;
typedef TYPE_2__* iwdp_iwi_t ;
struct TYPE_5__ {int connected; int iport; } ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

rpc_status FUNC_1(rpc_t VAR_1) {
  iwdp_iwi_t VAR_2 = (iwdp_iwi_t)VAR_1->state;
  VAR_2->connected = 1;
  FUNC_0(VAR_2->iport);
  return VAR_0;
}
