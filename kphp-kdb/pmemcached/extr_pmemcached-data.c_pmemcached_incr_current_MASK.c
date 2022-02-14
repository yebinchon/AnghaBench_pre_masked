
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data_len; char* data; int delay; int flags; } ;
struct TYPE_6__ {TYPE_2__ data; TYPE_1__* hash_entry; int key_len; int key; } ;
struct TYPE_4__ {long long accum_value; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int,int ,int) ;
 int FUNC_3 (char*,char*,unsigned long long) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int VAR_3 ;

int FUNC_5 (long long VAR_4) {
  if (VAR_0->data.data_len == -1) {
    return -1;
  }
  FUNC_1 (VAR_0->key, VAR_0->key_len);

  if (VAR_0->data.data_len == -2) {
    if (VAR_0->hash_entry) {
      VAR_0->hash_entry->accum_value += VAR_4;
    } else {
      FUNC_2 (VAR_1, 0, -2, 0, -1);
      VAR_0->hash_entry->accum_value = VAR_4;
    }
    return 0;
  }

  unsigned long long VAR_5 = 0;
  int VAR_6, VAR_7 = 1;

  for (VAR_6 = 0; VAR_6 < VAR_0->data.data_len && VAR_7; VAR_6++) {
    if ('0' <= VAR_0->data.data[VAR_6] && VAR_0->data.data[VAR_6] <= '9') {
      VAR_5 = VAR_5 * 10 + VAR_0->data.data[VAR_6] - '0';
    } else {
      VAR_7 = 0;
    }
  }

  if (VAR_7 == 0) {
    VAR_5 = 0;
  }

  VAR_5+=VAR_4;

  char VAR_8[30];
  FUNC_3 (VAR_8, "%llu", VAR_5);

  int VAR_9 = FUNC_4 (VAR_8);

  if (VAR_3 >= 4) {
    FUNC_0 (VAR_2, "new value is %s\n", VAR_8);
  }

  return FUNC_2 (VAR_1, VAR_8, VAR_9, VAR_0->data.flags, VAR_0->data.delay);
}
