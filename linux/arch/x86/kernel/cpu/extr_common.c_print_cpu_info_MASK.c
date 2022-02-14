
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuinfo_x86 {scalar_t__ x86_vendor; scalar_t__ cpuid_level; char* x86_vendor_id; int x86_stepping; int x86_model; int x86; scalar_t__* x86_model_id; } ;
struct TYPE_2__ {char* c_vendor; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__*,char const*) ;
 TYPE_1__* VAR_1 ;

void FUNC_2(struct cpuinfo_x86 *VAR_2)
{
 const char *VAR_3 = ((void*)0);

 if (VAR_2->x86_vendor < VAR_0) {
  VAR_3 = VAR_1->c_vendor;
 } else {
  if (VAR_2->cpuid_level >= 0)
   VAR_3 = VAR_2->x86_vendor_id;
 }

 if (VAR_3 && !FUNC_1(VAR_2->x86_model_id, VAR_3))
  FUNC_0("%s ", VAR_3);

 if (VAR_2->x86_model_id[0])
  FUNC_0("%s", VAR_2->x86_model_id);
 else
  FUNC_0("%d86", VAR_2->x86);

 FUNC_0(" (family: 0x%x, model: 0x%x", VAR_2->x86, VAR_2->x86_model);

 if (VAR_2->x86_stepping || VAR_2->cpuid_level >= 0)
  FUNC_0(", stepping: 0x%x)\n", VAR_2->x86_stepping);
 else
  FUNC_0(")\n");
}
