
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t qp_type; } ;
struct rxe_qp {TYPE_1__ ibqp; } ;
struct TYPE_4__ {unsigned int* mask; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(int VAR_1, struct rxe_qp *VAR_2)
{
 return VAR_0[VAR_1].mask[VAR_2->ibqp.qp_type];
}
