
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
struct TYPE_6__ {int (* add_fd ) (TYPE_1__*,int,void*,void*,int) ;} ;


 int FUNC_0 (TYPE_1__*,int,void*,void*,int) ;

iwdp_status FUNC_1(iwdp_t VAR_0, int VAR_1, void *VAR_2, void *VAR_3,
    bool VAR_4) {
  sm_t VAR_5 = ((iwdpm_t)VAR_0->state)->sm;
  return VAR_5->add_fd(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
}
