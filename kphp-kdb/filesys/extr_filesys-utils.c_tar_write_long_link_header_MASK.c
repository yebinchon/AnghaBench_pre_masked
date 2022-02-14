
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gzFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,char const* const,int) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4 (gzFile VAR_2, char VAR_3[512], int VAR_4, const char *const VAR_5) {
  if (FUNC_3 (VAR_2, VAR_3) < 0) {
    return VAR_1;
  }
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_4 + 1; VAR_6 += 512) {
    int VAR_7 = VAR_4 + 1 - VAR_6;
    if (VAR_7 > 512) {
      VAR_7 = 512;
    }
    FUNC_2 (VAR_3, 0, 512);
    FUNC_1 (VAR_3, VAR_5 + VAR_6, VAR_7);
    if (FUNC_0 (VAR_2, VAR_3, 512) != 512) {
      return VAR_0;
    }
  }
  return 0;
}
