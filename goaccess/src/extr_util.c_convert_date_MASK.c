
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tm ;
struct tm {int tm_year; } ;
struct TYPE_3__ {int tm_year; } ;


 int FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (struct tm*,int ,int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_3 (char const*,char const*,struct tm*) ;
 scalar_t__ FUNC_4 (char*,int,char const*,struct tm*) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;

int
FUNC_7 (char *VAR_2, const char *VAR_3, const char *VAR_4, const char *VAR_5,
              int VAR_6)
{
  struct tm VAR_7;

  FUNC_2 (&VAR_7, 0, sizeof (VAR_7));
  VAR_1 = FUNC_6 (((void*)0));
  VAR_0 = FUNC_1 (&VAR_1);

  if (FUNC_3 (VAR_3, VAR_4, &VAR_7) != 0)
    return 1;


  if (!FUNC_0 (VAR_4) && FUNC_5 (VAR_4, "Yy") == ((void*)0))
    VAR_7.tm_year = VAR_0->tm_year;

  if (FUNC_4 (VAR_2, VAR_6, VAR_5, &VAR_7) <= 0)
    return 1;

  return 0;
}
