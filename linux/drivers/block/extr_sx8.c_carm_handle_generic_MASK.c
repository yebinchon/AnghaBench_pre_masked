
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carm_request {int dummy; } ;
struct carm_host {int state; int fsm_task; } ;
typedef scalar_t__ blk_status_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct carm_host *VAR_1,
    struct carm_request *VAR_2, blk_status_t VAR_3,
    int VAR_4, int VAR_5)
{
 FUNC_0("ENTER\n");

 FUNC_1(VAR_1->state == VAR_4);
 if (VAR_3)
  VAR_1->state = VAR_0;
 else
  VAR_1->state = VAR_5;
 FUNC_2(&VAR_1->fsm_task);
}
