
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(u64 VAR_2)
{
 if (!FUNC_1(VAR_2))
  return 0;







 if (FUNC_4(VAR_2) ||
     FUNC_0(VAR_2))
  return 1;

 if (FUNC_3(VAR_2)) {
  if ((VAR_2 & VAR_0) == 0 ||
          (FUNC_2(VAR_2) && (VAR_2 & VAR_1) == 0))
   return 1;
 }

 return 0;
}
