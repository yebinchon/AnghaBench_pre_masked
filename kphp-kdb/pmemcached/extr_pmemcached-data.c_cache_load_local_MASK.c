
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct index_entry {int dummy; } ;
struct hash_entry {int dummy; } ;
struct TYPE_10__ {long long accum_value; int data_len; } ;
struct TYPE_8__ {int data_len; } ;
struct TYPE_9__ {TYPE_1__ data; scalar_t__ index_entry; TYPE_4__* hash_entry; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,struct index_entry*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,struct hash_entry*,struct index_entry*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_4 (char const*,int) ;
 TYPE_2__* FUNC_5 (char const*,int) ;
 int FUNC_6 (long long) ;

int FUNC_7 (const char *VAR_3, int VAR_4, struct hash_entry *VAR_5, struct index_entry *VAR_6) {
  VAR_1 = VAR_2 ? FUNC_5 (VAR_3, VAR_4) : FUNC_4 (VAR_3, VAR_4);
  FUNC_2 (VAR_1, VAR_5, VAR_6);
  if (VAR_1->data.data_len == -2) {
    FUNC_1 (VAR_1, VAR_6);
    if (VAR_1->hash_entry && VAR_1->hash_entry->accum_value) {
      FUNC_0 (VAR_1->hash_entry->data_len == -2);
      long long VAR_7 = VAR_1->hash_entry->accum_value;
      FUNC_3 (VAR_1->hash_entry);
      VAR_1->hash_entry = 0;
      if (VAR_1->index_entry) {
        FUNC_6 (VAR_7);
      }
    }
  }
  VAR_0++;
  return VAR_1->data.data_len == -1 ? 0 : 1;
}
