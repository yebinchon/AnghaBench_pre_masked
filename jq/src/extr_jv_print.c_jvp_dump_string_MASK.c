
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef int buf ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (char const*,char const*,int*) ;
 int FUNC_6 (char const*,int,int *,int *,int) ;
 int FUNC_7 (char,int *,int *,int) ;
 int FUNC_8 (char*,int *,int *,int) ;
 int FUNC_9 (char*,int,char*,int,...) ;

__attribute__((used)) static void FUNC_10(jv VAR_1, int VAR_2, FILE* VAR_3, jv* VAR_4, int VAR_5) {
  FUNC_0(FUNC_2(VAR_1) == VAR_0);
  const char* VAR_6 = FUNC_4(VAR_1);
  const char* VAR_7 = VAR_6 + FUNC_3(FUNC_1(VAR_1));
  const char* VAR_8;
  int VAR_9 = 0;
  char VAR_10[32];
  FUNC_7('"', VAR_3, VAR_4, VAR_5);
  while ((VAR_6 = FUNC_5((VAR_8 = VAR_6), VAR_7, &VAR_9))) {
    FUNC_0(VAR_9 != -1);
    int VAR_11 = 0;
    if (0x20 <= VAR_9 && VAR_9 <= 0x7E) {

      if (VAR_9 == '"' || VAR_9 == '\\') {
        FUNC_7('\\', VAR_3, VAR_4, VAR_5);
      }
      FUNC_7(VAR_9, VAR_3, VAR_4, VAR_5);
    } else if (VAR_9 < 0x20 || VAR_9 == 0x7F) {

      switch (VAR_9) {
      case '\b':
        FUNC_7('\\', VAR_3, VAR_4, VAR_5);
        FUNC_7('b', VAR_3, VAR_4, VAR_5);
        break;
      case '\t':
        FUNC_7('\\', VAR_3, VAR_4, VAR_5);
        FUNC_7('t', VAR_3, VAR_4, VAR_5);
        break;
      case '\r':
        FUNC_7('\\', VAR_3, VAR_4, VAR_5);
        FUNC_7('r', VAR_3, VAR_4, VAR_5);
        break;
      case '\n':
        FUNC_7('\\', VAR_3, VAR_4, VAR_5);
        FUNC_7('n', VAR_3, VAR_4, VAR_5);
        break;
      case '\f':
        FUNC_7('\\', VAR_3, VAR_4, VAR_5);
        FUNC_7('f', VAR_3, VAR_4, VAR_5);
        break;
      default:
        VAR_11 = 1;
        break;
      }
    } else {
      if (VAR_2) {
        VAR_11 = 1;
      } else {
        FUNC_6(VAR_8, VAR_6 - VAR_8, VAR_3, VAR_4, VAR_5);
      }
    }
    if (VAR_11) {
      if (VAR_9 <= 0xffff) {
        FUNC_9(VAR_10, sizeof(VAR_10), "\\u%04x", VAR_9);
      } else {
        VAR_9 -= 0x10000;
        FUNC_9(VAR_10, sizeof(VAR_10), "\\u%04x\\u%04x",
                0xD800 | ((VAR_9 & 0xffc00) >> 10),
                0xDC00 | (VAR_9 & 0x003ff));
      }
      FUNC_8(VAR_10, VAR_3, VAR_4, VAR_5);
    }
  }
  FUNC_0(VAR_9 != -1);
  FUNC_7('"', VAR_3, VAR_4, VAR_5);
}
