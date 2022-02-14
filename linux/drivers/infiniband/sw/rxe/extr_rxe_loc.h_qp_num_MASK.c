
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qp_num; } ;
struct rxe_qp {TYPE_1__ ibqp; } ;



__attribute__((used)) static inline int FUNC_0(struct rxe_qp *VAR_0)
{
 return VAR_0->ibqp.qp_num;
}
