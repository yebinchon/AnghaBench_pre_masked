
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* dev; } ;
struct c4iw_ep {TYPE_1__ com; int hwtid; } ;
struct TYPE_4__ {int hwtids; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct c4iw_ep*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct c4iw_ep *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_1(&VAR_1->com.dev->hwtids, VAR_2);
 VAR_3 = FUNC_0(&VAR_1->com.dev->hwtids, VAR_1->hwtid, VAR_1, VAR_0);
 FUNC_2(&VAR_1->com.dev->hwtids, VAR_2);

 return VAR_3;
}
