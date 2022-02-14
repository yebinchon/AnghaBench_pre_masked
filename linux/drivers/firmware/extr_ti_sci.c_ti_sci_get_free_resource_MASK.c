
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct ti_sci_resource {size_t sets; int lock; TYPE_1__* desc; } ;
struct TYPE_2__ {size_t num; size_t start; int res_map; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ,size_t) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (size_t,int ) ;

u16 FUNC_4(struct ti_sci_resource *VAR_1)
{
 unsigned long VAR_2;
 u16 VAR_3, VAR_4;

 FUNC_1(&VAR_1->lock, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_1->sets; VAR_3++) {
  VAR_4 = FUNC_0(VAR_1->desc[VAR_3].res_map,
            VAR_1->desc[VAR_3].num);
  if (VAR_4 != VAR_1->desc[VAR_3].num) {
   FUNC_3(VAR_4, VAR_1->desc[VAR_3].res_map);
   FUNC_2(&VAR_1->lock, VAR_2);
   return VAR_1->desc[VAR_3].start + VAR_4;
  }
 }
 FUNC_2(&VAR_1->lock, VAR_2);

 return VAR_0;
}
