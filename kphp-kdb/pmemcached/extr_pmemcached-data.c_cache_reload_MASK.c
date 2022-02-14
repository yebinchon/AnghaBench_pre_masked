
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_entry {int timestamp; } ;
struct entry {int timestamp; struct hash_entry* hash_entry; int key_len; int key; } ;


 int FUNC_0 (struct entry*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 struct hash_entry* FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3 (struct entry *VAR_3) {
  if (VAR_2 >= 4 && VAR_3->hash_entry) {
    FUNC_1 (VAR_1, "entry->hash_entry->timestamp = %d, entry->timestamp = %d\n", VAR_3->hash_entry->timestamp, VAR_3->timestamp);
  }
  struct hash_entry *VAR_4 = FUNC_2 (VAR_3->key, VAR_3->key_len);
  if (!VAR_3->hash_entry || VAR_3->hash_entry != VAR_4 || VAR_3->hash_entry->timestamp != VAR_3->timestamp) {

    if (VAR_2 >= 4) {
      FUNC_1 (VAR_1, "Reloading cache information. Hash_entry = %p\n", VAR_4);
    }

    VAR_3->hash_entry = VAR_4;
    FUNC_0 (VAR_3);
    VAR_0++;
  }
  return 0;
}
