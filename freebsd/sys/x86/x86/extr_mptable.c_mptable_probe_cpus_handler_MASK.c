
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
typedef TYPE_1__* proc_entry_ptr ;
struct TYPE_2__ {int cpu_flags; int apic_id; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_1(u_char *VAR_6, void *VAR_7)
{
 proc_entry_ptr VAR_8;

 switch (*VAR_6) {
 case 128:
  VAR_8 = (proc_entry_ptr)VAR_6;
  if (VAR_8->cpu_flags & VAR_2 &&
      VAR_8->apic_id < VAR_1 && VAR_5 < VAR_0) {




   VAR_3 = FUNC_0(VAR_3, VAR_8->apic_id);
  }
  break;
 }
}
