
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct admhcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int fmnumber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct admhcd const*,int *) ;

__attribute__((used)) static inline u16 FUNC_1(const struct admhcd *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2, &VAR_2->regs->fmnumber) >> VAR_1;
 VAR_3 &= VAR_0;
 return (u16)VAR_3;
}
