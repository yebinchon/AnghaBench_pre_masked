
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ task; } ;
struct rdma_counter {int kref; TYPE_1__ res; } ;
struct TYPE_4__ {scalar_t__ task; } ;
struct ib_qp {TYPE_2__ res; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct rdma_counter*,struct ib_qp*) ;
 struct ib_qp* FUNC_2 (struct ib_device*,int ) ;
 struct rdma_counter* FUNC_3 (struct ib_device*,int ) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(struct ib_device *VAR_3, u8 VAR_4,
     u32 VAR_5, u32 VAR_6)
{
 struct rdma_counter *VAR_7;
 struct ib_qp *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_3, VAR_5);
 if (!VAR_8)
  return -VAR_1;

 VAR_7 = FUNC_3(VAR_3, VAR_6);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto err;
 }

 if (VAR_7->res.task != VAR_8->res.task) {
  VAR_9 = -VAR_0;
  goto err_task;
 }

 VAR_9 = FUNC_1(VAR_7, VAR_8);
 if (VAR_9)
  goto err_task;

 FUNC_4(&VAR_8->res);
 return 0;

err_task:
 FUNC_0(&VAR_7->kref, VAR_2);
err:
 FUNC_4(&VAR_8->res);
 return VAR_9;
}
