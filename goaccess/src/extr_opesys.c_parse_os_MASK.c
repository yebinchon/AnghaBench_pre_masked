
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ real_os; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char const*,char) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 char const*** VAR_2 ;
 char* FUNC_5 (char*) ;
 char const* FUNC_6 (char*,int) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*,int) ;
 char* FUNC_9 (char const*,char) ;
 int * FUNC_10 (char const*,char*) ;
 char* FUNC_11 (char const*) ;
 int FUNC_12 (char*,char const*,int ) ;

__attribute__((used)) static char *
FUNC_13 (const char *VAR_3, char *VAR_4, char *VAR_5, int VAR_6)
{
  char *VAR_7;
  int VAR_8 = 0;

  FUNC_12 (VAR_5, VAR_2[VAR_6][1], VAR_0);

  if ((FUNC_10 (VAR_3, "Windows")) != ((void*)0))
    return VAR_1.real_os && (VAR_7 = FUNC_4 (VAR_4)) ? VAR_7 : FUNC_11 (VAR_2[VAR_6][0]);

  if ((FUNC_10 (VAR_4, "Android")) != ((void*)0)) {
    VAR_4 = FUNC_5 (VAR_4);
    return VAR_1.real_os ? FUNC_2 (VAR_4) : FUNC_11 (VAR_4);
  }

  if (FUNC_10 (VAR_4, "iPad") || FUNC_10 (VAR_4, "iPod"))
    return FUNC_11 (FUNC_6 (VAR_4, 4));
  if (FUNC_10 (VAR_4, "iPhone"))
    return FUNC_11 (FUNC_6 (VAR_4, 6));

  if ((FUNC_10 (VAR_4, "OS X")) != ((void*)0)) {
    VAR_4 = FUNC_7 (VAR_4);
    return VAR_1.real_os ? FUNC_3 (VAR_4) : FUNC_11 (VAR_4);
  }


  if ((FUNC_10 (VAR_4, "Darwin")) != ((void*)0)) {
    if ((VAR_7 = FUNC_9 (VAR_3, ' ')))
      *VAR_7 = 0;
    return FUNC_11 (VAR_3);
  }

  VAR_8 = FUNC_1 (VAR_2[VAR_6][0], ' ');

  return FUNC_0 (FUNC_8 (VAR_4, VAR_8));
}
