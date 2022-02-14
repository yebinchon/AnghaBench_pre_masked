
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* sm_t ;
typedef TYPE_2__* iwdpm_t ;
typedef TYPE_3__* iwdp_t ;
typedef int iwdp_status ;
struct TYPE_8__ {scalar_t__ state; } ;
struct TYPE_7__ {TYPE_1__* sm; } ;
struct TYPE_6__ {int (* send ) (TYPE_1__*,int,char const*,size_t,int *) ;} ;


 int FUNC_0 (TYPE_1__*,int,char const*,size_t,int *) ;

iwdp_status FUNC_1(iwdp_t VAR_0, int VAR_1, const char *VAR_2, size_t VAR_3) {
  sm_t VAR_4 = ((iwdpm_t)VAR_0->state)->sm;
  return VAR_4->send(VAR_4, VAR_1, VAR_2, VAR_3, ((void*)0));
}
