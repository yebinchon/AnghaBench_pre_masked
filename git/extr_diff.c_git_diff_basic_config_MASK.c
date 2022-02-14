
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct TYPE_3__ {int dirstat_permille; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*) ;
 TYPE_1__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*,char const*,void*) ;
 scalar_t__ FUNC_6 (char const*,char const*,void*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,char const*,struct strbuf*) ;
 scalar_t__ FUNC_9 (char const*,char*,char const**) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (char const*,char*) ;
 scalar_t__ FUNC_12 (char const*,char const*) ;
 int FUNC_13 (int ,int ) ;

int FUNC_14(const char *VAR_6, const char *VAR_7, void *VAR_8)
{
 const char *VAR_9;

 if (!FUNC_11(VAR_6, "diff.renamelimit")) {
  VAR_4 = FUNC_4(VAR_6, VAR_7);
  return 0;
 }

 if (FUNC_12(VAR_6, VAR_7) < 0)
  return -1;

 if (FUNC_9(VAR_6, "diff.color.", &VAR_9) ||
     FUNC_9(VAR_6, "color.diff.", &VAR_9)) {
  int VAR_10 = FUNC_7(VAR_9);
  if (VAR_10 < 0)
   return 0;
  if (!VAR_7)
   return FUNC_2(VAR_6);
  return FUNC_1(VAR_7, VAR_2[VAR_10]);
 }


 if (!FUNC_11(VAR_6, "diff.suppressblankempty") ||

   !FUNC_11(VAR_6, "diff.suppress-blank-empty")) {
  VAR_5 = FUNC_3(VAR_6, VAR_7);
  return 0;
 }

 if (!FUNC_11(VAR_6, "diff.dirstat")) {
  struct strbuf VAR_11 = VAR_0;
  VAR_1.dirstat_permille = VAR_3;
  if (FUNC_8(&VAR_1, VAR_7, &VAR_11))
   FUNC_13(FUNC_0("Found errors in 'diff.dirstat' config variable:\n%s"),
    VAR_11.buf);
  FUNC_10(&VAR_11);
  VAR_3 = VAR_1.dirstat_permille;
  return 0;
 }

 if (FUNC_6(VAR_6, VAR_7, VAR_8) < 0)
  return -1;

 return FUNC_5(VAR_6, VAR_7, VAR_8);
}
