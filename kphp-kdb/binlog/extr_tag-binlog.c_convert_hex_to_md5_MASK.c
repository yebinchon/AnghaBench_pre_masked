
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int const) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4 (unsigned char *VAR_0, char *VAR_1) {
  int VAR_2;
  const int VAR_3 = FUNC_3 (VAR_1);
  if (VAR_3 != 32) {
    FUNC_1 ("Tag should contain 32 hexdigits. Given tag length is %d.\n", VAR_3);
    FUNC_0 (1);
  }
  for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
    VAR_0[VAR_2] = (FUNC_2 (VAR_1[2*VAR_2]) << 4) + FUNC_2 (VAR_1[2*VAR_2+1]);
  }
}
