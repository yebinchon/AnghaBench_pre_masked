
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char const* pw_dir; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 char* FUNC_2 (char*) ;
 struct passwd* FUNC_3 (char*) ;
 struct passwd* FUNC_4 (int ) ;
 int FUNC_5 (char const) ;
 scalar_t__ FUNC_6 (char const) ;
 char* FUNC_7 (char const*,char) ;
 size_t FUNC_8 (char const*) ;
 int FUNC_9 (char*,char const*,int) ;

const char *
FUNC_10(const char *VAR_1, char *VAR_2)
{
  char *VAR_3, *VAR_4, *VAR_5;
  struct passwd *VAR_6;
  int VAR_7;
  size_t VAR_8;
  const char *VAR_9;

  VAR_7 = 0;
  VAR_4 = VAR_2;
  VAR_5 = VAR_2 + VAR_0 - 1;

  while(FUNC_6(*VAR_1))
    VAR_1++;

  while (*VAR_1 != '\0') {
    switch (*VAR_1) {
      case '"':
        VAR_7 = !VAR_7;
        *VAR_2++ = *VAR_1++;
        break;
      case '\\':
        switch (*++VAR_1) {
          case '$':
          case '~':
            break;

          default:
            *VAR_2++ = '\\';
            break;
        }
        *VAR_2++ = *VAR_1++;
        break;
      case '$':
        if (VAR_1[1] == '$') {
          *VAR_2 = '\0';
          VAR_1 += 2;
        } else if (VAR_1[1] == '{') {
          VAR_3 = FUNC_7(VAR_1+2, '}');
          if (VAR_3) {
            VAR_8 = VAR_3 - VAR_1 - 2;
            if (VAR_5 - VAR_2 < (int)VAR_8 )
              VAR_8 = VAR_5 - VAR_2;
            if (VAR_8) {
              FUNC_9(VAR_2, VAR_1+2, VAR_8);
              VAR_2[VAR_8] = '\0';
              VAR_1 = VAR_3+1;
            } else {
              *VAR_2++ = *VAR_1++;
              continue;
            }
          } else {
            *VAR_2++ = *VAR_1++;
            continue;
          }
        } else {
          VAR_3 = VAR_2;
          for (VAR_1++; (FUNC_5(*VAR_1) || *VAR_1 == '_') && VAR_3 < VAR_5; VAR_1++)
            *VAR_3++ = *VAR_1;
          *VAR_3 = '\0';
        }
        if (*VAR_2 == '\0')
          *VAR_2++ = '$';
        else if ((VAR_9 = FUNC_2(VAR_2)) != ((void*)0)) {
          FUNC_9(VAR_2, VAR_9, VAR_5 - VAR_2);
          *VAR_5 = '\0';
          VAR_2 += FUNC_8(VAR_2);
        }
        break;

      case '~':
        VAR_3 = FUNC_7(++VAR_1, '/');
        VAR_8 = VAR_3 ? (size_t)(VAR_3 - VAR_1) : FUNC_8(VAR_1);
        if (VAR_8 == 0)
          VAR_6 = FUNC_4(FUNC_0());
        else {
          FUNC_9(VAR_2, VAR_1, VAR_8);
          VAR_2[VAR_8] = '\0';
          VAR_6 = FUNC_3(VAR_2);
        }
        if (VAR_6 == ((void*)0))
          *VAR_2++ = '~';
        else {
          FUNC_9(VAR_2, VAR_6->pw_dir, VAR_5 - VAR_2);
          *VAR_5 = '\0';
          VAR_2 += FUNC_8(VAR_2);
          VAR_1 += VAR_8;
        }
        FUNC_1();
        break;

      default:
        *VAR_2++ = *VAR_1++;
        break;
    }
  }

  while (VAR_2 > VAR_4) {
    VAR_2--;
    if (!FUNC_6(*VAR_2)) {
      VAR_2++;
      break;
    }
  }
  *VAR_2 = '\0';

  return VAR_1;
}
