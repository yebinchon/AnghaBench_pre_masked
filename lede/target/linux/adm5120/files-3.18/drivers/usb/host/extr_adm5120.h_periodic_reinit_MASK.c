
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct admhcd {int fminterval; TYPE_1__* regs; } ;
struct TYPE_2__ {int fminterval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct admhcd*,int *) ;
 int FUNC_1 (struct admhcd*,int,int *) ;

__attribute__((used)) static inline void FUNC_2(struct admhcd *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2, &VAR_2->regs->fminterval) & VAR_1;


 FUNC_1(VAR_2, (VAR_3 ^ VAR_1) | VAR_2->fminterval,
     &VAR_2->regs->fminterval);

}
