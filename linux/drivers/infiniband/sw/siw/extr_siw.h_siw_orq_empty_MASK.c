
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t orq_size; } ;
struct siw_qp {size_t orq_get; TYPE_2__ attrs; TYPE_1__* orq; } ;
struct TYPE_3__ {scalar_t__ flags; } ;



__attribute__((used)) static inline int FUNC_0(struct siw_qp *VAR_0)
{
 return VAR_0->orq[VAR_0->orq_get % VAR_0->attrs.orq_size].flags == 0 ? 1 : 0;
}
