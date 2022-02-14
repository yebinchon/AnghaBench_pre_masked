
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_entry {int dummy; } ;


 int FUNC_0 (struct index_entry*) ;
 struct index_entry* FUNC_1 (int) ;

int FUNC_2 (int VAR_0, int VAR_1) {
  int VAR_2;
  for (VAR_2 = VAR_0; VAR_2 < VAR_1; VAR_2++) {
    struct index_entry *VAR_3 = FUNC_1 (VAR_2);
    if (!VAR_3) { return -2; }
    int VAR_4 = FUNC_0 (VAR_3);
    if (VAR_4 < 0) { return VAR_4; }
  }
  return 0;
}
