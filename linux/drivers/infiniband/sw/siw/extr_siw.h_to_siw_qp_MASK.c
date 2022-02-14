
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_qp {int dummy; } ;
struct ib_qp {int dummy; } ;
struct TYPE_2__ {struct siw_qp* qp; } ;


 TYPE_1__* FUNC_0 (struct ib_qp*) ;

__attribute__((used)) static inline struct siw_qp *FUNC_1(struct ib_qp *VAR_0)
{
 return FUNC_0(VAR_0)->qp;
}
