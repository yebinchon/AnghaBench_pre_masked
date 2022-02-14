
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char**,int ) ;
 scalar_t__ FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, uintmax_t *VAR_4, uintmax_t VAR_5)
{
 if (VAR_3 && *VAR_3) {
  char *VAR_6;
  uintmax_t VAR_7;
  uintmax_t VAR_8;

  VAR_2 = 0;
  VAR_7 = FUNC_1(VAR_3, &VAR_6, 0);
  if (VAR_2 == VAR_1)
   return 0;
  VAR_8 = FUNC_0(VAR_6);
  if (!VAR_8) {
   VAR_2 = VAR_0;
   return 0;
  }
  if (FUNC_2(VAR_8, VAR_7) ||
      VAR_8 * VAR_7 > VAR_5) {
   VAR_2 = VAR_1;
   return 0;
  }
  VAR_7 *= VAR_8;
  *VAR_4 = VAR_7;
  return 1;
 }
 VAR_2 = VAR_0;
 return 0;
}
