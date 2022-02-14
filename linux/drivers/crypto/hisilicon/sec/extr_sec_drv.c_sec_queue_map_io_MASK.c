
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sec_queue {int regs; int queue_id; TYPE_1__* dev_info; } ;
struct resource {int start; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 struct resource* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct sec_queue *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev_info->dev;
 struct resource *VAR_4;

 VAR_4 = FUNC_2(FUNC_4(VAR_3),
        VAR_1,
        2 + VAR_2->queue_id);
 if (!VAR_4) {
  FUNC_0(VAR_3, "Failed to get queue %d memory resource\n",
   VAR_2->queue_id);
  return -VAR_0;
 }
 VAR_2->regs = FUNC_1(VAR_4->start, FUNC_3(VAR_4));
 if (!VAR_2->regs)
  return -VAR_0;

 return 0;
}
