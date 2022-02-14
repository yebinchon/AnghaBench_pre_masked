
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int msr; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (struct pt_regs*,int ) ;

__attribute__((used)) static int FUNC_1(struct pt_regs *VAR_4)
{
 if ((VAR_4->msr & (VAR_1|VAR_2|VAR_0)) != (VAR_1|VAR_0))
  return 0;
 if (VAR_3.enabled == 0)
  return 0;
 FUNC_0(VAR_4, 0);
 return 1;
}
