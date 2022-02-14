
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_sqe {int flags; } ;
struct TYPE_2__ {size_t sq_size; } ;
struct siw_qp {size_t sq_get; TYPE_1__ attrs; struct siw_sqe* sendq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline struct siw_sqe *FUNC_1(struct siw_qp *VAR_1)
{
 struct siw_sqe *VAR_2 = &VAR_1->sendq[VAR_1->sq_get % VAR_1->attrs.sq_size];

 if (FUNC_0(VAR_2->flags) & VAR_0)
  return VAR_2;

 return ((void*)0);
}
