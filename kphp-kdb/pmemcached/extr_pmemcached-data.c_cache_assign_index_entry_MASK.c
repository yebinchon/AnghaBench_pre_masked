
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_entry {int data_len; int delay; int flags; scalar_t__ data; } ;
struct TYPE_2__ {int data_len; int delay; int flags; scalar_t__ data; } ;
struct entry {int index_entry; int allocated_here; int timestamp; TYPE_1__ data; scalar_t__ key_len; int key; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 struct index_entry* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;

inline int FUNC_4 ( struct entry *VAR_5) {
  struct index_entry *VAR_6 = FUNC_1 (VAR_5->key, VAR_5->key_len);
  if (VAR_4 >= 4) {
    FUNC_0 (VAR_3, "copying data from index_entry... ");
  }
  if (!VAR_6) {
    return -2;
  }
  if (VAR_6->data_len == -1) {
    VAR_5->index_entry = 0;
    VAR_5->data.data_len = -1;
    VAR_5->data.data = 0;
  } else {
    VAR_5->index_entry = 1;
    VAR_5->data.data_len = VAR_6->data_len;
    if (VAR_2 != VAR_0) {
      VAR_5->data.data = VAR_6->data + VAR_5->key_len;
      VAR_5->allocated_here = 0;
    } else {
      VAR_5->data.data = FUNC_3 (VAR_5->data.data_len + 1);
      FUNC_2 (VAR_5->data.data, VAR_6->data+ VAR_5->key_len, VAR_5->data.data_len + 1);
      VAR_5->allocated_here = 1;
      VAR_1 += VAR_5->data.data_len + 1;
    }
    VAR_5->data.flags = VAR_6->flags;
    VAR_5->data.delay = VAR_6->delay;
  }
  VAR_5->timestamp = -2;
  if (VAR_4 >= 4) {
    FUNC_0 (VAR_3, "done... \n");
    FUNC_0 (VAR_3, "data_len = %d\n", VAR_5->data.data_len);
  }
  return 0;
}
