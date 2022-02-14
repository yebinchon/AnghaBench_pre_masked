
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_queue_buf {int dummy; } ;
struct rxe_queue {scalar_t__ buf_size; TYPE_1__* buf; } ;
struct TYPE_2__ {int data; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

inline void FUNC_1(struct rxe_queue *VAR_0)
{




 FUNC_0(VAR_0->buf->data, 0, VAR_0->buf_size - sizeof(struct rxe_queue_buf));
}
