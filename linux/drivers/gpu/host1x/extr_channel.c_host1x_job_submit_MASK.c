
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct host1x_job {TYPE_2__* channel; } ;
struct host1x {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int parent; } ;


 struct host1x* FUNC_0 (int ) ;
 int FUNC_1 (struct host1x*,struct host1x_job*) ;

int FUNC_2(struct host1x_job *VAR_0)
{
 struct host1x *VAR_1 = FUNC_0(VAR_0->channel->dev->parent);

 return FUNC_1(VAR_1, VAR_0);
}
