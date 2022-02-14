
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct admhcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int int_status; } ;


 int FUNC_0 (struct admhcd*,int ,int *) ;

__attribute__((used)) static inline void FUNC_1(struct admhcd *VAR_0, u32 VAR_1)
{
 FUNC_0(VAR_0, VAR_1, &VAR_0->regs->int_status);
}
