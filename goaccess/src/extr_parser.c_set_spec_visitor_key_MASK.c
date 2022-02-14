
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ date_spec_hr; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,size_t) ;
 char* FUNC_2 (char*,char) ;
 size_t FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6 (char **VAR_1, const char *VAR_2)
{
  size_t VAR_3 = 0, VAR_4 = 0;
  char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);

  VAR_6 = FUNC_5 (VAR_2);
  if (VAR_0.date_spec_hr && (VAR_7 = FUNC_2 (VAR_6, ':')) && (VAR_7 - VAR_6) > 0)
    *VAR_7 = '\0';

  VAR_3 = FUNC_3 (*VAR_1);
  VAR_4 = FUNC_3 (VAR_6);

  VAR_5 = FUNC_4 (VAR_3 + VAR_4 + 1);
  FUNC_1 (VAR_5, *VAR_1, VAR_3);
  FUNC_1 (VAR_5 + VAR_3, VAR_6, VAR_4 + 1);

  FUNC_0 (*VAR_1);
  FUNC_0 (VAR_6);
  *VAR_1 = VAR_5;
}
