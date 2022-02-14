
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct TYPE_4__ {int dev_addr; } ;
struct TYPE_5__ {TYPE_1__ addr; } ;
struct TYPE_6__ {TYPE_2__ route; } ;
struct rdma_id_private {TYPE_3__ id; int cma_dev; } ;
struct cma_work {int work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rdma_id_private*) ;
 int FUNC_1 (struct cma_work*,struct rdma_id_private*) ;
 int VAR_2 ;
 int FUNC_2 (struct cma_work*) ;
 struct cma_work* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,union ib_gid*) ;
 int FUNC_6 (int *,union ib_gid*) ;

__attribute__((used)) static int FUNC_7(struct rdma_id_private *VAR_3)
{
 struct cma_work *VAR_4;
 union ib_gid VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(sizeof *VAR_4, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 if (!VAR_3->cma_dev) {
  VAR_6 = FUNC_0(VAR_3);
  if (VAR_6)
   goto err;
 }

 FUNC_5(&VAR_3->id.route.addr.dev_addr, &VAR_5);
 FUNC_6(&VAR_3->id.route.addr.dev_addr, &VAR_5);

 FUNC_1(VAR_4, VAR_3);
 FUNC_4(VAR_2, &VAR_4->work);
 return 0;
err:
 FUNC_2(VAR_4);
 return VAR_6;
}
