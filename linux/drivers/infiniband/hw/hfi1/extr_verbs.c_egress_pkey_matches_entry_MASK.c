
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(u16 VAR_2, u16 VAR_3)
{
 u16 VAR_4 = VAR_2 & VAR_0;
 u16 VAR_5 = VAR_3 & VAR_0;

 if (VAR_4 == VAR_5) {





  if (VAR_2 & VAR_1)
   return !!(VAR_3 & VAR_1);
  return 1;
 }
 return 0;
}
