
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp_init_attr {int dummy; } ;
struct ib_qp_attr {int dummy; } ;
struct ib_qp {int real_qp; TYPE_1__* device; } ;
struct TYPE_2__ {int (* query_qp ) (int ,struct ib_qp_attr*,int,struct ib_qp_init_attr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ib_qp_attr*,int,struct ib_qp_init_attr*) ;

int FUNC_1(struct ib_qp *VAR_1,
  struct ib_qp_attr *VAR_2,
  int VAR_3,
  struct ib_qp_init_attr *VAR_4)
{
 return VAR_1->device->query_qp ?
  VAR_1->device->query_qp(VAR_1->real_qp, VAR_2, VAR_3, VAR_4) :
  -VAR_0;
}
