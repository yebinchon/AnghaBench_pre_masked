
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;

void FUNC_2(u32 VAR_1)
{
 s64 VAR_2;

 if (VAR_1 == VAR_0)
  return;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  FUNC_1("OPAL error %lld freeing VP block\n", VAR_2);
}
