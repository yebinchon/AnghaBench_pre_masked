
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef scalar_t__ intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_2, u_int VAR_3, intmax_t *VAR_4, intmax_t VAR_5,
    intmax_t VAR_6)
{
 char *VAR_7;
 intmax_t VAR_8;

 VAR_8 = FUNC_0(VAR_2, &VAR_7, VAR_3);
 if (VAR_7 == VAR_2 || VAR_7[0] != '\0')
  return (VAR_1);
 if (VAR_8 < VAR_5 || VAR_8 > VAR_6)
  return (VAR_0);
 *VAR_4 = VAR_8;
 return (0);
}
