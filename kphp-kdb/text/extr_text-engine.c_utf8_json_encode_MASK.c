
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_1 ;
 char* FUNC_2 (char*,int) ;
 scalar_t__ VAR_2 ;

int FUNC_3 (char *VAR_3, int VAR_4, char *VAR_5, int VAR_6) {
  char *VAR_7 = VAR_3 + VAR_4 - 8;
  char *VAR_8 = VAR_5 + VAR_6;
  char *VAR_9 = VAR_3;
  int VAR_10, VAR_11;

  if ((unsigned) VAR_6 > 0xffffff || VAR_4 <= 8) {
    FUNC_0 (VAR_1, "utf8_json_encode: invalid initial data\n");
    return -1;
  }

  if (VAR_2) {
    while (VAR_5 < VAR_8) {
      if (VAR_9 > VAR_7) {
 FUNC_0 (VAR_1, "utf8_json_encode: buffer overflow\n");
 return -1;
      }
      VAR_10 = *VAR_5++;
      switch (VAR_10) {
      case '"': case '\\': case '/':
 *VAR_9++ = '\\';
 break;
      case '\n':
 *VAR_9++ = '\\';
 VAR_10 = 'n';
 break;
      case '\r':
 *VAR_9++ = '\\';
 VAR_10 = 'r';
 break;
      case '\t':
 *VAR_9++ = '\\';
 VAR_10 = 't';
 break;
      case '\b':
 *VAR_9++ = '\\';
 VAR_10 = 'b';
 break;
      case '\f':
 *VAR_9++ = '\\';
 VAR_10 = 'f';
 break;
      }
      if (!(VAR_10 & -32)) {
 VAR_9 += FUNC_1 (VAR_9, "\\u%04x", VAR_10);
      } else {
 *VAR_9++ = VAR_10;
      }
    }
    return VAR_9 - VAR_3;
  }

  while (VAR_5 < VAR_8) {
    if (VAR_9 > VAR_7) {
      FUNC_0 (VAR_1, "utf8_json_encode: buffer overflow\n");
      return -1;
    }
    VAR_10 = *VAR_5++;
    if (VAR_10 < 0) {
      VAR_11 = VAR_0[VAR_10+128];
      VAR_9 = FUNC_2 (VAR_9, VAR_11);
      continue;
    }
    if (VAR_10 == '&') {
      char *VAR_12 = VAR_5;
      if (VAR_5 == VAR_8) {
        return VAR_9 - VAR_3;
      }
      if (VAR_12[0] == '#') {
        VAR_12++;
        VAR_11 = 0;
        while (VAR_12 < VAR_8 && VAR_12 < VAR_5 + 8 && *VAR_12 >= '0' && *VAR_12 <= '9') {
          VAR_11 = VAR_11 * 10 + (*VAR_12++ - '0');
        }
        if (VAR_12 == VAR_8) {
          return VAR_9 - VAR_3;
        }
        if (*VAR_12 == ';' && VAR_11 > 0 && VAR_11 != '<' && VAR_11 != '>') {
          VAR_5 = VAR_12 + 1;
          VAR_10 = VAR_11;
        }
      } else if (VAR_12[0] >= 'a' && VAR_12[0] <= 'z') {
        while (VAR_12 < VAR_8 && VAR_12 < VAR_5 + 16 && *VAR_12 >= 'a' && *VAR_12 <= 'z') {
          VAR_12++;
        }
        if (VAR_12 == VAR_8) {
          return VAR_9 - VAR_3;
        }
      }
    }
    switch (VAR_10) {
    case '"': case '\\': case '/':
      *VAR_9++ = '\\';
      break;
    case '\n':
      *VAR_9++ = '\\';
      VAR_10 = 'n';
      break;
    case '\r':
      *VAR_9++ = '\\';
      VAR_10 = 'r';
      break;
    case '\t':
      *VAR_9++ = '\\';
      VAR_10 = 't';
      break;
    case '\b':
      *VAR_9++ = '\\';
      VAR_10 = 'b';
      break;
    case '\f':
      *VAR_9++ = '\\';
      VAR_10 = 'f';
      break;
    }
    if (!(VAR_10 & -32)) {
      VAR_9 += FUNC_1 (VAR_9, "\\u%04x", VAR_10);
    } else {
      VAR_9 = FUNC_2 (VAR_9, VAR_10);
    }
  }

  return VAR_9 - VAR_3;
}
