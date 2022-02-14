
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* path; char* method; char* protocol; } ;
typedef TYPE_1__ WSHeaders ;


 scalar_t__ FUNC_0 (unsigned char) ;
 char* FUNC_1 (char*,char) ;
 int * FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,char**,char**) ;
 int FUNC_5 (TYPE_1__*,char*,char*) ;

__attribute__((used)) static int
FUNC_6 (char *VAR_0, WSHeaders * VAR_1)
{
  char *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5, *VAR_6;

  if (VAR_0[0] == '\n' || VAR_0[0] == '\r')
    return 1;

  if ((FUNC_3 (VAR_0, "GET ")) || (FUNC_3 (VAR_0, "get "))) {
    if ((VAR_2 = FUNC_4 (VAR_0, &VAR_3, &VAR_4)) == ((void*)0))
      return 1;
    VAR_1->path = VAR_2;
    VAR_1->method = VAR_3;
    VAR_1->protocol = VAR_4;

    return 0;
  }

  if ((VAR_5 = FUNC_1 (VAR_0, ':')) == ((void*)0))
    return 1;

  VAR_6 = VAR_5 + 1;
  while (VAR_5 != VAR_0 && FUNC_0 ((unsigned char) *(VAR_5 - 1)))
    VAR_5--;

  if (VAR_5 == VAR_0)
    return 1;

  *VAR_5 = '\0';
  if (FUNC_2 (VAR_0, " \t") != ((void*)0)) {
    *VAR_5 = ' ';
    return 1;
  }
  while (FUNC_0 ((unsigned char) *VAR_6))
    VAR_6++;

  FUNC_5 (VAR_1, VAR_0, VAR_6);

  return 0;
}
