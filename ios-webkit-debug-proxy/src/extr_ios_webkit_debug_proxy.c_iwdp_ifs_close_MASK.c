
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* iwdp_t ;
typedef int iwdp_status ;
typedef TYPE_2__* iwdp_iws_t ;
typedef TYPE_3__* iwdp_ifs_t ;
struct TYPE_10__ {TYPE_2__* iws; } ;
struct TYPE_9__ {scalar_t__ ws_fd; TYPE_3__* ifs; } ;
struct TYPE_8__ {int (* remove_fd ) (TYPE_1__*,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

iwdp_status FUNC_2(iwdp_t VAR_1, iwdp_ifs_t VAR_2) {
  iwdp_iws_t VAR_3 = VAR_2->iws;

  if (VAR_3 && VAR_3->ifs == VAR_2) {
    VAR_3->ifs = ((void*)0);
  }
  FUNC_0(VAR_2);

  if (VAR_3 && VAR_3->ws_fd > 0) {
    VAR_1->remove_fd(VAR_1, VAR_3->ws_fd);
  }
  return VAR_0;
}
