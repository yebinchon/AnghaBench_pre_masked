
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int query_t ;


 scalar_t__ VAR_0 ;
 void** VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 char* VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int,char*,char*) ;

query_t *FUNC_2 (char **VAR_5) {
  FUNC_1 (3, "parsing additional query %.40s...\n", *VAR_5);
  if (VAR_3) {
    if (VAR_2 == VAR_0) {
      return 0;
    }
    VAR_1[VAR_2++] = VAR_3;
    VAR_3 = 0;
  }
  VAR_4 = *VAR_5;
  query_t *VAR_6 = VAR_3 = FUNC_0 (128);
  *VAR_5 = VAR_4;
  return VAR_6;
}
