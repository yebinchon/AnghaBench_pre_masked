
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,...) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static char *FUNC_2 (char *VAR_0, const char *VAR_1, int *VAR_2, int VAR_3) {
  VAR_0 += FUNC_0 (VAR_0, "s:%ld:\"%s\";a:%d:{", (long) FUNC_1 (VAR_1), VAR_1, VAR_3);
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < 2*VAR_3; VAR_4++) {
    static char VAR_5[4];
    VAR_5[0] = (char)((VAR_2[VAR_4]>>16) & 0xff);
    VAR_5[1] = (char)((VAR_2[VAR_4]>>8) & 0xff);
    VAR_5[2] = (char)(VAR_2[VAR_4] & 0xff);
    VAR_5[3] = 0;
    VAR_0 += (VAR_4&1) ? FUNC_0 (VAR_0, "i:%d;", VAR_2[VAR_4]) : FUNC_0(VAR_0, "s:%d:\"%s\";", (int)FUNC_1 (VAR_5), VAR_5);
  }
  *VAR_0++ = '}';
  return VAR_0;
}
