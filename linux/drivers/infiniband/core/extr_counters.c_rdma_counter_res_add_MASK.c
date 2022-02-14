
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_counter {int res; } ;
struct TYPE_2__ {int task; int kern_name; } ;
struct ib_qp {TYPE_1__ res; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct rdma_counter *VAR_0,
     struct ib_qp *VAR_1)
{
 if (FUNC_0(&VAR_1->res)) {
  FUNC_3(&VAR_0->res, VAR_1->res.kern_name);
  FUNC_2(&VAR_0->res);
 } else {
  FUNC_1(&VAR_0->res, VAR_1->res.task);
  FUNC_4(&VAR_0->res);
 }
}
