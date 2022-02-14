
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int*) ;
 int FUNC_3 (char const*,char const*,void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char const*,char*) ;
 int VAR_2 ;

int FUNC_5(const char *VAR_3, const char *VAR_4, void *VAR_5)
{
 if (!FUNC_4(VAR_3, "merge.log") || !FUNC_4(VAR_3, "merge.summary")) {
  int VAR_6;
  VAR_1 = FUNC_2(VAR_3, VAR_4, &VAR_6);
  if (!VAR_6 && VAR_1 < 0)
   return FUNC_0("%s: negative length %s", VAR_3, VAR_4);
  if (VAR_6 && VAR_1)
   VAR_1 = VAR_0;
 } else if (!FUNC_4(VAR_3, "merge.branchdesc")) {
  VAR_2 = FUNC_1(VAR_3, VAR_4);
 } else {
  return FUNC_3(VAR_3, VAR_4, VAR_5);
 }
 return 0;
}
