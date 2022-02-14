
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdemitconf_t ;
struct TYPE_3__ {int rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int,int *,char*,int) ;
 int FUNC_3 (int *,char const*,int,TYPE_1__*,int ) ;

__attribute__((used)) static const char *FUNC_4(xdemitconf_t *VAR_1, const char *VAR_2,
       regex_t *VAR_3)
{
 int VAR_4;
 regmatch_t VAR_5[1];
 while (1) {
  const char *VAR_6, *VAR_7;
  VAR_4 = FUNC_3(VAR_3, VAR_2, 1, VAR_5, 0);
  if (VAR_4 == VAR_0)
   return ((void*)0);
  else if (VAR_4) {
   char VAR_8[1024];
   FUNC_2(VAR_4, VAR_3, VAR_8, 1024);
   FUNC_0("-L parameter: regexec() failed: %s", VAR_8);
  }

  VAR_6 = VAR_2+VAR_5[0].rm_so;
  VAR_7 = VAR_2+VAR_5[0].rm_eo;
  while (VAR_6 > VAR_2 && *VAR_6 != '\n')
   VAR_6--;
  if (*VAR_6 == '\n')
   VAR_6++;
  while (*VAR_7 && *VAR_7 != '\n')
   VAR_7++;
  if (*VAR_7 == '\n')
   VAR_7++;

  if (FUNC_1(VAR_1, (char*) VAR_6, (char*) VAR_7))
   return VAR_6;
  VAR_2 = VAR_7;
 }
}
