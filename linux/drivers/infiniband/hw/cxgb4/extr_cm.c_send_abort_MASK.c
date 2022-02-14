
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; TYPE_1__* qp; } ;
struct c4iw_ep {TYPE_2__ com; } ;
struct TYPE_3__ {int srq; } ;


 int VAR_0 ;
 int FUNC_0 (struct c4iw_ep*) ;
 int FUNC_1 (struct c4iw_ep*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct c4iw_ep *VAR_1)
{
 if (!VAR_1->com.qp || !VAR_1->com.qp->srq) {
  FUNC_1(VAR_1);
  return 0;
 }
 FUNC_2(VAR_0, &VAR_1->com.flags);
 FUNC_0(VAR_1);
 return 0;
}
