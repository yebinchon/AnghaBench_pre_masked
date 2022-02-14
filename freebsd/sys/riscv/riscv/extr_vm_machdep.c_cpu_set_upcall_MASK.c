
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trapframe {void** tf_a; void* tf_sepc; int tf_sp; } ;
struct thread {struct trapframe* td_frame; } ;
struct TYPE_3__ {scalar_t__ ss_size; scalar_t__ ss_sp; } ;
typedef TYPE_1__ stack_t ;
typedef void* register_t ;


 int FUNC_0 (scalar_t__) ;

void
FUNC_1(struct thread *VAR_0, void (*VAR_1)(void *), void *VAR_2,
 stack_t *VAR_3)
{
 struct trapframe *VAR_4;

 VAR_4 = VAR_0->td_frame;

 VAR_4->tf_sp = FUNC_0((uintptr_t)VAR_3->ss_sp + VAR_3->ss_size);
 VAR_4->tf_sepc = (register_t)VAR_1;
 VAR_4->tf_a[0] = (register_t)VAR_2;
}
