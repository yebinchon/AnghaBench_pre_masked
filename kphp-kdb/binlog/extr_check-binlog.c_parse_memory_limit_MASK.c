
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char,...) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,long long*,char*) ;

__attribute__((used)) static long long FUNC_3 (int VAR_1, const char *VAR_2) {
  long long VAR_3;
  char VAR_4 = 0;
  if (FUNC_2 (VAR_0, "%lld%c", &VAR_3, &VAR_4) < 1) {
    FUNC_1 ("Parsing limit for option '%c' fail: %s\n", VAR_1, VAR_2);
    FUNC_0 (1);
  }
  switch (VAR_4 | 0x20) {
    case ' ': break;
    case 'k': VAR_3 <<= 10; break;
    case 'm': VAR_3 <<= 20; break;
    case 'g': VAR_3 <<= 30; break;
    case 't': VAR_3 <<= 40; break;
    default: FUNC_1 ("Parsing limit fail. Unknown suffix '%c'.\n", VAR_4); FUNC_0 (1);
  }
  return VAR_3;
}
