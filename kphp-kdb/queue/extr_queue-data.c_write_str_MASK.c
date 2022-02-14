
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char,char) ;
 int FUNC_1 (char*,char*,char) ;

int FUNC_2 (char *VAR_0, char *VAR_1, int VAR_2) {
  char *VAR_3 = VAR_0;
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
    char VAR_5 = VAR_1[VAR_4];

    switch (VAR_5) {
      case '"': *VAR_0++ = '\\', *VAR_0++ = '"'; break;;
      case '\\': *VAR_0++ = '\\', *VAR_0++ = '\\'; break;;
      case '/': *VAR_0++ = '\\', *VAR_0++ = '/'; break;;
      case '\b': *VAR_0++ = '\\', *VAR_0++ = 'b'; break;;
      case '\f': *VAR_0++ = '\\', *VAR_0++ = 'f'; break;;
      case '\n': *VAR_0++ = '\\', *VAR_0++ = 'n'; break;;
      case '\r': *VAR_0++ = '\\', *VAR_0++ = 'r'; break;;
      case '\t': *VAR_0++ = '\\', *VAR_0++ = 't'; break;;
      default:
        if ((unsigned char)VAR_5 >= 32) {
          *VAR_0++ = VAR_5;
        } else {

          VAR_0 += FUNC_1 (VAR_0,"\\u%04x", VAR_5);
        }
    }

  }
  return VAR_0 - VAR_3;
}
