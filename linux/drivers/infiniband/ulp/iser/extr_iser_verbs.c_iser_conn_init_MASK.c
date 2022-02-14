
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int done; } ;
struct ib_conn {TYPE_1__ reg_cqe; scalar_t__ post_recv_buf_count; } ;
struct iser_conn {int state_mutex; int conn_list; int up_completion; int ib_completion; int stop_completion; int state; struct ib_conn ib_conn; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iser_conn *VAR_2)
{
 struct ib_conn *VAR_3 = &VAR_2->ib_conn;

 VAR_2->state = VAR_0;
 FUNC_1(&VAR_2->stop_completion);
 FUNC_1(&VAR_2->ib_completion);
 FUNC_1(&VAR_2->up_completion);
 FUNC_0(&VAR_2->conn_list);
 FUNC_2(&VAR_2->state_mutex);

 VAR_3->post_recv_buf_count = 0;
 VAR_3->reg_cqe.done = VAR_1;
}
