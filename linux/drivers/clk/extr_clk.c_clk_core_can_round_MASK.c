
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_core {TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ round_rate; scalar_t__ determine_rate; } ;



__attribute__((used)) static bool FUNC_0(struct clk_core * const VAR_0)
{
 return VAR_0->ops->determine_rate || VAR_0->ops->round_rate;
}
