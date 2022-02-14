
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,long long*,char*) ;

long long FUNC_3 (int VAR_1, const char *VAR_2, long long VAR_3, long long VAR_4) {
  long long VAR_5;
  char VAR_6 = 0;
  if (FUNC_2 (VAR_0, "%lld%c", &VAR_5, &VAR_6) < 1) {
    FUNC_1 ("Parsing limit for option '%c' fail: %s\n", VAR_1, VAR_2);
    FUNC_0 (1);
  }
  switch (VAR_6 | 0x20) {
    case ' ': break;
    case 'k': VAR_5 <<= 10; break;
    case 'm': VAR_5 <<= 20; break;
    case 'g': VAR_5 <<= 30; break;
    case 't': VAR_5 <<= 40; break;
    default: FUNC_1 ("Parsing limit fail. Unknown suffix '%c'.\n", VAR_6); FUNC_0 (1);
  }

  if (VAR_5 < VAR_3) {
    FUNC_1 ("Parsing limit for option '%c' fail (limit is too big), limit: %s, min_limit: %lld.\n", VAR_1, VAR_2, VAR_3);
    FUNC_0 (1);
  }

  if (VAR_5 > VAR_4) {
    FUNC_1 ("Parsing limit for option '%c' fail (limit is too small), limit: %s, max_limit: %lld.\n", VAR_1, VAR_2, VAR_4);
    FUNC_0 (1);
  }

  return VAR_5;
}
