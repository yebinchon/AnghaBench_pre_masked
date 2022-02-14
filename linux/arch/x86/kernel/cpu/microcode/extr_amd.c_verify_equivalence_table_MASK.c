
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct equiv_cpu_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int const*,size_t,int) ;

__attribute__((used)) static bool FUNC_2(const u8 *VAR_2, size_t VAR_3, bool VAR_4)
{
 const u32 *VAR_5 = (const u32 *)VAR_2;
 u32 VAR_6, VAR_7;

 if (!FUNC_1(VAR_2, VAR_3, VAR_4))
  return 0;

 VAR_6 = VAR_5[1];
 if (VAR_6 != VAR_1) {
  if (!VAR_4)
   FUNC_0("Wrong microcode container equivalence table type: %u.\n",
          VAR_6);

  return 0;
 }

 VAR_3 -= VAR_0;

 VAR_7 = VAR_5[2];
 if (VAR_7 < sizeof(struct equiv_cpu_entry) ||
     VAR_3 < VAR_7) {
  if (!VAR_4)
   FUNC_0("Truncated equivalence table.\n");

  return 0;
 }

 return 1;
}
