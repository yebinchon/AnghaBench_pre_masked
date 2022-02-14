
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* proc_entry_ptr ;
struct TYPE_4__ {int apic_id; int feature_flags; int cpu_signature; int cpu_flags; int apic_version; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_1(proc_entry_ptr VAR_6, int VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  FUNC_0(VAR_6, 0, sizeof(*VAR_6));
  VAR_6->type = VAR_1;
  VAR_6->apic_id = VAR_8;
  VAR_6->apic_version = VAR_0;
  VAR_6->cpu_flags = VAR_5;
  if (VAR_8 == 0)
   VAR_6->cpu_flags |= VAR_4;
  VAR_6->cpu_signature = VAR_3;
  VAR_6->feature_flags = VAR_2;
  VAR_6++;
 }
}
