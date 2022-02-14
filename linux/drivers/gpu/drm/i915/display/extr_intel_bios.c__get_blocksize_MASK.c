
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int const u32 ;
typedef int const u16 ;


 scalar_t__ const VAR_0 ;

__attribute__((used)) static u32 FUNC_0(const u8 *VAR_1)
{

 if (*VAR_1 == VAR_0 && *(VAR_1 + 3) >= 3)
  return *((const u32 *)(VAR_1 + 4));
 else
  return *((const u16 *)(VAR_1 + 1));
}
