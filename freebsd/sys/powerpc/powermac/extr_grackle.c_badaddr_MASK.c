
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_pcb; } ;
typedef int jmp_buf ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_2__ {int * pcb_onfault; } ;


 struct thread* VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, size_t VAR_2)
{
 struct thread *VAR_3;
 jmp_buf VAR_4, *VAR_5;
 int VAR_6;


 __asm __volatile ("sync; isync");

 VAR_3 = VAR_0;

 VAR_5 = VAR_3->td_pcb->pcb_onfault;
 VAR_3->td_pcb->pcb_onfault = &VAR_4;
 if (FUNC_1(VAR_4)) {
  VAR_3->td_pcb->pcb_onfault = VAR_5;
  __asm __volatile ("sync");
  return 1;
 }

 __asm __volatile ("sync");

 switch (VAR_2) {
 case 1:
  VAR_6 = *(volatile int8_t *)VAR_1;
  break;
 case 2:
  VAR_6 = *(volatile int16_t *)VAR_1;
  break;
 case 4:
  VAR_6 = *(volatile int32_t *)VAR_1;
  break;
 default:
  FUNC_0("badaddr: invalid size (%zd)", VAR_2);
 }


 __asm __volatile ("sync; isync");

 VAR_3->td_pcb->pcb_onfault = VAR_5;
 __asm __volatile ("sync");

 return (0);
}
