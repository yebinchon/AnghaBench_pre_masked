
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ssize_t ;
typedef TYPE_1__* sm_t ;
typedef int sm_status ;
typedef TYPE_2__* iwdpm_t ;
typedef TYPE_3__* iwdp_t ;
struct TYPE_8__ {int (* on_recv ) (TYPE_3__*,int,void*,char const*,int ) ;} ;
struct TYPE_7__ {TYPE_3__* iwdp; } ;
struct TYPE_6__ {scalar_t__ state; } ;


 int FUNC_0 (TYPE_3__*,int,void*,char const*,int ) ;

sm_status FUNC_1(sm_t VAR_0, int VAR_1, void *VAR_2,
    const char *VAR_3, ssize_t VAR_4) {
  iwdp_t VAR_5 = ((iwdpm_t)VAR_0->state)->iwdp;
  return VAR_5->on_recv(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
}
