
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int dummy; } ;
struct thread {struct trapframe* td_frame; } ;


 struct thread* VAR_0 ;
 int FUNC_0 (struct thread*) ;
 int FUNC_1 (struct thread*) ;

__attribute__((used)) static void
FUNC_2(struct trapframe *VAR_1)
{
 struct thread *VAR_2;

 VAR_2 = VAR_0;
 VAR_2->td_frame = VAR_1;

 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
}
