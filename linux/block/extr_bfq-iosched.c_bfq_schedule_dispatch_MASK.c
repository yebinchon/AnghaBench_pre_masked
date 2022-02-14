
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_data {scalar_t__ queued; int queue; } ;


 int FUNC_0 (struct bfq_data*,char*) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct bfq_data *VAR_0)
{
 if (VAR_0->queued != 0) {
  FUNC_0(VAR_0, "schedule dispatch");
  FUNC_1(VAR_0->queue, 1);
 }
}
