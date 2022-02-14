
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp {int usecnt; TYPE_1__* device; } ;
struct ib_flow {struct ib_qp* qp; } ;
struct TYPE_2__ {int (* destroy_flow ) (struct ib_flow*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_flow*) ;

int FUNC_2(struct ib_flow *VAR_0)
{
 int VAR_1;
 struct ib_qp *VAR_2 = VAR_0->qp;

 VAR_1 = VAR_2->device->destroy_flow(VAR_0);
 if (!VAR_1)
  FUNC_0(&VAR_2->usecnt);
 return VAR_1;
}
