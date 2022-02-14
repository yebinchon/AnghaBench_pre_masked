
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_2(int VAR_5, int VAR_6)
{




 if (FUNC_0(VAR_0))
  return VAR_5 <= 4 && VAR_6 == 1;


 if (VAR_5 > 1 && VAR_4 < VAR_1)
  return 0;
 if (VAR_5 > VAR_2)
  return 0;
 if (VAR_5 > 1) {
  if (!(VAR_3 & 2))
   VAR_5 = 4;
  if (VAR_5 > 2 && !(VAR_3 & 4))
   return 0;
 }

 return VAR_5 * FUNC_1(VAR_6) <= VAR_1;
}
