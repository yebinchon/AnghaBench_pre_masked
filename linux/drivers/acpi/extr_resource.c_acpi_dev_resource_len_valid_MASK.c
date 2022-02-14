
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int FUNC_0 (char*,char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(u64 VAR_0, u64 VAR_1, u64 VAR_2, bool VAR_3)
{
 u64 VAR_4 = VAR_1 - VAR_0 + 1;
 if (VAR_2 && VAR_4 && VAR_0 <= VAR_1)
  return 1;

 FUNC_0("ACPI: invalid or unassigned resource %s [%016llx - %016llx] length [%016llx]\n",
  VAR_3 ? "io" : "mem", VAR_0, VAR_1, VAR_2);

 return 0;
}
