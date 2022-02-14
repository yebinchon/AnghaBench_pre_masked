
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int,char const*,int,int ) ;
 int FUNC_1 (char const*,char const*,int) ;

int FUNC_2(const char *VAR_1, int VAR_2,
     const char *VAR_3, int VAR_4, int VAR_5,
     unsigned VAR_6)
{
 if (VAR_4 == VAR_5) {
  if (VAR_5 == VAR_2 &&
      !FUNC_1(VAR_3, VAR_1, VAR_2))
   return 1;
 } else if (VAR_6 & VAR_0) {

  if (VAR_5 - 1 <= VAR_2 &&
      !FUNC_1(VAR_3 + 1,
       VAR_1 + VAR_2 - (VAR_5 - 1),
       VAR_5 - 1))
   return 1;
 } else {
  if (FUNC_0(VAR_3, VAR_5,
          VAR_1, VAR_2,
          0) == 0)
   return 1;
 }
 return 0;
}
