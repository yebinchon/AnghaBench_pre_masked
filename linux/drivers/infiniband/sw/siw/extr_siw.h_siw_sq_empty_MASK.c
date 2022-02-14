
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_sqe {int flags; } ;
struct TYPE_2__ {size_t sq_size; } ;
struct siw_qp {size_t sq_get; TYPE_1__ attrs; struct siw_sqe* sendq; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct siw_qp *VAR_0)
{
 struct siw_sqe *VAR_1 = &VAR_0->sendq[VAR_0->sq_get % VAR_0->attrs.sq_size];

 return FUNC_0(VAR_1->flags) == 0;
}
