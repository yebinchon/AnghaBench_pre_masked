
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,char*,long long*,char*) ;
 int FUNC_3 () ;

__attribute__((used)) static long long FUNC_4 (const char *VAR_0) {
  long long VAR_1;
  char VAR_2 = 0;
  if (FUNC_2 (VAR_0, "%lld%c", &VAR_1, &VAR_2) < 1) {
    FUNC_1 ("Parsing limit for option fail: %s\n", VAR_0);
    FUNC_3 ();
    FUNC_0 (1);
  }
  switch (VAR_2 | 0x20) {
    case ' ': break;
    case 'k': VAR_1 <<= 10; break;
    case 'm': VAR_1 <<= 20; break;
    case 'g': VAR_1 <<= 30; break;
    case 't': VAR_1 <<= 40; break;
    default:
      FUNC_1 ("Parsing limit fail. Unknown suffix '%c'.\n", VAR_2);
      FUNC_3 ();
      FUNC_0 (1);
  }
  return VAR_1;
}
