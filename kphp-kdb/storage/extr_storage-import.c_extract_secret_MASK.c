
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long FUNC_0 () ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char const*,char*,...) ;

__attribute__((used)) static int FUNC_3 (const char* VAR_0, unsigned long long *VAR_1) {
  int VAR_2;
  unsigned long long VAR_3;
  char VAR_4;
  char VAR_5[4];
  FUNC_1 (VAR_5, 0, 4);
  *VAR_1 = 0;
  if (FUNC_2 (VAR_0, "%c_%llx.%3s", &VAR_4, &VAR_3, VAR_5) == 3) {
    *VAR_1 = VAR_3 << 32;
    *VAR_1 |= ((unsigned int) ((unsigned char) VAR_4)) << 24;
  } else if (FUNC_2 (VAR_0, "%llx.%3s", &VAR_3, VAR_5) == 2) {
    *VAR_1 = VAR_3 << 24;
  } else {
    *VAR_1 = FUNC_0 ();
    return 1;
  }
  for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
    *VAR_1 |= ((unsigned int) ((unsigned char) VAR_5[VAR_2])) << (8 * (2 - VAR_2));
  }
  return 0;
}
