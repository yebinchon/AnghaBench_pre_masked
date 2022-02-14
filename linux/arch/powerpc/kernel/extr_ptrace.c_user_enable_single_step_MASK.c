
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dbcr0; } ;
struct TYPE_4__ {TYPE_1__ debug; struct pt_regs* regs; } ;
struct task_struct {TYPE_2__ thread; } ;
struct pt_regs {int msr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct task_struct*,int ) ;

void FUNC_1(struct task_struct *VAR_7)
{
 struct pt_regs *VAR_8 = VAR_7->thread.regs;

 if (VAR_8 != ((void*)0)) {





  VAR_8->msr &= ~VAR_3;
  VAR_8->msr |= VAR_5;

 }
 FUNC_0(VAR_7, VAR_6);
}
