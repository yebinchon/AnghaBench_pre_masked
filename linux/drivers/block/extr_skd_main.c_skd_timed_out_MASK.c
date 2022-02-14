
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skd_device {TYPE_2__* pdev; } ;
struct request {TYPE_1__* q; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct skd_device* queuedata; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static enum blk_eh_timer_return FUNC_2(struct request *VAR_1,
           bool VAR_2)
{
 struct skd_device *VAR_3 = VAR_1->q->queuedata;

 FUNC_1(&VAR_3->pdev->dev, "request with tag %#x timed out\n",
  FUNC_0(VAR_1));

 return VAR_0;
}
