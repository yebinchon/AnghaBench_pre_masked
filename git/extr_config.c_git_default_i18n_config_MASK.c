
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,char const*,char const*) ;
 int VAR_1 ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, const char *VAR_3)
{
 if (!FUNC_1(VAR_2, "i18n.commitencoding"))
  return FUNC_0(&VAR_0, VAR_2, VAR_3);

 if (!FUNC_1(VAR_2, "i18n.logoutputencoding"))
  return FUNC_0(&VAR_1, VAR_2, VAR_3);


 return 0;
}
