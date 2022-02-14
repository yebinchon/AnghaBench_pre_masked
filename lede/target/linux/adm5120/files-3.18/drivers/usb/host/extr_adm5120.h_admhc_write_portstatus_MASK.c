
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct admhcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int * portstatus; } ;


 int FUNC_0 (struct admhcd*,int ,int *) ;

__attribute__((used)) static inline void FUNC_1(struct admhcd *VAR_0, int VAR_1,
  u32 VAR_2)
{
 FUNC_0(VAR_0, VAR_2, &VAR_0->regs->portstatus[VAR_1]);
}
