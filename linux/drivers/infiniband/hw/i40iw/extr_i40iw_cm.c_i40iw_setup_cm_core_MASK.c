
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_cm_core {void* disconn_wq; void* event_wq; int apbvt_lock; int listen_list_lock; int ht_lock; int tcp_timer; int listen_nodes; int non_accelerated_list; int accelerated_list; int * dev; struct i40iw_device* iwdev; } ;
struct i40iw_device {struct i40iw_cm_core cm_core; int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 void* FUNC_1 (char*,int ) ;
 int FUNC_2 (struct i40iw_cm_core*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;

int FUNC_5(struct i40iw_device *VAR_3)
{
 struct i40iw_cm_core *VAR_4 = &VAR_3->cm_core;

 VAR_4->iwdev = VAR_3;
 VAR_4->dev = &VAR_3->sc_dev;

 FUNC_0(&VAR_4->accelerated_list);
 FUNC_0(&VAR_4->non_accelerated_list);
 FUNC_0(&VAR_4->listen_nodes);

 FUNC_4(&VAR_4->tcp_timer, VAR_2, 0);

 FUNC_3(&VAR_4->ht_lock);
 FUNC_3(&VAR_4->listen_list_lock);
 FUNC_3(&VAR_4->apbvt_lock);

 VAR_4->event_wq = FUNC_1("iwewq",
          VAR_1);
 if (!VAR_4->event_wq)
  goto error;

 VAR_4->disconn_wq = FUNC_1("iwdwq",
            VAR_1);
 if (!VAR_4->disconn_wq)
  goto error;

 return 0;
error:
 FUNC_2(&VAR_3->cm_core);

 return -VAR_0;
}
