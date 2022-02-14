
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data_len; int delay; } ;
struct TYPE_5__ {scalar_t__ index_entry; int hash_entry; TYPE_1__ data; int key_len; int key; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int,int ,int) ;

int FUNC_5 (void) {
  if (VAR_1->data.data_len == -1) {
    return -1;
  }
  FUNC_3 (VAR_1->key, VAR_1->key_len);
  int VAR_3 = VAR_1->data.delay;
  if (VAR_1->index_entry != 0) {
    FUNC_4 (VAR_2, 0, -1, 0, -1);
  } else {
    FUNC_1 (VAR_1->hash_entry);
  }
  FUNC_0 (VAR_1);
  if (VAR_3 < FUNC_2() && VAR_3 != VAR_0) {
    return -1;
  }
  return 1;
}
