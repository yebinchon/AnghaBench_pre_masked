
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_1 (char *VAR_0, const char *VAR_1, int VAR_2) {
  FUNC_0 (VAR_0, VAR_1, VAR_2);
  register int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    if (!VAR_0[VAR_3]) {
      VAR_0[VAR_3] = '\n';
    }
  }
  VAR_0[VAR_3] = 0;
}
