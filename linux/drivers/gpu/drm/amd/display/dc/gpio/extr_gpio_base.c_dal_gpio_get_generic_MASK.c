
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_generic {int dummy; } ;
struct TYPE_2__ {struct hw_generic* generic; } ;
struct gpio {TYPE_1__ hw_container; } ;



struct hw_generic *FUNC_0(struct gpio *VAR_0)
{
 return VAR_0->hw_container.generic;
}
