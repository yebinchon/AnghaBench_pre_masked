
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char const**,char const*) ;
 int FUNC_2 (int,char const**,char const*) ;
 int FUNC_3 (int,char const**,char const*) ;
 int FUNC_4 (int,char const**,char const*) ;
 int VAR_0 ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ) ;

int FUNC_7(int VAR_1, const char **VAR_2, const char *VAR_3)
{
 if (VAR_1 > 1 && !FUNC_5(VAR_2[1], "-h"))
  FUNC_6(FUNC_0(VAR_0));


 if (VAR_1 < 2 || *VAR_2[1] == '-')
  return FUNC_1(VAR_1, VAR_2, VAR_3);

 if (!FUNC_5(VAR_2[1], "show"))
  return FUNC_1(VAR_1 - 1, VAR_2 + 1, VAR_3);

 if (!FUNC_5(VAR_2[1], "expire"))
  return FUNC_4(VAR_1 - 1, VAR_2 + 1, VAR_3);

 if (!FUNC_5(VAR_2[1], "delete"))
  return FUNC_2(VAR_1 - 1, VAR_2 + 1, VAR_3);

 if (!FUNC_5(VAR_2[1], "exists"))
  return FUNC_3(VAR_1 - 1, VAR_2 + 1, VAR_3);

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
