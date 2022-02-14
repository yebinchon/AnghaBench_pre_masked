
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,...) ;

__attribute__((used)) static bool FUNC_1(u32 VAR_2, u32 VAR_3)
{
 if (VAR_2 < VAR_1) {
  FUNC_0("Invalid MSI base SPI (base:%u)\n", VAR_2);
  return 0;
 }

 if ((VAR_3 == 0) || (VAR_2 + VAR_3 > VAR_0)) {
  FUNC_0("Number of SPIs (%u) exceed maximum (%u)\n",
         VAR_3, VAR_0 - VAR_1 + 1);
  return 0;
 }

 return 1;
}
