
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int git_repository ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (char const*,size_t,char*) ;
 scalar_t__ FUNC_2 (char const*,size_t,int ,int ) ;
 int FUNC_3 (char const*,size_t,char*,int) ;
 int FUNC_4 (char const*,size_t) ;
 int FUNC_5 (int *,char const*,size_t) ;

__attribute__((used)) static bool FUNC_6(
 git_repository *VAR_11,
 const char *VAR_12,
 size_t VAR_13,
 uint16_t VAR_14,
 unsigned int VAR_15)
{
 if (VAR_13 == 0)
  return 0;

 if ((VAR_15 & VAR_10) &&
  VAR_13 == 1 && VAR_12[0] == '.')
  return 0;

 if ((VAR_15 & VAR_10) &&
  VAR_13 == 2 && VAR_12[0] == '.' && VAR_12[1] == '.')
  return 0;

 if ((VAR_15 & VAR_8) && VAR_12[VAR_13-1] == '.')
  return 0;

 if ((VAR_15 & VAR_9) && VAR_12[VAR_13-1] == ' ')
  return 0;

 if ((VAR_15 & VAR_7) && VAR_12[VAR_13-1] == ':')
  return 0;

 if (VAR_15 & VAR_3) {
  if (!FUNC_3(VAR_12, VAR_13, "CON", 0) ||
   !FUNC_3(VAR_12, VAR_13, "PRN", 0) ||
   !FUNC_3(VAR_12, VAR_13, "AUX", 0) ||
   !FUNC_3(VAR_12, VAR_13, "NUL", 0) ||
   !FUNC_3(VAR_12, VAR_13, "COM", 1) ||
   !FUNC_3(VAR_12, VAR_13, "LPT", 1))
   return 0;
 }

 if (VAR_15 & VAR_4) {
  if (!FUNC_4(VAR_12, VAR_13))
   return 0;
  if (FUNC_0(VAR_14) && FUNC_2(VAR_12, VAR_13, VAR_2, VAR_0))
   return 0;
 }

 if (VAR_15 & VAR_6) {
  if (!FUNC_5(VAR_11, VAR_12, VAR_13))
   return 0;
  if (FUNC_0(VAR_14) && FUNC_2(VAR_12, VAR_13, VAR_2, VAR_1))
   return 0;
 }




 if ((VAR_15 & VAR_4) == 0 &&
     (VAR_15 & VAR_6) == 0 &&
     (VAR_15 & VAR_5)) {
  if (VAR_13 >= 4 &&
      VAR_12[0] == '.' &&
      (VAR_12[1] == 'g' || VAR_12[1] == 'G') &&
      (VAR_12[2] == 'i' || VAR_12[2] == 'I') &&
      (VAR_12[3] == 't' || VAR_12[3] == 'T')) {
   if (VAR_13 == 4)
    return 0;

   if (FUNC_0(VAR_14) && FUNC_1(VAR_12, VAR_13, ".gitmodules") == VAR_13)
    return 0;
  }
     }

 return 1;
}
