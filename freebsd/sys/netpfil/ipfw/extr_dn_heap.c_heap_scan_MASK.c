
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dn_heap {int elements; TYPE_1__* p; } ;
struct TYPE_2__ {void* object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dn_heap*) ;

int
FUNC_1(struct dn_heap *VAR_2, int (*VAR_3)(void *, uintptr_t),
 uintptr_t VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 for (VAR_5 = VAR_7 = 0 ; VAR_5 < VAR_2->elements ;) {
  VAR_6 = VAR_3(VAR_2->p[VAR_5].object, VAR_4);
  if (VAR_6 & VAR_0) {
   VAR_2->elements-- ;
   VAR_2->p[VAR_5] = VAR_2->p[VAR_2->elements] ;
   VAR_7++ ;
  } else
   VAR_5++ ;
  if (VAR_6 & VAR_1)
   break;
 }
 if (VAR_7)
  FUNC_0(VAR_2);
 return VAR_7;
}
