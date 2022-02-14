
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {long long accum_value; int data_len; } ;
struct TYPE_8__ {int data_len; } ;
struct TYPE_9__ {char const* key; int key_len; TYPE_1__ data; scalar_t__ index_entry; TYPE_4__* hash_entry; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,char*,...) ;
 TYPE_2__* FUNC_6 (char const*,int) ;
 TYPE_2__* FUNC_7 (char const*,int) ;
 int FUNC_8 (long long) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_9 (const char *VAR_6, int VAR_7, int VAR_8) {
  if (VAR_5 >= 4) {
    FUNC_5 (VAR_4, "loading cache item... ");
  }

  VAR_2 = VAR_3 ? FUNC_7 (VAR_6, VAR_7) : FUNC_6 (VAR_6, VAR_7);
  if (VAR_5 >= 4) {
    FUNC_5 (VAR_4, "current_cache->data.data_len = %d\n", VAR_2->data.data_len);
    FUNC_5 (VAR_4, "forceload = %d\n", VAR_8);
    FUNC_5 (VAR_4, "current_cache->key = "); FUNC_3 (VAR_2->key, VAR_2->key_len);
    FUNC_5 (VAR_4, "key = "); FUNC_3 (VAR_6, VAR_7);
    FUNC_5 (VAR_4, "key_len = %d, current_cache->key_len = %d\n", VAR_7, VAR_2->key_len);
  }
  FUNC_0 (VAR_7 >= 0);
  if (!VAR_8 || VAR_2->data.data_len != -2) {
    VAR_1++;
    if (VAR_5 >= 4) {
      FUNC_5 (VAR_4, "already in cache\n");
    }
    FUNC_2 (VAR_2);
    return VAR_2->data.data_len == -1 ? 0 : 1;
  } else {
    VAR_0++;
    if (VAR_5 >= 4) {
      FUNC_5 (VAR_4, "not in cache. Adding...");
    }

    FUNC_2 (VAR_2);

    if (!VAR_2->hash_entry || VAR_2->data.data_len == -2) {
      if (VAR_8) {
        if (VAR_5 >= 4) {
          FUNC_5 (VAR_4, "Copying data from index...");
        }
        if (FUNC_1 (VAR_2) == -2) {
          if (VAR_5 >= 4) {
            FUNC_5 (VAR_4, "Data is not loaded. Using aio.\n");
          }
          return -2;
        }
        if (VAR_2->hash_entry && VAR_2->hash_entry->accum_value) {
          FUNC_0 (VAR_2->hash_entry->data_len == -2);
          if (VAR_5 >= 4) {
            FUNC_5 (VAR_4, "Adding accumulated data...");
          }
          long long VAR_9 = VAR_2->hash_entry->accum_value;
          FUNC_4 (VAR_2->hash_entry);
          VAR_2->hash_entry = 0;
          if (VAR_2->index_entry) {
            FUNC_8 (VAR_9);
          }
        }
      } else {
        if (VAR_5 >= 4) {
          FUNC_5 (VAR_4, "Skipping loading data from index, because forceload set to 0...");
        }
      }
      if (VAR_5 >= 4) {
        FUNC_5 (VAR_4, "Added successfully.\n");
      }
    }
    return VAR_2->data.data_len == -1 ? 0 : 1;
  }
}
