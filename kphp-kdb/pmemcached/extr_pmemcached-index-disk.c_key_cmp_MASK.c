
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_entry {int key_len; int data; } ;
struct hash_entry {int key_len; int key; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

int FUNC_1 (struct hash_entry *VAR_0, struct index_entry *VAR_1) {
  if (VAR_0 == 0) return 1;
  if (VAR_1 == 0) return -1;
  return FUNC_0(VAR_0->key, VAR_0->key_len, VAR_1->data, VAR_1->key_len);
}
