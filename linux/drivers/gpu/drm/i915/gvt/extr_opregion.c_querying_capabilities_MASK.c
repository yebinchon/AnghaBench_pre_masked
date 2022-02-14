
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_2(u32 VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_4);
 VAR_6 = FUNC_1(VAR_4);

 if ((VAR_5 == VAR_1 &&
  VAR_6 == VAR_3)
  || (VAR_5 == VAR_1 &&
   VAR_6 == VAR_2)
  || (VAR_5 == VAR_0 &&
   VAR_6 == VAR_3)) {
  return 1;
 }
 return 0;
}
