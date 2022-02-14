
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*) ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,char*,int *) ;
 int FUNC_4 (char const*,char const*,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_3, const char *VAR_4, void *VAR_5)
{
 if (FUNC_6(VAR_3, "column."))
  return FUNC_3(VAR_3, VAR_4, "help", &VAR_0);
 if (!FUNC_7(VAR_3, "help.format")) {
  if (!VAR_4)
   return FUNC_2(VAR_3);
  VAR_1 = FUNC_5(VAR_4);
  return 0;
 }
 if (!FUNC_7(VAR_3, "help.htmlpath")) {
  if (!VAR_4)
   return FUNC_2(VAR_3);
  VAR_2 = FUNC_8(VAR_4);
  return 0;
 }
 if (!FUNC_7(VAR_3, "man.viewer")) {
  if (!VAR_4)
   return FUNC_2(VAR_3);
  FUNC_0(VAR_4);
  return 0;
 }
 if (FUNC_6(VAR_3, "man."))
  return FUNC_1(VAR_3, VAR_4);

 return FUNC_4(VAR_3, VAR_4, VAR_5);
}
