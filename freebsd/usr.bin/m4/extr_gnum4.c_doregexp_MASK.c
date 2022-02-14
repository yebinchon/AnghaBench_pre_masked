
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int regmatch_t ;
struct TYPE_7__ {scalar_t__ re_nsub; } ;
typedef TYPE_1__ regex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,TYPE_1__*,char const*,char const*,int *) ;
 int FUNC_1 (char const*,TYPE_1__*,char const*,int *) ;
 int FUNC_2 (int,TYPE_1__*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_1__*,char const*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 char const* FUNC_8 (char const*) ;
 int * FUNC_9 (int *,scalar_t__,int,int *) ;

void
FUNC_10(const char *VAR_3[], int VAR_4)
{
 int VAR_5;
 regex_t VAR_6;
 regmatch_t *VAR_7;
 const char *VAR_8;

 if (VAR_4 <= 3) {
  FUNC_4("Too few arguments to regexp");
  return;
 }

 if (VAR_3[3][0] == '\0' && VAR_2) {
  if (VAR_4 == 4 || VAR_3[4] == ((void*)0))
   return;
  else
   FUNC_5(VAR_3[4]);
 }
 VAR_8 = VAR_2 ? FUNC_8(VAR_3[3]) : VAR_3[3];
 VAR_5 = FUNC_6(&VAR_6, VAR_8, VAR_0|VAR_1);
 if (VAR_5 != 0)
  FUNC_2(VAR_5, &VAR_6, VAR_8);

 VAR_7 = FUNC_9(((void*)0), VAR_6.re_nsub+1, sizeof(regmatch_t), ((void*)0));
 if (VAR_4 == 4 || VAR_3[4] == ((void*)0))
  FUNC_1(VAR_3[2], &VAR_6, VAR_8, VAR_7);
 else
  FUNC_0(VAR_3[2], &VAR_6, VAR_8, VAR_3[4], VAR_7);
 FUNC_3(VAR_7);
 FUNC_7(&VAR_6);
}
