
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kfs_file_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int*,int,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

int FUNC_2 (kfs_file_handle_t VAR_5) {
  if (!VAR_5) {
    VAR_2 = 0;
    VAR_4 = FUNC_0 (0, 0, VAR_0 | VAR_1, 0);
    static int VAR_6[1000];
    int VAR_7;
    for (VAR_7 = 0; VAR_7 < 1000; VAR_7++) { VAR_6[VAR_7] = 0x7fffffff; }
    VAR_3 = FUNC_0 (1000, VAR_6, VAR_0 | VAR_1, 0);
    return 0;
  }
  FUNC_1 (0);
  return 0;
}
