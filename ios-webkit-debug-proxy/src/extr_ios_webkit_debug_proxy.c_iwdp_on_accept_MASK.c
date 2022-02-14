
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* iwdp_type_t ;
typedef TYPE_2__* iwdp_t ;
typedef int iwdp_status ;
typedef int iwdp_iws_t ;
typedef int iwdp_iport_t ;
struct TYPE_7__ {int (* on_error ) (TYPE_2__*,char*,int) ;} ;
struct TYPE_6__ {int type; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int,int *) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;

iwdp_status FUNC_2(iwdp_t VAR_1, int VAR_2, void *VAR_3,
    int VAR_4, void **VAR_5) {
  int VAR_6 = ((iwdp_type_t)VAR_3)->type;
  if (VAR_6 == VAR_0) {
    return FUNC_0(VAR_1, (iwdp_iport_t)VAR_3, VAR_4,
        (iwdp_iws_t*)VAR_5);
  } else {
    return VAR_1->on_error(VAR_1, "Unexpected accept type %d", VAR_6);
  }
}
