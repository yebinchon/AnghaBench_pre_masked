
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* rpc_t ;
typedef int * rpc_app_t ;
typedef TYPE_2__* iwdp_iwi_t ;
struct TYPE_5__ {int * app; } ;
struct TYPE_4__ {int state; } ;


 int FUNC_0 (int * const,int **) ;

void FUNC_1(rpc_t VAR_0, const rpc_app_t VAR_1) {
    iwdp_iwi_t VAR_2 = (iwdp_iwi_t)VAR_0->state;
    rpc_app_t VAR_3 = ((void*)0);
    FUNC_0(VAR_1, &VAR_3);
    VAR_2->app = VAR_3;
}
