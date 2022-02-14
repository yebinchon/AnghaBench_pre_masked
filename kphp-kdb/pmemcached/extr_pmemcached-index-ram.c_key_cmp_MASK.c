
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_entry {int key_len; int data; int key; } ;
struct hash_entry {int key_len; int data; int key; } ;


 int FUNC_0 (struct index_entry*) ;
 int VAR_0 ;
 struct index_entry* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct index_entry** VAR_2 ;

int FUNC_3 (int VAR_3, int VAR_4) {
  if (VAR_3 == VAR_0) return 1;
  if (VAR_4 == VAR_1) return -1;



  struct hash_entry *VAR_5 = VAR_2[VAR_3];
  FUNC_0 (VAR_5);
  struct index_entry *VAR_6 = FUNC_1 (VAR_4);
  FUNC_0 (VAR_6);

  return FUNC_2 (VAR_5->key, VAR_5->key_len, VAR_6->data, VAR_6->key_len);
}
