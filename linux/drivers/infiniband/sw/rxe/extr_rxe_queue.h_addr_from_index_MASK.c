
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_queue {unsigned int index_mask; TYPE_1__* buf; } ;
struct TYPE_2__ {void* data; unsigned int log2_elem_size; } ;



__attribute__((used)) static inline void *FUNC_0(struct rxe_queue *VAR_0, unsigned int VAR_1)
{
 return VAR_0->buf->data + ((VAR_1 & VAR_0->index_mask)
    << VAR_0->buf->log2_elem_size);
}
