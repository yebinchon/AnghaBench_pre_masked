
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* iwdp_t ;
typedef int iwdp_status ;
typedef TYPE_2__* iwdp_private_t ;
typedef TYPE_3__* iwdp_iws_t ;
typedef TYPE_4__* iwdp_iwi_t ;
typedef TYPE_5__* iwdp_iport_t ;
typedef int ht_t ;
struct TYPE_18__ {char* device_id; int s_fd; scalar_t__ is_sticky; TYPE_4__* iwi; int ws_id_to_iws; } ;
struct TYPE_17__ {scalar_t__ wi_fd; int * iport; } ;
struct TYPE_16__ {scalar_t__ ws_fd; } ;
struct TYPE_15__ {int device_id_to_iport; } ;
struct TYPE_14__ {int (* remove_fd ) (TYPE_1__*,scalar_t__) ;int (* on_error ) (TYPE_1__*,char*) ;TYPE_2__* private_state; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,scalar_t__) ;

iwdp_status FUNC_10(iwdp_t VAR_1, iwdp_iport_t VAR_2) {
  iwdp_private_t VAR_3 = VAR_1->private_state;

  const char *VAR_4 = VAR_2->device_id;
  ht_t VAR_5 = VAR_3->device_id_to_iport;
  iwdp_iport_t VAR_6 = (iwdp_iport_t)FUNC_2(VAR_5, VAR_4);
  if (VAR_6 != VAR_2) {
    return VAR_1->on_error(VAR_1, "Internal iport mismatch?");
  }

  iwdp_iws_t *VAR_7 = (iwdp_iws_t *)FUNC_4(VAR_2->ws_id_to_iws);
  iwdp_iws_t *VAR_8;
  for (VAR_8 = VAR_7; *VAR_8; VAR_8++) {
    if ((*VAR_8)->ws_fd > 0) {
      VAR_1->remove_fd(VAR_1, (*VAR_8)->ws_fd);
    }
  }
  FUNC_0(VAR_7);
  FUNC_1(VAR_2->ws_id_to_iws);

  iwdp_iwi_t VAR_9 = VAR_2->iwi;
  if (VAR_9) {
    FUNC_6(VAR_2);
    VAR_9->iport = ((void*)0);
    VAR_2->iwi = ((void*)0);
    if (VAR_9->wi_fd > 0) {
      VAR_1->remove_fd(VAR_1, VAR_9->wi_fd);
    }
  }
  if (VAR_2->is_sticky) {

    VAR_2->s_fd = -1;
  } else {
    FUNC_3(VAR_5, VAR_4);
    FUNC_5(VAR_2);
  }
  return VAR_0;
}
