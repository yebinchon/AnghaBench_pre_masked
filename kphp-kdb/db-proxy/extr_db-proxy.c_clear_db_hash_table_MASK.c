
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_table {void* fwd_first; scalar_t__ table_name_len; int table_name; } ;
typedef int db_hash_table_t ;
typedef struct db_table* db_hash_table_p ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct db_table*,int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3 (db_hash_table_p VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
    struct db_table *VAR_3 = VAR_1 + VAR_2;
    if (VAR_3->table_name_len) {
      FUNC_2 (VAR_3->table_name, VAR_3->table_name_len + 1);
    }
    if (VAR_3->fwd_first && VAR_3->fwd_first != (void *) -1) {
      FUNC_0 (VAR_3->fwd_first);
    }
  }
  FUNC_1 (VAR_1, 0, sizeof (db_hash_table_t));
}
