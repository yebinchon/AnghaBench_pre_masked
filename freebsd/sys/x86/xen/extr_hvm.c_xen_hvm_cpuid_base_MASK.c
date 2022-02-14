
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int*) ;
 int FUNC_1 (char*,int*,int) ;

__attribute__((used)) static uint32_t
FUNC_2(void)
{
 uint32_t VAR_0, VAR_1[4];

 for (VAR_0 = 0x40000000; VAR_0 < 0x40010000; VAR_0 += 0x100) {
  FUNC_0(VAR_0, VAR_1);
  if (!FUNC_1("XenVMMXenVMM", &VAR_1[1], 12)
      && (VAR_1[0] - VAR_0) >= 2)
   return (VAR_0);
 }
 return (0);
}
