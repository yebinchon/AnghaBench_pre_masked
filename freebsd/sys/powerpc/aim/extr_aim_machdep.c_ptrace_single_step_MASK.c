
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int srr1; } ;
struct thread {struct trapframe* td_frame; } ;


 int VAR_0 ;

int
FUNC_0(struct thread *VAR_1)
{
 struct trapframe *VAR_2;

 VAR_2 = VAR_1->td_frame;
 VAR_2->srr1 |= VAR_0;

 return (0);
}
