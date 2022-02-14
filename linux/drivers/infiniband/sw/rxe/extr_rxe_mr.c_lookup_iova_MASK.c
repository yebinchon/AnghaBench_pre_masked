
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u64 ;
struct rxe_mem {size_t iova; size_t offset; size_t page_shift; size_t page_mask; size_t map_mask; size_t map_shift; TYPE_2__** map; } ;
struct TYPE_4__ {TYPE_1__* buf; } ;
struct TYPE_3__ {size_t size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;

__attribute__((used)) static void FUNC_1(
 struct rxe_mem *VAR_1,
 u64 VAR_2,
 int *VAR_3,
 int *VAR_4,
 size_t *VAR_5)
{
 size_t VAR_6 = VAR_2 - VAR_1->iova + VAR_1->offset;
 int VAR_7;
 int VAR_8;
 u64 VAR_9;

 if (FUNC_0(VAR_1->page_shift)) {
  *VAR_5 = VAR_6 & VAR_1->page_mask;
  VAR_6 >>= VAR_1->page_shift;
  *VAR_4 = VAR_6 & VAR_1->map_mask;
  *VAR_3 = VAR_6 >> VAR_1->map_shift;
 } else {
  VAR_7 = 0;
  VAR_8 = 0;

  VAR_9 = VAR_1->map[VAR_7]->buf[VAR_8].size;

  while (VAR_6 >= VAR_9) {
   VAR_6 -= VAR_9;
   VAR_8++;

   if (VAR_8 == VAR_0) {
    VAR_7++;
    VAR_8 = 0;
   }
   VAR_9 = VAR_1->map[VAR_7]->buf[VAR_8].size;
  }

  *VAR_3 = VAR_7;
  *VAR_4 = VAR_8;
  *VAR_5 = VAR_6;
 }
}
