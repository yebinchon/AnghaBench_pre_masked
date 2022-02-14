
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_sqe {int flags; } ;
struct TYPE_2__ {size_t irq_size; } ;
struct siw_qp {size_t irq_put; TYPE_1__ attrs; struct siw_sqe* irq; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline struct siw_sqe *FUNC_1(struct siw_qp *VAR_0)
{
 struct siw_sqe *VAR_1 = &VAR_0->irq[VAR_0->irq_put % VAR_0->attrs.irq_size];

 if (FUNC_0(VAR_1->flags) == 0) {
  VAR_0->irq_put++;
  return VAR_1;
 }
 return ((void*)0);
}
