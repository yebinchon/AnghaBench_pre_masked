
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_2__ {scalar_t__ append_protocol; scalar_t__ append_method; } ;


 char* FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char*,char) ;
 char* FUNC_8 (char*) ;
 char* FUNC_9 (int) ;
 char* FUNC_10 (char const*) ;

__attribute__((used)) static char *
FUNC_11 (char *VAR_1, char **VAR_2, char **VAR_3)
{
  char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
  const char *VAR_8, *VAR_9;
  ptrdiff_t VAR_10;

  VAR_8 = FUNC_2 (VAR_1);


  if (VAR_8 == ((void*)0)) {
    VAR_5 = FUNC_10 (VAR_1);
  }

  else {
    VAR_4 = VAR_1 + FUNC_5 (VAR_8);
    if (!(VAR_7 = FUNC_7 (VAR_4, ' ')) || !(VAR_9 = FUNC_3 (++VAR_7)))
      return FUNC_0 ("-");

    VAR_4++;
    if ((VAR_10 = VAR_7 - VAR_4) <= 0)
      return FUNC_0 ("-");

    VAR_5 = FUNC_9 (VAR_10 + 1);
    FUNC_6 (VAR_5, VAR_4, VAR_10);
    VAR_5[VAR_10] = 0;

    if (VAR_0.append_method)
      (*VAR_2) = FUNC_8 (FUNC_10 (VAR_8));

    if (VAR_0.append_protocol)
      (*VAR_3) = FUNC_8 (FUNC_10 (VAR_9));
  }

  if (!(VAR_6 = FUNC_1 (VAR_5)))
    return VAR_5;
  else if (*VAR_6 == '\0') {
    FUNC_4 (VAR_6);
    return VAR_5;
  }

  FUNC_4 (VAR_5);
  return VAR_6;
}
