
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int dummy; } ;
struct thread {struct trapframe* td_frame; } ;
struct reg {int dummy; } ;


 int FUNC_0 (struct trapframe*,struct reg*,int) ;

int
FUNC_1(struct thread *VAR_0, struct reg *VAR_1)
{
 struct trapframe *VAR_2;

 VAR_2 = VAR_0->td_frame;
 FUNC_0(VAR_2, VAR_1, sizeof(struct reg));

 return (0);
}
