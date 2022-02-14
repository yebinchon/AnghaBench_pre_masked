
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct dl_struct {int dummy; } ;
struct dl_private {int dummy; } ;
typedef TYPE_1__* dl_t ;
typedef TYPE_1__* dl_private_t ;
struct TYPE_6__ {int device_num_to_device_id; int in; struct TYPE_6__* private_state; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void FUNC_4(dl_t VAR_0) {
  if (VAR_0) {
    dl_private_t VAR_1 = VAR_0->private_state;
    if (VAR_1) {
      FUNC_0(VAR_1->in);
      FUNC_2(VAR_1->device_num_to_device_id);
      FUNC_3(VAR_1, 0, sizeof(struct dl_private));
      FUNC_1(VAR_1);
    }
    FUNC_3(VAR_0, 0, sizeof(struct dl_struct));
    FUNC_1(VAR_0);
  }
}
