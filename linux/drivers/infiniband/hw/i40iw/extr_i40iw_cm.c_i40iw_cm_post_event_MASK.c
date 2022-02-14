
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_4__* cm_id; } ;
struct i40iw_cm_event {int event_work; TYPE_2__* cm_node; TYPE_1__ cm_info; } ;
struct TYPE_8__ {int (* add_ref ) (TYPE_4__*) ;} ;
struct TYPE_7__ {int event_wq; } ;
struct TYPE_6__ {TYPE_3__* cm_core; int ref_count; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_4(struct i40iw_cm_event *VAR_1)
{
 FUNC_1(&VAR_1->cm_node->ref_count);
 VAR_1->cm_info.cm_id->add_ref(VAR_1->cm_info.cm_id);
 FUNC_0(&VAR_1->event_work, VAR_0);

 FUNC_2(VAR_1->cm_node->cm_core->event_wq, &VAR_1->event_work);
}
