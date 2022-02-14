
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_queue {unsigned int index_mask; TYPE_1__* buf; } ;
struct TYPE_2__ {unsigned int producer_index; unsigned int consumer_index; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct rxe_queue *VAR_0)
{
 return (VAR_0->buf->producer_index - VAR_0->buf->consumer_index)
  & VAR_0->index_mask;
}
