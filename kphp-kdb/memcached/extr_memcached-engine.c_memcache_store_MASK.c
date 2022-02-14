
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int In; } ;
struct TYPE_3__ {int data_len; char* key; int key_len; long long key_hash; int flags; int exp_time; scalar_t__* data; } ;
typedef TYPE_1__ hash_entry_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (char const*,int,long long) ;
 TYPE_1__* FUNC_9 (int) ;
 long long FUNC_10 (char const*,int) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (char*,char const*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_14 (int *,scalar_t__*,int) ;
 int* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_15 (scalar_t__*,int) ;
 void* FUNC_16 (int) ;

int FUNC_17 (struct connection *VAR_11, int VAR_12, const char *VAR_13, int VAR_14, int VAR_15, int VAR_16, int VAR_17) {
  VAR_3++;

  if (VAR_16 == 0) {
    VAR_16 = VAR_2;
  } else if (VAR_16 > VAR_2) {
    VAR_16 -= VAR_6;
    if (VAR_16 > VAR_2) {
      VAR_16 = VAR_2;
    }
  }

  if (VAR_16 < 0) {
    return -2;
  }

  VAR_16 += FUNC_12 (VAR_0);

  if (VAR_10 > 0) {
    FUNC_7 (VAR_8, "memcache_store: key='%s', key_len=%d, value_len=%d, flags = %d, exp_time = %d\n", VAR_13, VAR_14, VAR_17, VAR_15, VAR_16);
  }

  if (VAR_17 < VAR_1) {
    long long VAR_18 = FUNC_10 (VAR_13, VAR_14);
    int VAR_19 = FUNC_8 (VAR_13, VAR_14, VAR_18);

    FUNC_0 (0);




    hash_entry_t *VAR_20;

    if (VAR_19 != -1) {
      if (VAR_12 == VAR_4) {
        return -2;
      }

      if (VAR_10 > 0) {
        FUNC_7 (VAR_8, "found old entry x = %d\n", VAR_19);
      }
      VAR_20 = FUNC_9 (VAR_19);

      FUNC_15 (VAR_20->data, VAR_20->data_len + 1);

      FUNC_6 (VAR_19);
      FUNC_5 (VAR_19);
    } else {
      if (VAR_12 == VAR_5) {
        return -2;
      }

      VAR_9++;

      VAR_19 = FUNC_11 ();

      if (VAR_10 > 0) {
        FUNC_7 (VAR_8, "created new entry x = %d\n", VAR_19);
      }

      VAR_20 = FUNC_9 (VAR_19);

      char *VAR_21;
      VAR_21 = FUNC_16 (VAR_14 + 1);
      FUNC_13 (VAR_21, VAR_13, VAR_14);
      VAR_21[VAR_14] = 0;

      VAR_20->key = VAR_21;
      VAR_20->key_len = VAR_14;
      VAR_20->key_hash = VAR_18;

      FUNC_1 (VAR_19);
    }

    VAR_20->data = FUNC_16 (VAR_17 + 1);
    FUNC_4 (FUNC_14 (&VAR_11->In, VAR_20->data, VAR_17) == VAR_17);
    VAR_20->data[VAR_17] = 0;

    VAR_20->data_len = VAR_17;
    VAR_20->flags = VAR_15;
    VAR_20->exp_time = VAR_16;

    FUNC_3 (VAR_19);
    FUNC_2 (VAR_19);

    return 1;
  }

  return -2;
}
