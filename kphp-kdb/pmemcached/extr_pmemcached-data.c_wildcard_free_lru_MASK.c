
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wildcard_entry {int flags; struct wildcard_entry* prev_use; } ;
typedef int hash_entry_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,char*,int ,struct wildcard_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wildcard_entry VAR_3 ;

void FUNC_3 (void) {
  struct wildcard_entry *VAR_4 = VAR_3.prev_use;
  FUNC_0 (VAR_4 != &VAR_3);
  if (VAR_4->flags & 1) {
    VAR_1 = FUNC_1 (VAR_1, (hash_entry_t *)VAR_4);
  } else {
    VAR_2 = FUNC_1 (VAR_2, (hash_entry_t *)VAR_4);
  }
  FUNC_2 (2, "wildcard_lru succ: memory = %lld, entry = %p\n", VAR_0, VAR_4);
}
