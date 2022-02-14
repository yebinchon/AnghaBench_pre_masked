
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int ,int,int) ;
 int* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3 (void) {
  int VAR_6, VAR_7;
  if (VAR_4 < VAR_5) {
    int VAR_8;
    VAR_7 = VAR_5 - VAR_4;
    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
      if (VAR_2[VAR_8] >= 0) {
        VAR_6 = FUNC_2 (VAR_2[VAR_8], VAR_4, VAR_7);
        if (VAR_6 != VAR_7) {
          FUNC_1 ("Write to %s failed (%d of %d) bytes written. %m\n" , VAR_0[VAR_8], VAR_6, VAR_7);
          FUNC_0 (VAR_2[VAR_8]);
          VAR_2[VAR_8] = -1;
        }
      }
    }
  }
  VAR_4 = VAR_5 = VAR_1;
}
