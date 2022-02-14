
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_entry {int data_len; } ;


 int FUNC_0 (char const*,int,int,int) ;
 struct index_entry* FUNC_1 (char const*,int) ;
 struct index_entry* FUNC_2 (char const*,int) ;
 struct index_entry* VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

int FUNC_4 (const char *VAR_3, int VAR_4, int VAR_5, int VAR_6) {
  struct index_entry *VAR_7 = 0;
  VAR_1 = VAR_3;
  VAR_2 = VAR_5;
  if (!VAR_6) {
    VAR_7 = FUNC_1 (VAR_3, VAR_4);
    if (!VAR_7) {
      return -2;
    }
    if (VAR_7->data_len == -1) {
      VAR_7 = 0;
    }
  }
  if (!VAR_7) {
    VAR_7 = FUNC_2 (VAR_3, VAR_4);
    if (!VAR_7) {
      return -2;
    }
  }
  VAR_0 = VAR_7;
  if (FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6) != -2) {
    return FUNC_3 (0);
  }
  return 0;
}
