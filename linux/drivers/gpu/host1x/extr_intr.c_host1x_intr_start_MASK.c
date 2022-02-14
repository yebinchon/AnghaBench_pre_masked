
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct host1x {int intr_mutex; int clk; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct host1x*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

void FUNC_5(struct host1x *VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_1->clk);
 int VAR_3;

 FUNC_3(&VAR_1->intr_mutex);
 VAR_3 = FUNC_2(VAR_1, FUNC_0(VAR_2, 1000000),
         VAR_0);
 if (VAR_3) {
  FUNC_4(&VAR_1->intr_mutex);
  return;
 }
 FUNC_4(&VAR_1->intr_mutex);
}
