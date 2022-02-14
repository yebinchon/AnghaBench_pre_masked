
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct die_args {int regs; int err; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static int
FUNC_2(struct notifier_block *VAR_4, unsigned long VAR_5, void *VAR_6)
{
 struct die_args *VAR_7 = VAR_6;
 unsigned long* VAR_8 = (unsigned long *)FUNC_0(VAR_7->err);

 if (VAR_5 == VAR_0 && (*VAR_8 & VAR_1))
  if (FUNC_1(*VAR_8, VAR_7->regs) == 1) {




   *VAR_8 &= ~VAR_1;
   return VAR_3;
  }

 return VAR_2;
}
