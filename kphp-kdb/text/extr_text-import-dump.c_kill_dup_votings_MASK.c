
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2 (void) {
  int VAR_4, VAR_5 = 1;
  if (!VAR_1) {
    return;
  }
  for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4++) {
    if (FUNC_0 (&VAR_0[VAR_4-1], &VAR_0[VAR_4])) {
      VAR_0[VAR_5++] = VAR_0[VAR_4];
    }
  }
  if (VAR_3 > 0) {
    FUNC_1 (VAR_2, "deleted %d duplicate records\n", VAR_1 - VAR_5);
  }
  VAR_1 = VAR_5;
}
