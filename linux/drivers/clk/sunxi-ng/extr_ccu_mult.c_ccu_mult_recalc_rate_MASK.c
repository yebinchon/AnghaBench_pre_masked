
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_5__ {unsigned long shift; int width; unsigned long offset; } ;
struct TYPE_6__ {scalar_t__ reg; scalar_t__ base; } ;
struct ccu_mult {TYPE_1__ mult; int mux; TYPE_2__ common; int frac; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int *) ;
 unsigned long FUNC_1 (TYPE_2__*,int *) ;
 unsigned long FUNC_2 (TYPE_2__*,int *,int,unsigned long) ;
 struct ccu_mult* FUNC_3 (struct clk_hw*) ;
 unsigned long FUNC_4 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_5(struct clk_hw *VAR_0,
     unsigned long VAR_1)
{
 struct ccu_mult *VAR_2 = FUNC_3(VAR_0);
 unsigned long VAR_3;
 u32 VAR_4;

 if (FUNC_0(&VAR_2->common, &VAR_2->frac))
  return FUNC_1(&VAR_2->common, &VAR_2->frac);

 VAR_4 = FUNC_4(VAR_2->common.base + VAR_2->common.reg);
 VAR_3 = VAR_4 >> VAR_2->mult.shift;
 VAR_3 &= (1 << VAR_2->mult.width) - 1;

 VAR_1 = FUNC_2(&VAR_2->common, &VAR_2->mux, -1,
        VAR_1);

 return VAR_1 * (VAR_3 + VAR_2->mult.offset);
}
