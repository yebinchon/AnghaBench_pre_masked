
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct t3_wq {TYPE_2__* queue; } ;
struct TYPE_3__ {int err; } ;
struct TYPE_4__ {TYPE_1__ wq_in_err; } ;



__attribute__((used)) static inline void FUNC_0(struct t3_wq *VAR_0)
{
 VAR_0->queue->wq_in_err.err &= ~2;
}
