
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct die_args {int signr; struct pt_regs* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,unsigned long,struct pt_regs*) ;

__attribute__((used)) static int FUNC_1(struct die_args *VAR_2, unsigned long VAR_3)
{
 struct pt_regs *VAR_4 = VAR_2->regs;

 if (FUNC_0(1, VAR_2->signr, VAR_3, VAR_4))
  return VAR_0;
 return VAR_1;
}
