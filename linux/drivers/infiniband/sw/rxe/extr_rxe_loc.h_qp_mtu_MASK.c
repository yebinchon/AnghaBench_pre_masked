
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int path_mtu; } ;
struct TYPE_3__ {scalar_t__ qp_type; } ;
struct rxe_qp {TYPE_2__ attr; TYPE_1__ ibqp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline int FUNC_0(struct rxe_qp *VAR_3)
{
 if (VAR_3->ibqp.qp_type == VAR_1 || VAR_3->ibqp.qp_type == VAR_2)
  return VAR_3->attr.path_mtu;
 else
  return VAR_0;
}
