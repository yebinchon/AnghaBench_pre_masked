
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sc27xx_led {int line; TYPE_1__* priv; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct sc27xx_led *VAR_1)
{
 return VAR_1->priv->base + VAR_0 * VAR_1->line;
}
