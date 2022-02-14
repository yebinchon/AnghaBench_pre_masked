
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp {int usecnt; TYPE_1__* device; } ;
struct ib_flow_attr {int dummy; } ;
struct ib_flow {int dummy; } ;
struct TYPE_2__ {struct ib_flow* (* create_flow ) (struct ib_qp*,struct ib_flow_attr*,int) ;} ;


 int VAR_0 ;
 struct ib_flow* FUNC_0 (int ) ;
 int FUNC_1 (struct ib_flow*) ;
 int FUNC_2 (int *) ;
 struct ib_flow* FUNC_3 (struct ib_qp*,struct ib_flow_attr*,int) ;

struct ib_flow *FUNC_4(struct ib_qp *VAR_1,
          struct ib_flow_attr *VAR_2,
          int VAR_3)
{
 struct ib_flow *VAR_4;
 if (!VAR_1->device->create_flow)
  return FUNC_0(-VAR_0);

 VAR_4 = VAR_1->device->create_flow(VAR_1, VAR_2, VAR_3);
 if (!FUNC_1(VAR_4))
  FUNC_2(&VAR_1->usecnt);
 return VAR_4;
}
