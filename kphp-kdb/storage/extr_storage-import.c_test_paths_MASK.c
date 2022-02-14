
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char**) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3 (char *VAR_1) {
  char *VAR_2[VAR_0];
  int VAR_3 = FUNC_1 (VAR_1, VAR_2);
  if (VAR_3 >= 0) {
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
      FUNC_2 (VAR_2[VAR_4]);
    }
    FUNC_0 (VAR_2[0]);
  }
}
