
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int x86; int x86_model; int x86_cache_bits; } ;
__attribute__((used)) static void FUNC_0(struct cpuinfo_x86 *VAR_0)
{
 if (VAR_0->x86 != 6)
  return;

 switch (VAR_0->x86_model) {
 case 132:
 case 128:
 case 131:
 case 135:
 case 138:
 case 136:
 case 137:
 case 140:
 case 139:
 case 129:
 case 130:
 case 133:
 case 134:
  if (VAR_0->x86_cache_bits < 44)
   VAR_0->x86_cache_bits = 44;
  break;
 }
}
