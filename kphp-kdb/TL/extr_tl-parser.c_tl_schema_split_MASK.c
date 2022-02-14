
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_compiler {int dummy; } ;
struct tl_buffer {char* buff; int pos; } ;
typedef enum tl_schema_split_state { ____Placeholder_tl_schema_split_state } tl_schema_split_state ;


 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (struct tl_compiler*,int,char*) ;
 int FUNC_4 (struct tl_compiler*,char const*,char const*,char*,...) ;
 int FUNC_5 (struct tl_buffer*,char const) ;
 int FUNC_6 (struct tl_buffer*) ;
 int FUNC_7 (struct tl_buffer*) ;





__attribute__((used)) static int FUNC_8 (struct tl_compiler *VAR_0, const char *VAR_1) {
  int VAR_2 = 0;
  const char *VAR_3;
  struct tl_buffer VAR_4;
  FUNC_7 (&VAR_4);

  enum tl_schema_split_state VAR_5 = 128;
  for (VAR_3 = VAR_1; *VAR_3; VAR_3++) {
    switch (VAR_5) {
    case 128:
      if (FUNC_1 (*VAR_3)) {
      } else if (*VAR_3 == '/') {
        VAR_5 = 131;
      } else if (FUNC_0 (*VAR_3)) {
        VAR_4.pos = 0;
        FUNC_5 (&VAR_4, *VAR_3);
        VAR_5 = 130;
      } else if (*VAR_3 == '-') {
        if (!FUNC_2 (VAR_3, "---functions---", 15)) {
          if (++VAR_2 > 1) {
            FUNC_6 (&VAR_4);
            return FUNC_4 (VAR_0, VAR_1, VAR_3, "too many ---functions--- sections");
          }
          VAR_3 += 14;
        } else {
          FUNC_6 (&VAR_4);
          return FUNC_4 (VAR_0, VAR_1, VAR_3, "expected ---functions---");
        }
      } else {
        FUNC_6 (&VAR_4);
        return FUNC_4 (VAR_0, VAR_1, VAR_3, "illegal first expression's character (%c)", *VAR_3);
      }
    break;
    case 131:
      if (*VAR_3 == '/') {
        VAR_5 = 129;
      } else {
        FUNC_6 (&VAR_4);
        return FUNC_4 (VAR_0, VAR_1, VAR_3, "expected second slash, but %c found", *VAR_3);
      }
    break;
    case 129:
      if (*VAR_3 == '\n') {
        VAR_5 = 128;
      }
    break;
    case 130:
      if (*VAR_3 == ';') {
        FUNC_5 (&VAR_4, 0);
        FUNC_3 (VAR_0, VAR_2, VAR_4.buff);
        VAR_5 = 128;
      } else if (FUNC_1 (*VAR_3)) {
        if (' ' != VAR_4.buff[VAR_4.pos-1]) {
          FUNC_5 (&VAR_4, ' ');
        }
      } else {
        FUNC_5 (&VAR_4, *VAR_3);
      }
    break;
    }
  }

  FUNC_6 (&VAR_4);

  if (VAR_5 == 130) {
    return FUNC_4 (VAR_0, VAR_1, VAR_3, "last expression doesn't end by semicolon");
  }

  if (VAR_5 == 131) {
    return FUNC_4 (VAR_0, VAR_1, VAR_3, "found EOF, but expected second slash");
  }

  if (!VAR_2) {
    return FUNC_4 (VAR_0, VAR_1, VAR_3, "don't find section '---functions---'");
  }

  return 0;
}
