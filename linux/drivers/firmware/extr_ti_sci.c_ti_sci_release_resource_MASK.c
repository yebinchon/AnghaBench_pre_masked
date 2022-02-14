
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct ti_sci_resource {size_t sets; int lock; TYPE_1__* desc; } ;
struct TYPE_2__ {size_t start; size_t num; int res_map; } ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct ti_sci_resource *VAR_0, u16 VAR_1)
{
 unsigned long VAR_2;
 u16 VAR_3;

 FUNC_1(&VAR_0->lock, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_0->sets; VAR_3++) {
  if (VAR_0->desc[VAR_3].start <= VAR_1 &&
      (VAR_0->desc[VAR_3].num + VAR_0->desc[VAR_3].start) > VAR_1)
   FUNC_0(VAR_1 - VAR_0->desc[VAR_3].start,
      VAR_0->desc[VAR_3].res_map);
 }
 FUNC_2(&VAR_0->lock, VAR_2);
}
