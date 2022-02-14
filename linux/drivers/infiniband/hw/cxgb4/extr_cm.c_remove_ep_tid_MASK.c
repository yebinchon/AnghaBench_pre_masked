
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dev; } ;
struct c4iw_ep {TYPE_2__ com; int hwtid; } ;
struct TYPE_3__ {int hwtids; int wait; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct c4iw_ep *VAR_0)
{
 unsigned long VAR_1;

 FUNC_3(&VAR_0->com.dev->hwtids, VAR_1);
 FUNC_0(&VAR_0->com.dev->hwtids, VAR_0->hwtid);
 if (FUNC_2(&VAR_0->com.dev->hwtids))
  FUNC_1(&VAR_0->com.dev->wait);
 FUNC_4(&VAR_0->com.dev->hwtids, VAR_1);
}
