
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static bool FUNC_1(const u8 *VAR_2, size_t VAR_3, bool VAR_4)
{
 u32 VAR_5;

 if (VAR_3 <= VAR_0) {
  if (!VAR_4)
   FUNC_0("Truncated microcode container header.\n");

  return 0;
 }

 VAR_5 = *(const u32 *)VAR_2;
 if (VAR_5 != VAR_1) {
  if (!VAR_4)
   FUNC_0("Invalid magic value (0x%08x).\n", VAR_5);

  return 0;
 }

 return 1;
}
