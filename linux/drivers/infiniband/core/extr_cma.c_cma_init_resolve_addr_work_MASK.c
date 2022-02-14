
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_id_private {int dummy; } ;
struct TYPE_2__ {int event; } ;
struct cma_work {TYPE_1__ event; int new_state; int old_state; int work; struct rdma_id_private* id; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct cma_work *VAR_4,
           struct rdma_id_private *VAR_5)
{
 VAR_4->id = VAR_5;
 FUNC_0(&VAR_4->work, VAR_3);
 VAR_4->old_state = VAR_0;
 VAR_4->new_state = VAR_1;
 VAR_4->event.event = VAR_2;
}
