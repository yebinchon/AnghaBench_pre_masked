
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_entry {int data_len; char* data; int key_len; } ;
struct hash_entry {int key_len; char* key; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,struct hash_entry*,struct index_entry*) ;
 struct index_entry* FUNC_2 (struct index_entry*) ;
 struct index_entry* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int ,int,char*,int,int ) ;
 int FUNC_5 (int,char*,struct index_entry*,struct hash_entry*) ;
 scalar_t__ FUNC_6 () ;

int FUNC_7 (struct hash_entry *VAR_3) {
  FUNC_5 (3, "iterator_report: index_entry %p, hash_entry %p\n", VAR_0, VAR_3);
  struct index_entry *VAR_4 = VAR_0;
  char *VAR_5 = 0;
  int VAR_6 = 0;
  int VAR_7 = -1;
  if (VAR_3) {
    VAR_6 = VAR_3->key_len;
    VAR_5 = VAR_3->key;
    VAR_7 = 0;
  }
  int VAR_8;
  while (1) {
    if (VAR_4->data_len == -1) {
      VAR_8 = -1;
    } else if (!VAR_5) {
      VAR_8 = 1;
    } else {
      VAR_8 = FUNC_3 (VAR_5, VAR_6, VAR_4->data, VAR_4->key_len);
    }
    if (VAR_8 <= 0) {
      break;
    }
    if (!VAR_3) {
      int VAR_9 = FUNC_4 (VAR_1, VAR_2, VAR_4->data, VAR_4->key_len, 0);
      FUNC_0 (VAR_9 <= 0);
      if (VAR_9 && VAR_9 >= -VAR_2) {
        return 0;
      }
    }

    FUNC_1 (VAR_4->data, VAR_4->key_len, (VAR_8 <= 0) ? VAR_3 : 0, (VAR_8 >= 0) ? VAR_4 : 0);
    if (FUNC_6 () < 0) {
      return -1;
    }

    VAR_4 = FUNC_2 (VAR_4);
    if (!VAR_4) {
      return -2;
    }
  }
  if (!VAR_3) {
    return 0;
  }
  FUNC_1 (VAR_3->key, VAR_3->key_len, (VAR_8 <= 0) ? VAR_3 : 0, (VAR_8 >= 0) ? VAR_4 : 0);

  if (FUNC_6 () < 0) { return -1;};
  if (VAR_8 == 0) {
    VAR_4 = FUNC_2 (VAR_4);
    if (!VAR_4) {
      return -2;
    }
  }
  VAR_0 = VAR_4;
  return 0;
}
