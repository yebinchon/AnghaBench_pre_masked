
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_len; scalar_t__ data; } ;
struct entry {int key_len; scalar_t__ key; TYPE_1__ data; scalar_t__ allocated_here; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;

void FUNC_1 (struct entry *VAR_1) {
  if (VAR_1->key) {
    FUNC_0 (VAR_1->key, VAR_1->key_len * sizeof (char));
    VAR_0 -= VAR_1->key_len * sizeof (char);
    if (VAR_1->allocated_here) {
      FUNC_0 (VAR_1->data.data, VAR_1->data.data_len + 1);
      VAR_1->allocated_here = 0;
      VAR_0 -= VAR_1->data.data_len + 1;
    }
  }
  VAR_1->key = 0;
}
