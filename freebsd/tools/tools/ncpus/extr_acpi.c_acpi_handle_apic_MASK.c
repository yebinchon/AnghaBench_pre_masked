
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MADTbody {scalar_t__ body; } ;
struct MADT_local_sapic {int flags; int cpu_id; } ;
struct MADT_local_apic {int flags; int cpu_id; } ;
struct TYPE_2__ {struct MADT_local_sapic local_sapic; struct MADT_local_apic local_apic; } ;
struct MADT_APIC {int type; int len; TYPE_1__ body; } ;
struct ACPIsdt {uintptr_t len; scalar_t__ body; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (char*,int ,char*) ;

__attribute__((used)) static void
FUNC_1(struct ACPIsdt *VAR_2)
{
 struct MADTbody *VAR_3;
 struct MADT_APIC *VAR_4;
 struct MADT_local_apic *VAR_5;
 struct MADT_local_sapic *VAR_6;

 VAR_3 = (struct MADTbody *) VAR_2->body;
 VAR_4 = (struct MADT_APIC *)VAR_3->body;
 while (((uintptr_t)VAR_4) - ((uintptr_t)VAR_2) < VAR_2->len) {
  switch (VAR_4->type) {
  case 129:
   VAR_5 = &VAR_4->body.local_apic;
   FUNC_0("MADT: Found CPU APIC ID %d %s",
       VAR_5->cpu_id,
       VAR_5->flags & VAR_0 ?
    "enabled" : "disabled");
   if (VAR_5->flags & VAR_0)
    VAR_1++;
   break;
  case 128:
   VAR_6 = &VAR_4->body.local_sapic;
   FUNC_0("MADT: Found CPU SAPIC ID %d %s",
       VAR_6->cpu_id,
       VAR_6->flags & VAR_0 ?
    "enabled" : "disabled");

   if (VAR_6->flags & VAR_0)
    VAR_1++;
   break;
  default:
   break;
  }
  VAR_4 = (struct MADT_APIC *) ((char *)VAR_4 + VAR_4->len);
 }
}
