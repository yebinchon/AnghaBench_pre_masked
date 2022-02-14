
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nullb_queue {int dev; int queue_depth; int wait; } ;
struct nullb {int dev; int queue_depth; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nullb *VAR_0, struct nullb_queue *VAR_1)
{
 FUNC_0(!VAR_0);
 FUNC_0(!VAR_1);

 FUNC_1(&VAR_1->wait);
 VAR_1->queue_depth = VAR_0->queue_depth;
 VAR_1->dev = VAR_0->dev;
}
