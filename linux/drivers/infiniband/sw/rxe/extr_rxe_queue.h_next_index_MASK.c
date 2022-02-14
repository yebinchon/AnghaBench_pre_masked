
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_queue {TYPE_1__* buf; } ;
struct TYPE_2__ {int index_mask; } ;



__attribute__((used)) static inline int FUNC_0(struct rxe_queue *VAR_0, int VAR_1)
{
 return (VAR_1 + 1) & VAR_0->buf->index_mask;
}
