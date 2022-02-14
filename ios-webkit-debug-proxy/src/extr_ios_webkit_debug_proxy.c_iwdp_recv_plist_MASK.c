
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* wi_t ;
typedef int wi_status ;
typedef TYPE_2__* rpc_t ;
typedef int plist_t ;
typedef TYPE_3__* iwdp_iwi_t ;
struct TYPE_8__ {TYPE_2__* rpc; } ;
struct TYPE_7__ {int (* recv_plist ) (TYPE_2__*,int const) ;} ;
struct TYPE_6__ {scalar_t__ state; } ;


 int FUNC_0 (TYPE_2__*,int const) ;

wi_status FUNC_1(wi_t VAR_0, const plist_t VAR_1) {
  rpc_t VAR_2 = ((iwdp_iwi_t)VAR_0->state)->rpc;
  return VAR_2->recv_plist(VAR_2, VAR_1);
}
