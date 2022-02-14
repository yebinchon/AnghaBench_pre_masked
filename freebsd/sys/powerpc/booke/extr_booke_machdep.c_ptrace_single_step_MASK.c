
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dbcr0; } ;
struct TYPE_4__ {TYPE_1__ booke; } ;
struct trapframe {TYPE_2__ cpu; int srr1; } ;
struct thread {struct trapframe* td_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(struct thread *VAR_3)
{
 struct trapframe *VAR_4;

 VAR_4 = VAR_3->td_frame;
 VAR_4->srr1 |= VAR_2;
 VAR_4->cpu.booke.dbcr0 |= (VAR_1 | VAR_0);
 return (0);
}
