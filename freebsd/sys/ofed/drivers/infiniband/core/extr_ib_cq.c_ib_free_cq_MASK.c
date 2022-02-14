
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_cq {int poll_ctx; TYPE_1__* device; int work; int usecnt; } ;
struct TYPE_2__ {int (* destroy_cq ) (struct ib_cq*) ;} ;





 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ib_cq*) ;

void
FUNC_4(struct ib_cq *VAR_0)
{

 if (FUNC_0(FUNC_1(&VAR_0->usecnt) != 0))
  return;

 switch (VAR_0->poll_ctx) {
 case 130:
  break;
 case 129:
 case 128:
  FUNC_2(&VAR_0->work);
  break;
 default:
  break;
 }

 (void)VAR_0->device->destroy_cq(VAR_0);
}
