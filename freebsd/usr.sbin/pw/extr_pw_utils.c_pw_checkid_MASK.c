
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,char const*) ;
 int FUNC_1 (char*,int ,int ,char const**) ;

uintmax_t
FUNC_2(char *VAR_1, uintmax_t VAR_2)
{
 const char *VAR_3 = ((void*)0);
 uintmax_t VAR_4;

 VAR_4 = FUNC_1(VAR_1, 0, VAR_2, &VAR_3);
 if (VAR_3)
  FUNC_0(VAR_0, "Bad id '%s': %s", VAR_1, VAR_3);
 return (VAR_4);
}
