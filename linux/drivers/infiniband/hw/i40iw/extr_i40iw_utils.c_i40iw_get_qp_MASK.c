
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp {int dummy; } ;
struct ib_device {int dummy; } ;
struct i40iw_device {int max_qp; TYPE_1__** qp_table; } ;
struct TYPE_2__ {struct ib_qp ibqp; } ;


 int VAR_0 ;
 struct i40iw_device* FUNC_0 (struct ib_device*) ;

struct ib_qp *FUNC_1(struct ib_device *VAR_1, int VAR_2)
{
 struct i40iw_device *VAR_3 = FUNC_0(VAR_1);

 if ((VAR_2 < VAR_0) || (VAR_2 >= VAR_3->max_qp))
  return ((void*)0);

 return &VAR_3->qp_table[VAR_2]->ibqp;
}
