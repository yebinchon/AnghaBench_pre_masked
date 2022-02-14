
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xadc {TYPE_1__* ops; } ;
struct TYPE_2__ {unsigned long (* get_dclk_rate ) (struct xadc*) ;} ;


 unsigned long FUNC_0 (struct xadc*) ;

__attribute__((used)) static unsigned long FUNC_1(struct xadc *VAR_0)
{
 return VAR_0->ops->get_dclk_rate(VAR_0);
}
