
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_table {char* table_name; int table_name_len; } ;
typedef struct db_table* db_hash_table_p ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (int) ;

struct db_table *FUNC_3 (db_hash_table_p VAR_1, char *VAR_2, int VAR_3, int VAR_4) {
  int VAR_5 = VAR_3, VAR_6 = VAR_3, VAR_7;
  char *VAR_8;
  for (VAR_8 = VAR_2, VAR_7 = VAR_3; VAR_7--; VAR_8++) {
    if (*VAR_8 >= 'A' && *VAR_8 <= 'Z') {
      *VAR_8 += 32;
    }
    VAR_5 = (VAR_5 * 239 + *VAR_8) % VAR_0;
    VAR_6 = (VAR_6 * 17 + *VAR_8) % (VAR_0 - 1);
  }
  ++VAR_6;
  while (VAR_1[VAR_5].table_name) {
    if (VAR_3 == VAR_1[VAR_5].table_name_len &&
         !FUNC_0 (VAR_1[VAR_5].table_name, VAR_2, VAR_3)) {
      return &VAR_1[VAR_5];
    }
    VAR_5 += VAR_6;
    if (VAR_5 >= VAR_0) {
      VAR_5 -= VAR_0;
    }
  }
  if (VAR_4) {
    char *VAR_9 = FUNC_2 (VAR_3 + 1);
    FUNC_1 (VAR_9, VAR_2, VAR_3);
    VAR_9[VAR_3] = 0;
    VAR_1[VAR_5].table_name = VAR_9;
    VAR_1[VAR_5].table_name_len = VAR_3;
    return &VAR_1[VAR_5];
  }
  return 0;
}
