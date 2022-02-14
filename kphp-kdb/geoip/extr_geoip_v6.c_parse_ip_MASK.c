
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6 {int* data; } ;


 int FUNC_0 (int) ;
 char* VAR_0 ;
 size_t VAR_1 ;

struct ipv6 FUNC_1 (void) {
  if (VAR_0[VAR_1] == ',') {
    VAR_1 ++;
  }
  while (VAR_0[VAR_1] == ' ') {
    VAR_1 ++;
  }
  FUNC_0 (VAR_0[VAR_1 ++] == '"');
  int VAR_2 = 0;
  struct ipv6 VAR_3;
  VAR_3.data[0] = 0;

  while (VAR_0[VAR_1] != '"' ) {
    if (VAR_0[VAR_1] == ':') {
      FUNC_0 (VAR_2 <= 6);
      VAR_3.data[++VAR_2] = 0;
    } else {
      char VAR_4 = VAR_0[VAR_1];
      FUNC_0 (('0' <= VAR_4 && VAR_4 <= '9') || (VAR_4 >= 'a' && VAR_4 <= 'f'));
      if (VAR_4 <= '9' && VAR_4 >= '0') {
        VAR_3.data[VAR_2] = VAR_3.data[VAR_2] * 16 + VAR_4 - '0';
      } else {
        VAR_3.data[VAR_2] = VAR_3.data[VAR_2] * 16 + VAR_4 + 10 - 'a';
      }
    }
    VAR_1 ++;
  }

  FUNC_0 (VAR_0[VAR_1 ++] == '"');
  FUNC_0 (!VAR_0[VAR_1] || VAR_0[VAR_1] == ',' || VAR_0[VAR_1] == 10 || VAR_0[VAR_1] == 13);
  return VAR_3;
}
