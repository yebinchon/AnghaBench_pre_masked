
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char**,int) ;

uintmax_t
FUNC_1(const char * __restrict VAR_3, uintmax_t VAR_4, uintmax_t VAR_5,
    const char ** __restrict VAR_6)
{
 char *VAR_7;
 uintmax_t VAR_8;

 *VAR_6 = ((void*)0);
 if (VAR_4 > VAR_5) {
  VAR_2 = VAR_0;
  if (VAR_6 != ((void*)0))
   *VAR_6 = "invalid";
  return (0);
 }
 VAR_2 = 0;
 VAR_8 = FUNC_0(VAR_3, &VAR_7, 10);
 if (VAR_7 == VAR_3 || *VAR_7 != '\0') {
  VAR_2 = VAR_0;
  if (VAR_6 != ((void*)0))
   *VAR_6 = "invalid";
  return (0);
 }
 if (VAR_8 < VAR_4) {
  VAR_2 = VAR_1;
  if (VAR_6 != ((void*)0))
   *VAR_6 = "too small";
  return (0);
 }
 if (VAR_2 == VAR_1 || VAR_8 > VAR_5) {
  VAR_2 = VAR_1;
  if (VAR_6 != ((void*)0))
   *VAR_6 = "too large";
  return (0);
 }
 return (VAR_8);
}
