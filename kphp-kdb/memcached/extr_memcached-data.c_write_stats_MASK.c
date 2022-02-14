
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hash_entry {int next_used; char* key; char* data; int data_len; int next_entry; int key_len; int exp_time; int key_hash; } ;
struct TYPE_3__ {char* key; int key_len; long long key_hash; char* data; int data_len; int exp_time; } ;
typedef TYPE_1__ hash_entry_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 struct hash_entry* VAR_3 ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (char*,int,long long) ;
 TYPE_1__* FUNC_9 (int) ;
 long long FUNC_10 (char*,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int* VAR_4 ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,int ,int) ;
 int VAR_5 ;
 int FUNC_15 (char*,int) ;
 void* FUNC_16 (int) ;

void FUNC_17 (void) {
  int VAR_6 = FUNC_12 (VAR_0);

  int VAR_7 = VAR_3[0].next_used;
  struct hash_entry *VAR_8 = &VAR_3[VAR_7];

  if (VAR_7 == 0) {
    FUNC_7 (VAR_5, "Memcached is empty\n");
    return;
  }

  char *VAR_9 = FUNC_16 (1024 + 3);
  VAR_9[0] = ' ';

  int VAR_10, VAR_11;
  while (VAR_7 != 0 && VAR_8->key[0] != ' ') {
    FUNC_6 (VAR_7);
    FUNC_5 (VAR_7);

    FUNC_15 (VAR_8->data, VAR_8->data_len + 1);

    int *VAR_12 = &VAR_4[FUNC_0 (VAR_8->key_hash)];

    while (*VAR_12 != VAR_7 && *VAR_12 != -1) {
      VAR_12 = &(VAR_3[*VAR_12].next_entry);
    }

    FUNC_4 (*VAR_12 == VAR_7);

    *VAR_12 = VAR_8->next_entry;

    for (VAR_10 = 0; VAR_10 < VAR_8->key_len && (VAR_8->key[VAR_10] < '0' || VAR_8->key[VAR_10] > '9') && VAR_8->key[VAR_10] != '-' && VAR_8->key[VAR_10] != ':'; VAR_10++) {
    }

    while (VAR_10 > 1 && VAR_8->key[VAR_10 - 1] == '_') {
      VAR_10--;
    }

    int VAR_13 = 0, VAR_14 = 0;
    for (VAR_11 = VAR_10; VAR_11 < VAR_8->key_len; VAR_11++) {
      if (VAR_8->key[VAR_11] == '_' && VAR_8->key[VAR_11 - 1] != '_') {
        VAR_13++;
      }
      if (VAR_13 == 0 && VAR_8->key[VAR_11] >= 'a' && VAR_8->key[VAR_11] <= 'f') {
        VAR_14 = 1;
      }
    }

    if (VAR_14) {
      while (VAR_10 > 2 && VAR_8->key[VAR_10 - 1] >= 'a' && VAR_8->key[VAR_10 - 1] <= 'f') {
        VAR_10--;
      }
    }

    int VAR_15;

    if (VAR_10 < VAR_8->key_len && VAR_10 < 1024 && VAR_8->key_len > 0) {
      VAR_15 = VAR_10 + 3;

      FUNC_13 (VAR_9 + 1, VAR_8->key, VAR_10);
      if (VAR_13 > 9) {
        VAR_13 = 9;
      }

      VAR_9[VAR_10 + 1] = '0' + VAR_13;
      VAR_9[VAR_10 + 2] = (VAR_8->key[VAR_10] != '_') * 2 + (VAR_8->key[VAR_8->key_len - 1] != '_') + '0';
    } else {
      VAR_15 = 6;
      FUNC_13 (VAR_9 + 1, "OTHER", 5);
    }

    int VAR_16 = VAR_15 - 1 + 6 * sizeof (int) + 1;
    int VAR_17 = VAR_8->exp_time - VAR_6;

    long long VAR_18 = FUNC_10 (VAR_9, VAR_15);
    int VAR_19 = FUNC_8 (VAR_9, VAR_15, VAR_18);

    hash_entry_t *VAR_20;

    if (VAR_19 != -1) {
      VAR_20 = FUNC_9 (VAR_19);

      FUNC_6 (VAR_19);
    } else {
      VAR_19 = FUNC_11 ();
      VAR_20 = FUNC_9 (VAR_19);

      VAR_20->key = FUNC_16 (VAR_15 + 1);
      FUNC_13 (VAR_20->key, VAR_9, VAR_15);
      VAR_20->key[VAR_15] = 0;

      VAR_20->key_len = VAR_15;
      VAR_20->key_hash = VAR_18;

      FUNC_1 (VAR_19);

      VAR_20->data = FUNC_16 (VAR_16);
      FUNC_14 (VAR_20->data, 0, sizeof (int) * 6);

      FUNC_13 (VAR_20->data + 6 * sizeof (int), VAR_20->key + 1, VAR_15);
      VAR_20->data_len = VAR_16 - 1;
      VAR_20->exp_time = 86400 + VAR_6;

      FUNC_2 (VAR_19);
    }

    int *VAR_21 = (int *)VAR_20->data;
    VAR_21[0]++;
    VAR_21[1] += VAR_8->key_len;
    VAR_21[2] += VAR_8->data_len;
    VAR_21[3] += VAR_17 / 500;
    VAR_21[4] += VAR_17 % 500;
    if (VAR_17 > VAR_21[5]) {
      VAR_21[5] = VAR_17;
    }

    FUNC_3 (VAR_19);

    FUNC_15 (VAR_8->key, VAR_8->key_len + 1);
    VAR_1[VAR_2++] = VAR_7;

    VAR_7 = VAR_3[0].next_used;
    VAR_8 = &VAR_3[VAR_7];
  }

  FUNC_15 (VAR_9, 1024 + 3);

  FUNC_7 (VAR_5, "   quantity\ttot_key_len\ttot_val_len\t tot_memory\tmean_memory\t  mean_exp_time\tmax_exp_time\tprefix\n");
  int VAR_22[6] = {0};

  while (VAR_7 != 0) {
    FUNC_6 (VAR_7);
    FUNC_5 (VAR_7);

    int *VAR_23 = &VAR_4[FUNC_0 (VAR_8->key_hash)];

    while (*VAR_23 != VAR_7 && *VAR_23 != -1) {
      VAR_23 = &(VAR_3[*VAR_23].next_entry);
    }

    FUNC_4 (*VAR_23 == VAR_7);

    *VAR_23 = VAR_8->next_entry;

    int *VAR_24 = (int *)VAR_8->data;

    FUNC_7 (VAR_5, "%11d\t%11d\t%11d\t%11d\t%11.1lf\t%15.6lf\t%12d\t%s\n", VAR_24[0], VAR_24[1], VAR_24[2], VAR_24[1] + VAR_24[2] + (2 + (int)sizeof (struct hash_entry)) * VAR_24[0],
                                                                                   (VAR_24[1] + VAR_24[2]) * 1.0 / VAR_24[0] + (2 + sizeof (struct hash_entry)),
                                                                                   (VAR_24[3] * 500.0 + VAR_24[4]) / VAR_24[0], VAR_24[5], (char *)(VAR_24 + 6));

    for (VAR_10 = 0; VAR_10 < 5; VAR_10++) {
      VAR_22[VAR_10] += VAR_24[VAR_10];
    }
    if (VAR_24[5] > VAR_22[5]) {
      VAR_22[5] = VAR_24[5];
    }

    FUNC_15 (VAR_8->key, VAR_8->key_len + 1);
    FUNC_15 (VAR_8->data, VAR_8->data_len + 1);
    VAR_1[VAR_2++] = VAR_7;

    VAR_7 = VAR_3[0].next_used;
    VAR_8 = &VAR_3[VAR_7];
  }

  int *VAR_25 = VAR_22;
  FUNC_7 (VAR_5, "%11d\t%11d\t%11d\t%11d\t%11.1lf\t%15.6lf\t%12d\t%s\n", VAR_25[0], VAR_25[1], VAR_25[2], VAR_25[1] + VAR_25[2] + (2 + (int)sizeof (struct hash_entry)) * VAR_25[0],
                                                                                 (VAR_25[1] + VAR_25[2]) * 1.0 / VAR_25[0] + (2 + sizeof (struct hash_entry)),
                                                                                 (VAR_25[3] * 500.0 + VAR_25[4]) / VAR_25[0], VAR_25[5], "TOTAL");
}
