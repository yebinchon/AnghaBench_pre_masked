
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_route {struct cma_work* path_rec; } ;
struct TYPE_2__ {struct rdma_route route; } ;
struct rdma_id_private {TYPE_1__ id; } ;
struct cma_work {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cma_work*,struct rdma_id_private*) ;
 int FUNC_1 (struct rdma_id_private*,unsigned long,struct cma_work*) ;
 int FUNC_2 (struct cma_work*) ;
 struct cma_work* FUNC_3 (int,int ) ;
 struct cma_work* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct rdma_id_private *VAR_2,
    unsigned long VAR_3)
{
 struct rdma_route *VAR_4 = &VAR_2->id.route;
 struct cma_work *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(sizeof *VAR_5, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(VAR_5, VAR_2);

 VAR_4->path_rec = FUNC_3(sizeof *VAR_4->path_rec, VAR_1);
 if (!VAR_4->path_rec) {
  VAR_6 = -VAR_0;
  goto err1;
 }

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5);
 if (VAR_6)
  goto err2;

 return 0;
err2:
 FUNC_2(VAR_4->path_rec);
 VAR_4->path_rec = ((void*)0);
err1:
 FUNC_2(VAR_5);
 return VAR_6;
}
