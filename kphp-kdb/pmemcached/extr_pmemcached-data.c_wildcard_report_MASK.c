
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data_len; } ;
struct TYPE_4__ {TYPE_1__ data; int key_len; int key; } ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__) ;

int FUNC_2 (void) {
  FUNC_0 (VAR_0->data.data_len != -2);
  if (VAR_0->data.data_len >= 0) {
    if (FUNC_1 (VAR_0->key, VAR_0->key_len, VAR_0->data) == 0) { return -1; }
  }
  return 0;
}
