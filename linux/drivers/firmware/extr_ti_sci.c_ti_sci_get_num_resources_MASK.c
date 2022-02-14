
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ti_sci_resource {size_t sets; TYPE_1__* desc; } ;
struct TYPE_2__ {scalar_t__ num; } ;



u32 FUNC_0(struct ti_sci_resource *VAR_0)
{
 u32 VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->sets; VAR_1++)
  VAR_2 += VAR_0->desc[VAR_1].num;

 return VAR_2;
}
