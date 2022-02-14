
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp_attr {int ah_attr; } ;
struct ib_qp {int real_qp; TYPE_1__* device; } ;
struct TYPE_2__ {int (* modify_qp ) (int ,struct ib_qp_attr*,int,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int ,struct ib_qp_attr*,int,int *) ;

int FUNC_2(struct ib_qp *VAR_1,
   struct ib_qp_attr *VAR_2,
   int VAR_3)
{
 if (VAR_3 & VAR_0) {
  int VAR_4;

  VAR_4 = FUNC_0(VAR_1->device, &VAR_2->ah_attr);
  if (VAR_4)
   return VAR_4;
 }

 return VAR_1->device->modify_qp(VAR_1->real_qp, VAR_2, VAR_3, ((void*)0));
}
