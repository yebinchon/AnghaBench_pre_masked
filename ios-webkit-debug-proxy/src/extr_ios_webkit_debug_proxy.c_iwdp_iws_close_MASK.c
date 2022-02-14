
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* iwdp_t ;
typedef int iwdp_status ;
typedef TYPE_2__* iwdp_iws_t ;
typedef TYPE_3__* iwdp_iport_t ;
typedef TYPE_4__* iwdp_ipage_t ;
typedef TYPE_5__* iwdp_ifs_t ;
typedef int ht_t ;
struct TYPE_15__ {scalar_t__ fs_fd; int * iws; } ;
struct TYPE_14__ {TYPE_2__* iws; scalar_t__ sender_id; } ;
struct TYPE_13__ {int ws_id_to_iws; } ;
struct TYPE_12__ {char* ws_id; TYPE_5__* ifs; TYPE_3__* iport; TYPE_4__* ipage; } ;
struct TYPE_11__ {int (* remove_fd ) (TYPE_1__*,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;

iwdp_status FUNC_5(iwdp_t VAR_1, iwdp_iws_t VAR_2) {

  iwdp_ipage_t VAR_3 = VAR_2->ipage;
  if (VAR_3) {
    if (VAR_3->sender_id && VAR_3->iws == VAR_2) {
      FUNC_3(VAR_3);
    }
  }
  iwdp_iport_t VAR_4 = VAR_2->iport;
  if (VAR_4) {
    ht_t VAR_5 = VAR_4->ws_id_to_iws;
    char *VAR_6 = VAR_2->ws_id;
    iwdp_iws_t VAR_7 = (iwdp_iws_t)FUNC_0(VAR_5, VAR_6);
    if (VAR_6 && VAR_7 == VAR_2) {
      FUNC_1(VAR_5, VAR_6);
    }
  }
  iwdp_ifs_t VAR_8 = VAR_2->ifs;
  if (VAR_8) {
    VAR_8->iws = ((void*)0);
    if (VAR_8->fs_fd > 0) {
      VAR_1->remove_fd(VAR_1, VAR_8->fs_fd);
    }
  }
  FUNC_2(VAR_2);
  return VAR_0;
}
