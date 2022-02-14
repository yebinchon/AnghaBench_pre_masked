
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* iwdp_t ;
typedef int iwdp_status ;
typedef TYPE_2__* iwdp_iwi_t ;
typedef TYPE_3__* iwdp_iport_t ;
typedef scalar_t__ iwdp_ipage_t ;
typedef int ht_t ;
struct TYPE_11__ {scalar_t__ s_fd; int * iwi; } ;
struct TYPE_10__ {int page_num_to_ipage; TYPE_3__* iport; } ;
struct TYPE_9__ {int (* remove_fd ) (TYPE_1__*,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;

iwdp_status FUNC_7(iwdp_t VAR_1, iwdp_iwi_t VAR_2) {
  iwdp_iport_t VAR_3 = VAR_2->iport;
  if (VAR_3) {
    FUNC_5(VAR_3);

    if (VAR_3->iwi) {
      VAR_3->iwi = ((void*)0);
    }
  }

  ht_t VAR_4 = VAR_2->page_num_to_ipage;
  iwdp_ipage_t *VAR_5 = (iwdp_ipage_t *)FUNC_2(VAR_4);
  FUNC_1(VAR_4);
  iwdp_ipage_t *VAR_6;
  for (VAR_6 = VAR_5; *VAR_6; VAR_6++) {
    FUNC_3((iwdp_ipage_t)*VAR_6);
  }
  FUNC_0(VAR_5);
  FUNC_4(VAR_2);

  if (VAR_3 && VAR_3->s_fd > 0) {
    VAR_1->remove_fd(VAR_1, VAR_3->s_fd);
  }
  return VAR_0;
}
