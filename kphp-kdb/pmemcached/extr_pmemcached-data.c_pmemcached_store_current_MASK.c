
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int data_len; char* data; char* key; int key_len; int flags; int exp_time; int timestamp; } ;
typedef TYPE_2__ hash_entry_t ;
struct TYPE_9__ {int data_len; } ;
struct TYPE_11__ {char const* key; int key_len; TYPE_2__* hash_entry; TYPE_1__ data; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_5__* VAR_0 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,int) ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (char const*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (char*,int) ;
 char* FUNC_11 (int) ;

int FUNC_12 (int VAR_6, const char *VAR_7, int VAR_8, int VAR_9, int VAR_10) {
  if (VAR_5 >= 4) {
    FUNC_5 (VAR_4, "data_len=%d\n", VAR_0->data.data_len);
  }
  if (VAR_6 == VAR_2 && VAR_0->data.data_len != -1) {
    return 0;
  }
  if (VAR_6 == VAR_3 && VAR_0->data.data_len == -1) {
    return 0;
  }

  FUNC_9 (VAR_0->key, VAR_0->key_len);

  hash_entry_t *VAR_11 = VAR_0->hash_entry;

  if (VAR_11) {
    if (VAR_11->data_len >= 0) {
      FUNC_10 (VAR_11->data, VAR_11->data_len + 1);
      VAR_1 -= VAR_11->data_len + 1;
      FUNC_4(VAR_11);
    }
  } else {

    VAR_11 = FUNC_6 ();

    char *VAR_12;
    VAR_12 = FUNC_11 (VAR_0->key_len + 1);
    FUNC_8 (VAR_12, VAR_0->key, VAR_0->key_len);
    VAR_12[VAR_0->key_len] = 0;
    VAR_1 += VAR_0->key_len + 1;

    VAR_11->key = VAR_12;
    VAR_11->key_len = VAR_0->key_len;

    FUNC_0 (VAR_11);
  }

  char *VAR_13 = 0;
  if (VAR_8 >= 0) {
    FUNC_2 (VAR_13 = FUNC_11 (VAR_8 + 1));
    FUNC_8(VAR_13, VAR_7, VAR_8);
    VAR_13[VAR_8] = 0;
    VAR_1 += VAR_8 + 1;
  }

  VAR_11->data = VAR_13;
  VAR_11->data_len = VAR_8;
  VAR_11->flags = VAR_9;
  VAR_11->exp_time = VAR_10;
  VAR_11->timestamp = FUNC_7();

  FUNC_1 (VAR_11);
  FUNC_3 (VAR_0);

  return 1;
}
