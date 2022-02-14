
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {scalar_t__ srr0; } ;
struct thread {struct trapframe* td_frame; } ;
typedef scalar_t__ register_t ;



int
FUNC_0(struct thread *VAR_0, unsigned long VAR_1)
{
 struct trapframe *VAR_2;

 VAR_2 = VAR_0->td_frame;
 VAR_2->srr0 = (register_t)VAR_1;

 return (0);
}
