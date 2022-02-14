
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cm_work {int list; int remote_id; int local_id; } ;
struct TYPE_6__ {TYPE_2__* port; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct cm_id_private {int lock; int work_list; int work_count; int msg; TYPE_3__ av; TYPE_1__ id; } ;
struct TYPE_5__ {int mad_agent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 struct cm_id_private* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct cm_id_private*) ;
 int FUNC_3 (struct cm_id_private*,struct cm_work*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct cm_work *VAR_2)
{
 struct cm_id_private *VAR_3;
 int VAR_4;


 VAR_3 = FUNC_1(VAR_2->local_id, VAR_2->remote_id);
 if (!VAR_3)
  return -VAR_0;

 FUNC_6(&VAR_3->lock);
 if (VAR_3->id.state != VAR_1) {
  FUNC_7(&VAR_3->lock);
  goto out;
 }

 FUNC_4(VAR_3->av.port->mad_agent, VAR_3->msg);
 VAR_4 = FUNC_0(&VAR_3->work_count);
 if (!VAR_4)
  FUNC_5(&VAR_2->list, &VAR_3->work_list);
 FUNC_7(&VAR_3->lock);

 if (VAR_4)
  FUNC_3(VAR_3, VAR_2);
 else
  FUNC_2(VAR_3);
 return 0;
out:
 FUNC_2(VAR_3);
 return -VAR_0;
}
