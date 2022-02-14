
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct cmdq_thread {scalar_t__ base; TYPE_2__* chan; } ;
struct TYPE_4__ {TYPE_1__* mbox; } ;
struct TYPE_3__ {struct device* dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned long,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct cmdq_thread *VAR_1,
     unsigned long VAR_2)
{
 struct device *VAR_3 = VAR_1->chan->mbox->dev;
 unsigned long VAR_4;

 if (FUNC_1(VAR_1->base + VAR_0,
   VAR_4, VAR_4 == VAR_2, 1, 20))
  FUNC_0(VAR_3, "GCE thread cannot run to end.\n");
}
