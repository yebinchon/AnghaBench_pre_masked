
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;


 int FUNC_0 (int) ;
 int FUNC_1 (long long,long long) ;
 int FUNC_2 (char*,int,char*,long long,...) ;

__attribute__((used)) static char *FUNC_3 (long long VAR_0) {
  int VAR_1;
  static char VAR_2[32];
  static const struct {
    int shift;
    char *suffix;
  } VAR_3[5] = {
    {.shift = 40, .suffix = "T"},
    {.shift = 30, .suffix = "G"},
    {.shift = 20, .suffix = "M"},
    {.shift = 10, .suffix = "K"},
    {.shift = 0, .suffix = ""},
  };
  VAR_2[0] = 0;
  for (VAR_1 = 0; VAR_1 < 5; VAR_1++) {
    if (VAR_0 >= 1LL << VAR_3[VAR_1].shift) {
      FUNC_0 (FUNC_2 (VAR_2, sizeof (VAR_2), "%.3lf%s", FUNC_1 (VAR_0, 1LL << VAR_3[VAR_1].shift), VAR_3[VAR_1].suffix) < sizeof (VAR_2));
      break;
    }
  }
  if (!VAR_2[0]) {
    FUNC_0 (FUNC_2 (VAR_2, sizeof (VAR_2), "%lld", VAR_0) < sizeof (VAR_2));
  }
  return VAR_2;
}
