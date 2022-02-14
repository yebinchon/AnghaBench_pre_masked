
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 (void) {
  int VAR_3, VAR_4 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    if (VAR_1[VAR_3] >= 0) {
      if (FUNC_1 (VAR_0[VAR_3])) {
        FUNC_0 ("cannot rename new index file from %s: %m\n", VAR_0[VAR_3]);
        FUNC_2 (VAR_0[VAR_3]);
        VAR_1[VAR_3] = -1;
      } else {
        VAR_4++;
      }
    }
  }
  return VAR_4;
}
