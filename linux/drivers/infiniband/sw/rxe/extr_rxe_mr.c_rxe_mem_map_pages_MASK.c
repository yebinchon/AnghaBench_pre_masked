
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct rxe_phys_buf {int size; int addr; } ;
struct rxe_mem {int max_buf; int page_shift; int length; int state; void* va; void* iova; struct rxe_map** map; } ;
struct rxe_map {struct rxe_phys_buf* buf; } ;
struct rxe_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct rxe_dev *VAR_3, struct rxe_mem *VAR_4,
        u64 *VAR_5, int VAR_6, u64 VAR_7)
{
 int VAR_8;
 int VAR_9;
 int VAR_10;
 struct rxe_map **VAR_11;
 struct rxe_phys_buf *VAR_12;
 int VAR_13;

 if (VAR_6 > VAR_4->max_buf) {
  VAR_10 = -VAR_0;
  goto err1;
 }

 VAR_9 = 0;
 VAR_13 = 1 << VAR_4->page_shift;
 VAR_11 = VAR_4->map;
 VAR_12 = VAR_11[0]->buf;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_12->addr = *VAR_5++;
  VAR_12->size = VAR_13;
  VAR_12++;
  VAR_9++;

  if (VAR_9 == VAR_1) {
   VAR_11++;
   VAR_12 = VAR_11[0]->buf;
   VAR_9 = 0;
  }
 }

 VAR_4->iova = VAR_7;
 VAR_4->va = VAR_7;
 VAR_4->length = VAR_6 << VAR_4->page_shift;
 VAR_4->state = VAR_2;

 return 0;

err1:
 return VAR_10;
}
