
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 (char,char*,int*,int ) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (char,int *,char const**,int ,int ) ;
 struct option FUNC_4 (int*,int ) ;
 int VAR_0 ;
 int FUNC_5 (char const*,int,int,int) ;
 int FUNC_6 (char const*,char const*,char const*) ;
 int FUNC_7 (int *,char const*,int *,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 (char const*,char*) ;
 int FUNC_13 (int ,struct option*) ;

int FUNC_14(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 const char *VAR_10 = ((void*)0);
 struct option VAR_11[] = {
  FUNC_4(&VAR_6,
   FUNC_0("suppress error message for non-symbolic (detached) refs")),
  FUNC_1('d', "delete", &VAR_7, FUNC_0("delete symbolic ref")),
  FUNC_1(0, "short", &VAR_8, FUNC_0("shorten ref output")),
  FUNC_3('m', ((void*)0), &VAR_10, FUNC_0("reason"), FUNC_0("reason of the update")),
  FUNC_2(),
 };

 FUNC_9(VAR_1, ((void*)0));
 VAR_3 = FUNC_10(VAR_3, VAR_4, VAR_5, VAR_11,
        VAR_2, 0);
 if (VAR_10 && !*VAR_10)
  FUNC_8("Refusing to perform update with empty message");

 if (VAR_7) {
  if (VAR_3 != 1)
   FUNC_13(VAR_2, VAR_11);
  VAR_9 = FUNC_5(VAR_4[0], 1, 0, 0);
  if (VAR_9)
   FUNC_8("Cannot delete %s, not a symbolic ref", VAR_4[0]);
  if (!FUNC_12(VAR_4[0], "HEAD"))
   FUNC_8("deleting '%s' is not allowed", VAR_4[0]);
  return FUNC_7(((void*)0), VAR_4[0], ((void*)0), VAR_0);
 }

 switch (VAR_3) {
 case 1:
  VAR_9 = FUNC_5(VAR_4[0], VAR_6, VAR_8, 1);
  break;
 case 2:
  if (!FUNC_12(VAR_4[0], "HEAD") &&
      !FUNC_11(VAR_4[1], "refs/"))
   FUNC_8("Refusing to point HEAD outside of refs/");
  VAR_9 = !!FUNC_6(VAR_4[0], VAR_4[1], VAR_10);
  break;
 default:
  FUNC_13(VAR_2, VAR_11);
 }
 return VAR_9;
}
