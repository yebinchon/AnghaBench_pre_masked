
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuinfo_x86 {int x86; int x86_model; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct cpuinfo_x86*,int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 unsigned int FUNC_4 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_5(struct cpuinfo_x86 *VAR_7)
{
 if (VAR_7->x86 == 0x06) {
  if (FUNC_0(VAR_7, VAR_5))
   FUNC_2("Warning: EST-capable CPU detected. The acpi-cpufreq module offers voltage scaling in addition to frequency scaling. You should use that instead of p4-clockmod, if possible.\n");
  switch (VAR_7->x86_model) {
  case 0x0E:
  case 0x0F:
  case 0x16:
  case 0x1C:
   VAR_6.flags |= VAR_0;
   return FUNC_4(VAR_3);
  case 0x0D:
   VAR_6.flags |= VAR_0;

  case 0x09:
   return FUNC_4(VAR_4);
  }
 }

 if (VAR_7->x86 != 0xF)
  return 0;



 VAR_6.flags |= VAR_0;

 if (FUNC_3() == VAR_2) {
  FUNC_1("Warning: Pentium 4-M detected. The speedstep-ich or acpi cpufreq modules offer voltage scaling in addition of frequency scaling. You should use either one instead of p4-clockmod, if possible.\n");
  return FUNC_4(VAR_2);
 }

 return FUNC_4(VAR_1);
}
