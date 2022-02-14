
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_len; } ;
struct entry {int key_len; int index_entry; scalar_t__ hash_entry; int key; TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (int) ;

void FUNC_2 (struct entry* VAR_1, const char *VAR_2, int VAR_3) {
  VAR_1->key_len = VAR_3;
  VAR_1->key = FUNC_1 (VAR_3 * sizeof(char));
  VAR_1->index_entry = -1;
  VAR_1->data.data_len = -2;
  if (VAR_3 >= 0) {
    FUNC_0 (VAR_1->key, VAR_2, VAR_3 * sizeof(char));
  }
  VAR_1->hash_entry = 0;
  VAR_0 += VAR_3 * sizeof (char);
}
