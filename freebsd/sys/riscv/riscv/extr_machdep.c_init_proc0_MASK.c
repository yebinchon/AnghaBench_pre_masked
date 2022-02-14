
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct pcpu {struct pcb* pc_curpcb; } ;
struct pcb {scalar_t__ pcb_fpflags; } ;
struct TYPE_3__ {int td_kstack_pages; struct pcb* td_pcb; int * td_frame; scalar_t__ td_kstack; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcpu* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void
FUNC_1(vm_offset_t VAR_6)
{
 struct pcpu *VAR_7;

 VAR_7 = &VAR_2[0];

 FUNC_0(&VAR_3, &VAR_5);
 VAR_5 = VAR_6;
 VAR_5 = VAR_0;
 VAR_5 = (struct pcb *)(VAR_5 +
     VAR_5 * VAR_1) - 1;
 VAR_5->pcb_fpflags = 0;
 VAR_5 = &VAR_4;
 VAR_7->pc_curpcb = VAR_5;
}
