
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_11__ {TYPE_6__* qp; TYPE_3__* dev; } ;
struct c4iw_ep {TYPE_5__ com; } ;
typedef enum chip_type { ____Placeholder_chip_type } chip_type ;
struct TYPE_10__ {scalar_t__ uobject; } ;
struct TYPE_12__ {int wq; TYPE_4__ ibqp; } ;
struct TYPE_7__ {int adapter_type; } ;
struct TYPE_8__ {TYPE_1__ lldi; } ;
struct TYPE_9__ {TYPE_2__ rdev; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_6__*,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct c4iw_ep *VAR_1, u32 VAR_2)
{
 enum chip_type VAR_3;

 VAR_3 = VAR_1->com.dev->rdev.lldi.adapter_type;







 if (FUNC_0(VAR_3) > VAR_0 && VAR_2) {
  if (VAR_1->com.qp->ibqp.uobject)
   FUNC_2(&VAR_1->com.qp->wq, VAR_2);
  else
   FUNC_1(VAR_1->com.qp, VAR_2);
 }
}
