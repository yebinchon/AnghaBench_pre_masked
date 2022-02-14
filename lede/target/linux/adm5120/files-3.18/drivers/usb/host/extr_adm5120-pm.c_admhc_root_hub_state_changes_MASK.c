
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct admhcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int int_enable; } ;


 int VAR_0 ;
 int FUNC_0 (struct admhcd*,int) ;
 int FUNC_1 (struct admhcd*,int *) ;

__attribute__((used)) static int FUNC_2(struct admhcd *VAR_1, int VAR_2,
  int VAR_3)
{

 if (FUNC_1(VAR_1, &VAR_1->regs->int_enable) & VAR_0)
  return 0;


 if (!VAR_2) {
  FUNC_0(VAR_1, VAR_0);
  return 0;
 }

 return 1;
}
