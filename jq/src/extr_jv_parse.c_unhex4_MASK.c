
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char* VAR_0) {
  int VAR_1 = 0;
  for (int VAR_2=0; VAR_2<4; VAR_2++) {
    char VAR_3 = *VAR_0++;
    int VAR_4;
    if ('0' <= VAR_3 && VAR_3 <= '9') VAR_4 = VAR_3 - '0';
    else if ('a' <= VAR_3 && VAR_3 <= 'f') VAR_4 = VAR_3 - 'a' + 10;
    else if ('A' <= VAR_3 && VAR_3 <= 'F') VAR_4 = VAR_3 - 'A' + 10;
    else return -1;
    VAR_1 <<= 4;
    VAR_1 |= VAR_4;
  }
  return VAR_1;
}
