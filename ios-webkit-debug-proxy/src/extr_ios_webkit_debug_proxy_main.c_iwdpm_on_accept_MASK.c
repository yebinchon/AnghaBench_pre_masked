
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* sm_t ;
typedef int sm_status ;
typedef TYPE_2__* iwdpm_t ;
typedef TYPE_3__* iwdp_t ;
struct TYPE_8__ {int (* on_accept ) (TYPE_3__*,int,void*,int,void**) ;} ;
struct TYPE_7__ {TYPE_3__* iwdp; } ;
struct TYPE_6__ {scalar_t__ state; } ;


 int FUNC_0 (TYPE_3__*,int,void*,int,void**) ;

sm_status FUNC_1(sm_t VAR_0, int VAR_1, void *VAR_2,
    int VAR_3, void **VAR_4) {
  iwdp_t VAR_5 = ((iwdpm_t)VAR_0->state)->iwdp;
  return VAR_5->on_accept(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
}
