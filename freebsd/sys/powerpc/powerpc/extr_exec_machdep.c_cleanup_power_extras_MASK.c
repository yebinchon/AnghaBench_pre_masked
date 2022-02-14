
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct thread {TYPE_1__* td_pcb; } ;
struct TYPE_2__ {int pcb_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct thread* VAR_4 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct thread *VAR_5)
{
 uint32_t VAR_6;

 if (VAR_5 != VAR_4)
  return;

 VAR_6 = VAR_5->td_pcb->pcb_flags;

 if (VAR_6 & VAR_1)
  FUNC_0(VAR_3, 0);
 if (VAR_6 & VAR_0)
  FUNC_0(VAR_2, 0);
}
