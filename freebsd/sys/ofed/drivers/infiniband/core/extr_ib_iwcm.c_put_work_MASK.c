
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwcm_work {TYPE_1__* cm_id; int free_list; } ;
struct TYPE_2__ {int work_free_list; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct iwcm_work *VAR_0)
{
 FUNC_0(&VAR_0->free_list, &VAR_0->cm_id->work_free_list);
}
