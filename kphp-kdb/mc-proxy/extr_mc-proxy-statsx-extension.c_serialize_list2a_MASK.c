
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char,...) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static char *FUNC_2 (char *VAR_0, const char *VAR_1, int *VAR_2, int VAR_3) {
  int VAR_4 = 0;
  while (VAR_4 < VAR_3 && VAR_2[2 * VAR_4 + 1]) {
    VAR_4 ++;
  }
  if (!VAR_4) {
    return VAR_0;
  }
  VAR_0 += FUNC_0 (VAR_0, "s:%ld:\"%s\";a:%d:{", (long) FUNC_1 (VAR_1), VAR_1, VAR_4);
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < 2*VAR_4; VAR_5++) {
    VAR_0 += (VAR_5&1) ? FUNC_0 (VAR_0, "i:%d;", VAR_2[VAR_5]) : FUNC_0(VAR_0, "s:3:\"%c%c%c\";", (char)((VAR_2[VAR_5]>>16) & 0xff), (char)((VAR_2[VAR_5]>>8) & 0xff), (char)(VAR_2[VAR_5] & 0xff));
  }
  *VAR_0++ = '}';
  return VAR_0;
}
