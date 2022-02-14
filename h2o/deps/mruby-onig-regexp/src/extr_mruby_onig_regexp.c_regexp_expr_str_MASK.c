
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (int *,int ,char*,int) ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state *VAR_0, mrb_value VAR_1, const char *VAR_2, int VAR_3) {
  const char *VAR_4;
  char VAR_5[5];

  VAR_4 = (const char *) VAR_2 + VAR_3;
  for (;VAR_2 < VAR_4; VAR_2++) {
    unsigned char VAR_6, VAR_7;

    VAR_6 = *VAR_2;
    if (VAR_6 == '/') {
      VAR_5[0] = '\\'; VAR_5[1] = VAR_6;
      FUNC_1(VAR_0, VAR_1, VAR_5, 2);
      continue;
    }
    if (FUNC_0(VAR_6)) {
      VAR_5[0] = VAR_6;
      FUNC_1(VAR_0, VAR_1, VAR_5, 1);
      continue;
    }
    switch (VAR_6) {
      case '\n': VAR_7 = 'n'; break;
      case '\r': VAR_7 = 'r'; break;
      case '\t': VAR_7 = 't'; break;
      default: VAR_7 = 0; break;
    }
    if (VAR_7) {
      VAR_5[0] = '\\';
      VAR_5[1] = (char)VAR_7;
      FUNC_1(VAR_0, VAR_1, VAR_5, 2);
      continue;
    }
    else {
      VAR_5[0] = '\\';
      VAR_5[3] = '0' + VAR_6 % 8; VAR_6 /= 8;
      VAR_5[2] = '0' + VAR_6 % 8; VAR_6 /= 8;
      VAR_5[1] = '0' + VAR_6 % 8;
      FUNC_1(VAR_0, VAR_1, VAR_5, 4);
      continue;
    }
  }
  return VAR_1;
}
