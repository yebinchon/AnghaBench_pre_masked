
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nullb_queue {TYPE_1__* dev; struct nullb_cmd* cmds; } ;
struct TYPE_4__ {int function; } ;
struct nullb_cmd {unsigned int tag; TYPE_2__ timer; struct nullb_queue* nq; } ;
struct TYPE_3__ {scalar_t__ irqmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (struct nullb_queue*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static struct nullb_cmd *FUNC_2(struct nullb_queue *VAR_4)
{
 struct nullb_cmd *VAR_5;
 unsigned int VAR_6;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 != -1U) {
  VAR_5 = &VAR_4->cmds[VAR_6];
  VAR_5->tag = VAR_6;
  VAR_5->nq = VAR_4;
  if (VAR_4->dev->irqmode == VAR_2) {
   FUNC_1(&VAR_5->timer, VAR_0,
         VAR_1);
   VAR_5->timer.function = VAR_3;
  }
  return VAR_5;
 }

 return ((void*)0);
}
