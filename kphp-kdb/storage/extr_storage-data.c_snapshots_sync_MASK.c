
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3 (void) {
  int VAR_3, VAR_4 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    if (VAR_1[VAR_3] >= 0) {
      if (FUNC_1 (VAR_1[VAR_3]) < 0) {
        FUNC_2 ("%s syncing fail. %m\n", VAR_0[VAR_3]);
        FUNC_0 (VAR_1[VAR_3]);
        VAR_1[VAR_3] = -1;
      } else {
        VAR_4++;
      }
    }
  }
  return VAR_4;
}
