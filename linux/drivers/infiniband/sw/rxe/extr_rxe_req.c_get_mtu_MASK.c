
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device; } ;
struct rxe_qp {int mtu; TYPE_1__ ibqp; } ;
struct TYPE_4__ {int mtu_cap; } ;
struct rxe_dev {TYPE_2__ port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct rxe_qp*) ;
 struct rxe_dev* FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct rxe_qp *VAR_2)
{
 struct rxe_dev *VAR_3 = FUNC_1(VAR_2->ibqp.device);

 if ((FUNC_0(VAR_2) == VAR_0) || (FUNC_0(VAR_2) == VAR_1))
  return VAR_2->mtu;

 return VAR_3->port.mtu_cap;
}
