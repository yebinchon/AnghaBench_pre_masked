
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct admhcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int host_control; } ;


 int VAR_0 ;
 int FUNC_0 (struct admhcd*,int *) ;
 int FUNC_1 (struct admhcd*,char*) ;
 int FUNC_2 (struct admhcd*,int,int *) ;

__attribute__((used)) static inline void FUNC_3(struct admhcd *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_1, &VAR_1->regs->host_control);
 if (!(VAR_2 & VAR_0))
  return;

 VAR_2 &= ~VAR_0;
 FUNC_2(VAR_1, VAR_2, &VAR_1->regs->host_control);
 FUNC_1(VAR_1, "DMA disabled\n");
}
