
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct dl_struct {int dummy; } ;
struct dl_private {int dummy; } ;
typedef scalar_t__ ht_t ;
typedef TYPE_1__* dl_t ;
typedef TYPE_1__* dl_private_t ;
typedef TYPE_1__* cb_t ;
struct TYPE_8__ {scalar_t__ device_num_to_device_id; struct TYPE_8__* in; struct TYPE_8__* private_state; int on_recv; int start; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

dl_t FUNC_5() {
  dl_t VAR_3 = (dl_t)FUNC_3(sizeof(struct dl_struct));
  dl_private_t VAR_4 = (dl_private_t)FUNC_3(sizeof(struct dl_private));
  cb_t VAR_5 = FUNC_0();
  ht_t VAR_6 = FUNC_2(VAR_0);
  if (!VAR_3 || !VAR_4 || !VAR_5 || !VAR_6) {
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
    FUNC_1(VAR_5);
    return ((void*)0);
  }
  FUNC_4(VAR_3, 0, sizeof(struct dl_struct));
  FUNC_4(VAR_4, 0, sizeof(struct dl_private));
  VAR_3->start = VAR_2;
  VAR_3->on_recv = VAR_1;
  VAR_3->private_state = VAR_4;
  VAR_4->in = VAR_5;
  VAR_4->device_num_to_device_id = VAR_6;
  return VAR_3;
}
