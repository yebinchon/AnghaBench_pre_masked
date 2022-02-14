
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_work {int op; } ;
struct background_tracker {int pending_writebacks; int pending_demotes; int pending_promotes; } ;





 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct background_tracker *VAR_0, struct policy_work *VAR_1, int VAR_2)
{
 switch (VAR_1->op) {
 case 129:
  FUNC_0(VAR_2, &VAR_0->pending_promotes);
  break;

 case 130:
  FUNC_0(VAR_2, &VAR_0->pending_demotes);
  break;

 case 128:
  FUNC_0(VAR_2, &VAR_0->pending_writebacks);
  break;
 }
}
