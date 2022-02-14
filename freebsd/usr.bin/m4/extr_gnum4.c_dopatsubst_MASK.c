
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int regmatch_t ;
struct TYPE_6__ {scalar_t__ re_nsub; } ;
typedef TYPE_1__ regex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const*,size_t) ;
 int FUNC_2 (char const*,TYPE_1__*,char const*,char const*,int *) ;
 int FUNC_3 (int,TYPE_1__*,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,char const*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 size_t FUNC_10 (char const*) ;
 char const* FUNC_11 (char const*) ;
 int * FUNC_12 (int *,scalar_t__,int,int *) ;

void
FUNC_13(const char *VAR_3[], int VAR_4)
{
 if (VAR_4 <= 3) {
  FUNC_6("Too few arguments to patsubst");
  return;
 }

 if (VAR_3[3][0] == '\0') {
  const char *VAR_5;
  size_t VAR_6;
  if (VAR_4 > 4 && VAR_3[4])
   VAR_6 = FUNC_10(VAR_3[4]);
  else
   VAR_6 = 0;
  for (VAR_5 = VAR_3[2]; *VAR_5 != '\0'; VAR_5++) {
   FUNC_1(VAR_3[4], VAR_6);
   FUNC_0(*VAR_5);
  }
 } else {
  int VAR_7;
  regex_t VAR_8;
  regmatch_t *VAR_9;
  int VAR_10 = VAR_0;
  const char *VAR_11;
  size_t VAR_12 = FUNC_10(VAR_3[3]);

  if (!VAR_2 ||
      (VAR_3[3][0] == '^') ||
      (VAR_12 > 0 && VAR_3[3][VAR_12-1] == '$'))
   VAR_10 |= VAR_1;

  VAR_11 = VAR_2 ? FUNC_11(VAR_3[3]) : VAR_3[3];
  VAR_7 = FUNC_8(&VAR_8, VAR_11, VAR_10);
  if (VAR_7 != 0)
   FUNC_3(VAR_7, &VAR_8, VAR_11);

  VAR_9 = FUNC_12(((void*)0), VAR_8.re_nsub+1, sizeof(regmatch_t),
      ((void*)0));
  FUNC_2(VAR_3[2], &VAR_8, VAR_11,
      VAR_4 > 4 && VAR_3[4] != ((void*)0) ? VAR_3[4] : "", VAR_9);
  FUNC_4(VAR_9);
  FUNC_9(&VAR_8);
 }
 FUNC_7(FUNC_5());
}
