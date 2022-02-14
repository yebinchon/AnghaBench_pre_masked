
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oidvalue {int dummy; } ;
struct oidname {int dummy; } ;
struct oidformat {int dummy; } ;
struct oiddescription {int dummy; } ;
struct oid {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char,int *) ;
 scalar_t__ FUNC_2 (struct oid const*,struct oiddescription*) ;
 int FUNC_3 (struct oid const*,struct oidformat*) ;
 int FUNC_4 (struct oid const*,struct oidname*) ;
 int FUNC_5 (struct oid const*,struct oidformat*,struct oidvalue*) ;
 int FUNC_6 (struct oiddescription*,int *) ;
 int FUNC_7 (struct oidname*) ;
 int FUNC_8 (struct oidname*,struct oidformat*,int *) ;
 int FUNC_9 (struct oidvalue*,int *) ;

__attribute__((used)) static void
FUNC_10(const struct oid *VAR_0, struct oidname *VAR_1, bool VAR_2,
    FILE *VAR_3)
{
 struct oidformat VAR_4;
 struct oidvalue VAR_5;
 struct oiddescription VAR_6;

 if (!FUNC_3(VAR_0, &VAR_4) || !FUNC_5(VAR_0, &VAR_4, &VAR_5))
  return;
 FUNC_4(VAR_0, VAR_1);







 if (VAR_2 && !FUNC_7(VAR_1) &&
     FUNC_2(VAR_0, &VAR_6)) {
  FUNC_0(VAR_3, "# HELP ");
  FUNC_8(VAR_1, &VAR_4, VAR_3);
  FUNC_1(' ', VAR_3);
  FUNC_6(&VAR_6, VAR_3);
  FUNC_1('\n', VAR_3);
 }


 FUNC_8(VAR_1, &VAR_4, VAR_3);
 FUNC_1(' ', VAR_3);
 FUNC_9(&VAR_5, VAR_3);
 FUNC_1('\n', VAR_3);
}
