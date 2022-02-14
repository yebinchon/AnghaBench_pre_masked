
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct sockaddr_ib {int sib_addr; } ;
struct TYPE_5__ {int dst_addr; int dev_addr; } ;
struct TYPE_6__ {TYPE_1__ addr; } ;
struct TYPE_7__ {TYPE_2__ route; } ;
struct rdma_id_private {TYPE_3__ id; int cma_dev; } ;
struct TYPE_8__ {int event; } ;
struct cma_work {int work; TYPE_4__ event; int new_state; int old_state; struct rdma_id_private* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rdma_id_private*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct cma_work*) ;
 struct cma_work* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,union ib_gid*) ;

__attribute__((used)) static int FUNC_6(struct rdma_id_private *VAR_7)
{
 struct cma_work *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(sizeof *VAR_8, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 if (!VAR_7->cma_dev) {
  VAR_9 = FUNC_1(VAR_7);
  if (VAR_9)
   goto err;
 }

 FUNC_5(&VAR_7->id.route.addr.dev_addr, (union ib_gid *)
  &(((struct sockaddr_ib *) &VAR_7->id.route.addr.dst_addr)->sib_addr));

 VAR_8->id = VAR_7;
 FUNC_0(&VAR_8->work, VAR_5);
 VAR_8->old_state = VAR_2;
 VAR_8->new_state = VAR_3;
 VAR_8->event.event = VAR_4;
 FUNC_4(VAR_6, &VAR_8->work);
 return 0;
err:
 FUNC_2(VAR_8);
 return VAR_9;
}
