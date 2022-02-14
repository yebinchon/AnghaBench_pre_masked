
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int rm_eo; int rm_so; } ;
typedef TYPE_1__ regmatch_t ;
struct TYPE_11__ {scalar_t__ re_nsub; } ;
typedef TYPE_2__ regex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,TYPE_2__*,char const*,TYPE_1__*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int,TYPE_2__*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_2__*,char const*,scalar_t__,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_2, regex_t *VAR_3, const char *VAR_4,
    const char *VAR_5, regmatch_t *VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;
 const char *VAR_9 = ((void*)0);

 while ((VAR_7 = FUNC_5(VAR_3, VAR_2, VAR_3->re_nsub+1, VAR_6, VAR_8)) == 0) {
  if (VAR_6[0].rm_eo != 0) {
   if (VAR_2[VAR_6[0].rm_eo-1] == '\n')
    VAR_8 = 0;
   else
    VAR_8 = VAR_1;
  }





  if (VAR_6[0].rm_so == VAR_6[0].rm_eo &&
      VAR_2 + VAR_6[0].rm_so == VAR_9) {
   if (*VAR_2 == '\0')
    return;
   FUNC_1(*VAR_2);
   if (*VAR_2++ == '\n')
    VAR_8 = 0;
   else
    VAR_8 = VAR_1;
   continue;
  }
  VAR_9 = VAR_2 + VAR_6[0].rm_so;
  FUNC_2(VAR_2, VAR_6[0].rm_so);
  FUNC_0(VAR_2, VAR_3, VAR_5, VAR_6);
  VAR_2 += VAR_6[0].rm_eo;
 }
 if (VAR_7 != VAR_0)
  FUNC_3(VAR_7, VAR_3, VAR_4);
 FUNC_4(VAR_2);
}
