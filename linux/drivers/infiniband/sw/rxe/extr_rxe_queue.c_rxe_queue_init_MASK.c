
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_queue_buf {int dummy; } ;
struct rxe_queue {unsigned int elem_size; unsigned int index_mask; size_t buf_size; TYPE_1__* buf; int log2_elem_size; struct rxe_dev* rxe; } ;
struct rxe_dev {int dummy; } ;
struct TYPE_2__ {unsigned int index_mask; int log2_elem_size; } ;


 int VAR_0 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 (struct rxe_queue*) ;
 struct rxe_queue* FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 TYPE_1__* FUNC_5 (size_t) ;

struct rxe_queue *FUNC_6(struct rxe_dev *VAR_1,
     int *VAR_2,
     unsigned int VAR_3)
{
 struct rxe_queue *VAR_4;
 size_t VAR_5;
 unsigned int VAR_6;


 if (*VAR_2 < 0)
  goto err1;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  goto err1;

 VAR_4->rxe = VAR_1;


 VAR_4->elem_size = VAR_3;


 if (VAR_3 < FUNC_0())
  VAR_3 = FUNC_0();
 VAR_3 = FUNC_4(VAR_3);

 VAR_4->log2_elem_size = FUNC_3(VAR_3);

 VAR_6 = *VAR_2 + 1;
 VAR_6 = FUNC_4(VAR_6);
 VAR_4->index_mask = VAR_6 - 1;

 VAR_5 = sizeof(struct rxe_queue_buf) + VAR_6 * VAR_3;

 VAR_4->buf = FUNC_5(VAR_5);
 if (!VAR_4->buf)
  goto err2;

 VAR_4->buf->log2_elem_size = VAR_4->log2_elem_size;
 VAR_4->buf->index_mask = VAR_4->index_mask;

 VAR_4->buf_size = VAR_5;

 *VAR_2 = VAR_6 - 1;
 return VAR_4;

err2:
 FUNC_1(VAR_4);
err1:
 return ((void*)0);
}
