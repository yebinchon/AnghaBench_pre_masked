
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u_int ;
typedef int u_char ;
typedef TYPE_1__* proc_entry_ptr ;
struct TYPE_2__ {int cpu_flags; unsigned long apic_id; } ;


 unsigned long VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,int) ;

__attribute__((used)) static void
FUNC_1(u_char *VAR_3, void *VAR_4)
{
 proc_entry_ptr VAR_5;
 u_int *VAR_6;

 switch (*VAR_3) {
 case 128:
  VAR_5 = (proc_entry_ptr)VAR_3;
  if (VAR_5->cpu_flags & VAR_2) {
   FUNC_0(VAR_5->apic_id, VAR_5->cpu_flags &
       VAR_1);
   if (VAR_5->apic_id < VAR_0) {
    VAR_6 = (u_int *)VAR_4;
    *VAR_6 |= (1ul << VAR_5->apic_id);
   }
  }
  break;
 }
}
