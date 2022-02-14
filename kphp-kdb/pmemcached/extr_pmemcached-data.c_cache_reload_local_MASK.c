
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_entry {int dummy; } ;
struct hash_entry {scalar_t__ timestamp; } ;
struct entry {int timestamp; struct hash_entry* hash_entry; } ;


 int FUNC_0 (struct entry*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2 (struct entry *VAR_3, struct hash_entry *VAR_4, struct index_entry *VAR_5) {
  if (VAR_2 >= 4 && VAR_3->hash_entry) {
    FUNC_1 (VAR_1, "entry->hash_entry->timestamp = %ld, entry->timestamp = %d\n", VAR_3->hash_entry->timestamp, VAR_3->timestamp);
  }

  if (!VAR_3->hash_entry || VAR_3->hash_entry != VAR_4 || VAR_3->hash_entry->timestamp != VAR_3->timestamp) {
    if (VAR_2 >= 4) {
      FUNC_1 (VAR_1, "Reloading cache information.\n");
    }
    VAR_3->hash_entry = VAR_4;
    FUNC_0 (VAR_3);
    VAR_0++;
  }
  return 0;
}
