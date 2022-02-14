
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data_len; scalar_t__ delay; } ;
struct TYPE_4__ {int key_len; int key; TYPE_1__ data; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 () ;

int FUNC_2 (void) {
  if (VAR_0->data.data_len != -1 && VAR_0->data.delay >= 0 && VAR_0->data.delay < FUNC_1()) {
    return FUNC_0 (VAR_0->key, VAR_0->key_len);
  }
  return 0;
}
