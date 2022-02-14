
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_entry {int data_len; char* data; int key_len; } ;
struct hash_entry {int key_len; char* key; } ;


 int FUNC_0 (char*,int,struct hash_entry*,struct index_entry*) ;
 struct hash_entry* FUNC_1 (char const*,int) ;
 struct index_entry* FUNC_2 (char const*,int) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int,char*,int,int) ;

int FUNC_5 (const char *VAR_0, int VAR_1, char **VAR_2, int *VAR_3) {
  char *VAR_4 = 0;
  int VAR_5 = 0;
  struct hash_entry *VAR_6 = FUNC_1 (VAR_0, VAR_1);
  int VAR_7 = -1;
  if (VAR_6) {
    VAR_5 = VAR_6->key_len;
    VAR_4 = VAR_6->key;
    VAR_7 = 0;
  }
  struct index_entry *VAR_8 = FUNC_2 (VAR_0, VAR_1);
  if (!VAR_8) {
    return -2;
  }
  FUNC_4 (4, "next in index: %d, next in memory: %d\n", VAR_8->data_len != -1, VAR_7 != -1);
  if (VAR_8->data_len == -1 && VAR_7 == -1) {
    return -1;
  }
  int VAR_9;
  if (VAR_8->data_len == -1) {
    VAR_9 = -1;
  } else if (!VAR_4) {
    VAR_9 = 1;
  } else {
    VAR_9 = FUNC_3 (VAR_4, VAR_5, VAR_8->data, VAR_8->key_len);
  }
  if (VAR_9 <= 0) {
    *VAR_2 = VAR_4;
    *VAR_3 = VAR_5;
  } else {
    *VAR_2 = VAR_8->data;
    *VAR_3 = VAR_8->key_len;
  }
  FUNC_0 (*VAR_2, *VAR_3, (VAR_9 <= 0) ? VAR_6 : 0, (VAR_9 >= 0) ? VAR_8 : 0);
  return 0;
}
