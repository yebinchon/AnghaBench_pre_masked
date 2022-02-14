
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char,char) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5 (char *VAR_0, char **VAR_1)
{
  char *VAR_2, *VAR_3, *VAR_4, *VAR_5;
  int VAR_6 = 0;

  if (!(FUNC_3 (VAR_0, "http://www.google.")) &&
      !(FUNC_3 (VAR_0, "http://webcache.googleusercontent.com/")) &&
      !(FUNC_3 (VAR_0, "http://translate.googleusercontent.com/")) &&
      !(FUNC_3 (VAR_0, "https://www.google.")) &&
      !(FUNC_3 (VAR_0, "https://webcache.googleusercontent.com/")) &&
      !(FUNC_3 (VAR_0, "https://translate.googleusercontent.com/")))
    return 1;


  if ((VAR_2 = FUNC_3 (VAR_0, "/+&")) != ((void*)0))
    return 1;

  else if ((VAR_2 = FUNC_3 (VAR_0, "/+")) != ((void*)0))
    VAR_2 += 2;

  else if ((VAR_2 = FUNC_3 (VAR_0, "q=cache:")) != ((void*)0)) {
    VAR_4 = FUNC_2 (VAR_2, '+');
    if (VAR_4)
      VAR_2 += VAR_4 - VAR_2 + 1;
  }

  else if ((VAR_2 = FUNC_3 (VAR_0, "&q=")) != ((void*)0) ||
           (VAR_2 = FUNC_3 (VAR_0, "?q=")) != ((void*)0))
    VAR_2 += 3;
  else if ((VAR_2 = FUNC_3 (VAR_0, "%26q%3D")) != ((void*)0) ||
           (VAR_2 = FUNC_3 (VAR_0, "%3Fq%3D")) != ((void*)0))
    VAR_6 = 1, VAR_2 += 7;
  else
    return 1;

  if (!VAR_6 && (VAR_3 = FUNC_2 (VAR_2, '&')) != ((void*)0))
    *VAR_3 = '\0';
  else if (VAR_6 && (VAR_3 = FUNC_3 (VAR_2, "%26")) != ((void*)0))
    *VAR_3 = '\0';

  VAR_5 = FUNC_1 (VAR_2);
  if (VAR_5 == ((void*)0) || *VAR_5 == '\0')
    return 1;

  VAR_5 = FUNC_0 (VAR_5, '+', ' ');
  *VAR_1 = FUNC_4 (VAR_5);

  return 0;
}
