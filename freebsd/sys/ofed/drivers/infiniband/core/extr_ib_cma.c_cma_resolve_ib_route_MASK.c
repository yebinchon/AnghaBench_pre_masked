
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rdma_route {struct cma_work* path_rec; } ;
struct TYPE_3__ {struct rdma_route route; } ;
struct rdma_id_private {TYPE_1__ id; } ;
struct TYPE_4__ {int event; } ;
struct cma_work {TYPE_2__ event; int new_state; int old_state; int work; struct rdma_id_private* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rdma_id_private*,int,struct cma_work*) ;
 int VAR_5 ;
 int FUNC_2 (struct cma_work*) ;
 struct cma_work* FUNC_3 (int,int ) ;
 struct cma_work* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct rdma_id_private *VAR_6, int VAR_7)
{
 struct rdma_route *VAR_8 = &VAR_6->id.route;
 struct cma_work *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(sizeof *VAR_9, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->id = VAR_6;
 FUNC_0(&VAR_9->work, VAR_5);
 VAR_9->old_state = VAR_3;
 VAR_9->new_state = VAR_4;
 VAR_9->event.event = VAR_2;

 VAR_8->path_rec = FUNC_3(sizeof *VAR_8->path_rec, VAR_1);
 if (!VAR_8->path_rec) {
  VAR_10 = -VAR_0;
  goto err1;
 }

 VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_9);
 if (VAR_10)
  goto err2;

 return 0;
err2:
 FUNC_2(VAR_8->path_rec);
 VAR_8->path_rec = ((void*)0);
err1:
 FUNC_2(VAR_9);
 return VAR_10;
}
