
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*) ;

int FUNC_7(const char *VAR_4, const char *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_3 == VAR_1)
  goto try_rename;
 else if (FUNC_4(VAR_4, VAR_5))
  VAR_6 = VAR_2;
 if (VAR_6 && VAR_6 != VAR_0) {
 try_rename:
  if (!FUNC_5(VAR_4, VAR_5))
   goto out;
  VAR_6 = VAR_2;
 }
 FUNC_6(VAR_4);
 if (VAR_6) {
  if (VAR_6 != VAR_0) {
   return FUNC_3(FUNC_0("unable to write file %s"), VAR_5);
  }

 }

out:
 if (FUNC_1(VAR_5))
  return FUNC_2(FUNC_0("unable to set permission to '%s'"), VAR_5);
 return 0;
}
