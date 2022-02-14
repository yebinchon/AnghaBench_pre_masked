
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rxe_queue {int log2_elem_size; int index_mask; TYPE_1__* buf; } ;
struct TYPE_2__ {int * data; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct rxe_queue *VAR_0,
        const void *VAR_1)
{
 return (((u8 *)VAR_1 - VAR_0->buf->data) >> VAR_0->log2_elem_size)
  & VAR_0->index_mask;
}
