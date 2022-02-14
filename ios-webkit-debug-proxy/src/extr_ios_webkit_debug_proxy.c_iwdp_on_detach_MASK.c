
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* iwdp_t ;
typedef TYPE_2__* iwdp_private_t ;
typedef TYPE_3__* iwdp_iport_t ;
typedef TYPE_4__* iwdp_idl_t ;
typedef TYPE_5__* dl_t ;
typedef int dl_status ;
struct TYPE_12__ {int state; } ;
struct TYPE_11__ {TYPE_1__* self; } ;
struct TYPE_10__ {scalar_t__ s_fd; } ;
struct TYPE_9__ {int device_id_to_iport; } ;
struct TYPE_8__ {int (* remove_fd ) (TYPE_1__*,scalar_t__) ;TYPE_2__* private_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

dl_status FUNC_2(dl_t VAR_1, const char *VAR_2, int VAR_3) {
  iwdp_idl_t VAR_4 = (iwdp_idl_t)VAR_1->state;
  iwdp_t VAR_5 = VAR_4->self;
  iwdp_private_t VAR_6 = VAR_5->private_state;
  iwdp_iport_t VAR_7 = (iwdp_iport_t)FUNC_0(VAR_6->device_id_to_iport,
      VAR_2);
  if (VAR_7 && VAR_7->s_fd > 0) {
    VAR_5->remove_fd(VAR_5, VAR_7->s_fd);
  }
  return VAR_0;
}
