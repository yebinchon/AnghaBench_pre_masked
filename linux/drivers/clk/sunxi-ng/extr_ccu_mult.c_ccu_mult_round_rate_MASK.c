
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct ccu_mux_internal {int dummy; } ;
struct TYPE_2__ {int width; scalar_t__ offset; scalar_t__ max; int min; } ;
struct ccu_mult {TYPE_1__ mult; } ;
struct _ccu_mult {unsigned long mult; scalar_t__ max; int min; } ;


 int FUNC_0 (unsigned long,unsigned long,struct _ccu_mult*) ;

__attribute__((used)) static unsigned long FUNC_1(struct ccu_mux_internal *VAR_0,
      struct clk_hw *VAR_1,
      unsigned long *VAR_2,
      unsigned long VAR_3,
      void *VAR_4)
{
 struct ccu_mult *VAR_5 = VAR_4;
 struct _ccu_mult VAR_6;

 VAR_6.min = VAR_5->mult.min;

 if (VAR_5->mult.max)
  VAR_6.max = VAR_5->mult.max;
 else
  VAR_6.max = (1 << VAR_5->mult.width) + VAR_5->mult.offset - 1;

 FUNC_0(*VAR_2, VAR_3, &VAR_6);

 return *VAR_2 * VAR_6.mult;
}
