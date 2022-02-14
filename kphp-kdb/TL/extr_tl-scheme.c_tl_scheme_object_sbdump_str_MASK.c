
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char const) ;
 int VAR_1 ;
 int FUNC_2 (struct tl_buffer*,char const) ;
 int FUNC_3 (struct tl_buffer*,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4 (struct tl_buffer *VAR_3, const char *VAR_4) {
  const char *VAR_5;
  if (VAR_2 >= 4) {
    FUNC_0 (VAR_1, "tl_scheme_object_bdump_str:");
    for (VAR_5 = VAR_4; *VAR_5; VAR_5++) {
      FUNC_0 (VAR_1, " %02x", (int) (unsigned char) *VAR_5);
    }
    FUNC_0 (VAR_1, "\n");
    for (VAR_5 = VAR_4; *VAR_5; VAR_5++) {
      FUNC_0 (VAR_1, "  %c", *VAR_5);
    }
    FUNC_0 (VAR_1, "\n");
  }
  FUNC_2 (VAR_3, '"');
  for (VAR_5 = VAR_4; *VAR_5; VAR_5++) {
    switch (*VAR_5) {
      case '\n':
        FUNC_2 (VAR_3, '\\');
        FUNC_2 (VAR_3, 'n');
      break;
      case '\r':
        FUNC_2 (VAR_3, '\\');
        FUNC_2 (VAR_3, 'r');
      break;
      case '\t':
        FUNC_2 (VAR_3, '\\');
        FUNC_2 (VAR_3, 't');
      break;
      case '\\':
        FUNC_2 (VAR_3, '\\');
        FUNC_2 (VAR_3, '\\');
      break;
      case '"':
        FUNC_2 (VAR_3, '\\');
        FUNC_2 (VAR_3, '"');
      break;
      default:
        if (FUNC_1 (*VAR_5) || !VAR_0) {
          FUNC_2 (VAR_3, *VAR_5);
        } else {
          FUNC_3 (VAR_3, "\\x%02x", (int) (unsigned char) *VAR_5);
        }
      break;
    }
  }
  FUNC_2 (VAR_3, '"');
}
