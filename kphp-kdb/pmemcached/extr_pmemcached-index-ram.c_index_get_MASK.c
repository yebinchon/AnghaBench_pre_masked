
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_entry {int* data; int key_len; } ;


 struct index_entry VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int * VAR_1 ;
 size_t* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int*,int,char const*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,char*,...) ;

struct index_entry* FUNC_3 (const char *VAR_6, int VAR_7) {
  int VAR_8 = -1;
  int VAR_9 = VAR_3;
  while (VAR_9-VAR_8 > 1) {
    int VAR_10 = (VAR_9+VAR_8)>>1;
    struct index_entry *VAR_11 = (struct index_entry *)&VAR_1[VAR_2[VAR_10]];
    if (FUNC_1 (VAR_11->data, VAR_11->key_len, VAR_6, VAR_7) < 0) {
      VAR_8 = VAR_10;
    } else {
      VAR_9 = VAR_10;
    }
  }
  if (VAR_5>=4) {
    FUNC_0 (VAR_4, "(l,r) = (%d,%d)\n", VAR_8, VAR_9);
    FUNC_0 (VAR_4, "index_size = %d\n", VAR_3);
  }
  VAR_8++;
  struct index_entry *VAR_12;
  if (VAR_8 < VAR_3) {
    VAR_12 = (struct index_entry *)&VAR_1[VAR_2[VAR_8]];
    FUNC_2 (4, "entry->key_len = %d, key_len = %d\n", VAR_12->key_len, VAR_7);
    if (VAR_5 >= 6) {
      int VAR_13;
      for (VAR_13 = 0; VAR_13 < VAR_12->key_len; VAR_13++)
        FUNC_0 (VAR_4, "%c", VAR_12->data[VAR_13]);
      FUNC_0 (VAR_4, "\n");
    }
  }
  if (VAR_8 < VAR_3 && !FUNC_1 (VAR_12->data, VAR_12->key_len, VAR_6, VAR_7)) {
    FUNC_2 (4, "Item found in index.\n");
    return VAR_12;
  }
  return &VAR_0;
}
