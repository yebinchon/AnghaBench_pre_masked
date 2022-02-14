
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* x86_frame_t ;
typedef scalar_t__ vm_offset_t ;
struct thread {scalar_t__ td_kstack; int td_kstack_pages; } ;
struct stack {int dummy; } ;
typedef scalar_t__ register_t ;
struct TYPE_2__ {scalar_t__ f_retaddr; struct TYPE_2__* f_frame; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct stack*,scalar_t__) ;
 int FUNC_2 (struct stack*) ;

__attribute__((used)) static void
FUNC_3(struct thread *VAR_1, struct stack *VAR_2, register_t VAR_3)
{
 x86_frame_t VAR_4;
 vm_offset_t VAR_5;

 FUNC_2(VAR_2);
 VAR_4 = (x86_frame_t)VAR_3;
 while (1) {
  if ((vm_offset_t)VAR_4 < VAR_1->td_kstack ||
      (vm_offset_t)VAR_4 >= VAR_1->td_kstack +
      VAR_1->td_kstack_pages * VAR_0)
   break;
  VAR_5 = VAR_4->f_retaddr;
  if (!FUNC_0(VAR_5))
   break;
  if (FUNC_1(VAR_2, VAR_5) == -1)
   break;
  if (VAR_4->f_frame <= VAR_4)
   break;
  VAR_4 = VAR_4->f_frame;
 }
}
