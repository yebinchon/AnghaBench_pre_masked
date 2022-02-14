
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const mrb_value ;
typedef int mrb_state ;
typedef int mrb_args_int ;


 int FUNC_0 (int *,char*,char**,int*) ;
 int FUNC_1 (int *,int const,char const*,int) ;
 int const FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state* VAR_0, mrb_value VAR_1) {
  char* VAR_2; mrb_args_int VAR_3;
  FUNC_0(VAR_0, "s", &VAR_2, &VAR_3);

  mrb_value const VAR_4 = FUNC_2(VAR_0, ((void*)0), 0);
  char VAR_5 = 0;
  int VAR_6 = 0;
  char const* VAR_7 = VAR_2;

  for(; VAR_7 < (VAR_2 + VAR_3); ++VAR_7) {
    switch(*VAR_7) {
      case '\n': VAR_5 = 'n'; break;
      case '\t': VAR_5 = 't'; break;
      case '\r': VAR_5 = 'r'; break;
      case '\f': VAR_5 = 'f'; break;

      case ' ':
      case '#':
      case '$':
      case '(':
      case ')':
      case '*':
      case '+':
      case '-':
      case '.':
      case '?':
      case '[':
      case '\\':
      case ']':
      case '^':
      case '{':
      case '|':
      case '}':
        VAR_5 = *VAR_7; break;

      default: ++VAR_6; continue;
    }

    FUNC_1(VAR_0, VAR_4, VAR_7 - VAR_6, VAR_6);
    VAR_6 = 0;

    char const VAR_8[] = { '\\', VAR_5 };
    FUNC_1(VAR_0, VAR_4, VAR_8, 2);
  }
  FUNC_1(VAR_0, VAR_4, VAR_7 - VAR_6, VAR_6);
  return VAR_4;
}
