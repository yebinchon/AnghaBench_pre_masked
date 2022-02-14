
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct omap_rng_dev {TYPE_1__* pdata; scalar_t__ base; } ;
struct TYPE_2__ {scalar_t__* regs; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct omap_rng_dev *VAR_0, u16 VAR_1,
          u32 VAR_2)
{
 FUNC_0(VAR_2, VAR_0->base + VAR_0->pdata->regs[VAR_1]);
}
