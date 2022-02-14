
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int history; int flags; TYPE_1__* qp; } ;
struct c4iw_ep {TYPE_2__ com; } ;
struct TYPE_3__ {int ibqp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct c4iw_ep *VAR_2)
{
 FUNC_0(&VAR_2->com.qp->ibqp);
 FUNC_1(VAR_1, &VAR_2->com.flags);
 FUNC_2(VAR_0, &VAR_2->com.history);
}
