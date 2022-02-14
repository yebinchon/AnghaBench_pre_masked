
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_4 (const char VAR_0[512]) {
  int VAR_1, VAR_2 = 0;
  for (VAR_1 = 0; VAR_1 < 512; VAR_1++) {
    VAR_2 += (unsigned char) VAR_0[VAR_1];
  }
  if (!VAR_2) {
    return 0;
  }
  int VAR_3 = 0;
  for (VAR_1 = 148; VAR_1 < 156; VAR_1++) {
    VAR_3 += (unsigned char) VAR_0[VAR_1];
  }
  VAR_2 += 32 * 8 - VAR_3;
  int VAR_4 = FUNC_1 (VAR_0, 148, 6);
  if (VAR_2 != VAR_4) {
    FUNC_2 ("broken header, chksum = %d, but sum = %d\n", VAR_4, VAR_2);
    FUNC_0 (VAR_2 == VAR_4);
  }
  FUNC_0 (!FUNC_3 (VAR_0 + 257, "ustar", 5));
  return 1;
}
