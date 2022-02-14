
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* wi_t ;
typedef TYPE_2__* rpc_t ;
typedef int rpc_status ;
typedef int plist_t ;
typedef TYPE_3__* iwdp_iwi_t ;
struct TYPE_8__ {TYPE_1__* wi; } ;
struct TYPE_7__ {scalar_t__ state; } ;
struct TYPE_6__ {int (* send_plist ) (TYPE_1__*,int const) ;} ;


 int FUNC_0 (TYPE_1__*,int const) ;

rpc_status FUNC_1(rpc_t VAR_0, const plist_t VAR_1) {
  wi_t VAR_2 = ((iwdp_iwi_t)VAR_0->state)->wi;
  return VAR_2->send_plist(VAR_2, VAR_1);
}
