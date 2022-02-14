
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

void FUNC_1 (int *VAR_1) {
  int VAR_2 = (*VAR_1 + 3) >> 2, VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    FUNC_0 (VAR_0, "%08x ", VAR_1[VAR_3]);
    if ((VAR_3 & 3) == 3) {
      FUNC_0 (VAR_0, "\n");
    }
  }
  FUNC_0 (VAR_0, "\n");
}
