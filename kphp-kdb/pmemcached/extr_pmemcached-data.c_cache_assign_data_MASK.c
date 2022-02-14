
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data_len; int delay; scalar_t__ flags; scalar_t__ data; } ;
struct entry {int timestamp; int index_entry; TYPE_2__ data; scalar_t__ allocated_here; TYPE_1__* hash_entry; } ;
struct TYPE_3__ {int data_len; int exp_time; int timestamp; scalar_t__ flags; scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;

inline void FUNC_1 (struct entry *VAR_1) {
  if (VAR_1->hash_entry) {
    if (VAR_1->allocated_here) {
      FUNC_0 (VAR_1->data.data, VAR_1->data.data_len + 1);
      VAR_0 -= VAR_1->data.data_len + 1;
      VAR_1->allocated_here = 0;
    }
    VAR_1->data.data_len = VAR_1->hash_entry->data_len;
    VAR_1->data.data = VAR_1->hash_entry->data;
    VAR_1->data.flags = VAR_1->hash_entry->flags;
    VAR_1->data.delay = VAR_1->hash_entry->exp_time;
    VAR_1->timestamp = VAR_1->hash_entry->timestamp;
  } else if (VAR_1->index_entry != 1) {
    if (VAR_1->allocated_here) {
      FUNC_0 (VAR_1->data.data, VAR_1->data.data_len + 1);
      VAR_0 -= VAR_1->data.data_len + 1;
      VAR_1->allocated_here = 0;
    }
    if (VAR_1->index_entry == 0) {
      VAR_1->data.data_len = -1;
    } else {
      VAR_1->data.data_len = -2;
    }
    VAR_1->data.data = 0;
    VAR_1->data.flags = 0;
    VAR_1->data.delay = -1;
    VAR_1->timestamp = -2;
  }
}
