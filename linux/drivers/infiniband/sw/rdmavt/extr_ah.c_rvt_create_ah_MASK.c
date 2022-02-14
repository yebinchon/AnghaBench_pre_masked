
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int (* notify_new_ah ) (int ,struct rdma_ah_attr*,struct rvt_ah*) ;} ;
struct TYPE_4__ {scalar_t__ max_ah; } ;
struct TYPE_5__ {TYPE_1__ props; } ;
struct rvt_dev_info {scalar_t__ n_ahs_allocated; TYPE_3__ driver_f; int n_ahs_lock; TYPE_2__ dparms; } ;
struct rvt_ah {int attr; } ;
struct rdma_ah_attr {int dummy; } ;
struct ib_udata {int dummy; } ;
struct ib_ah {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rvt_dev_info* FUNC_0 (int ) ;
 struct rvt_ah* FUNC_1 (struct ib_ah*) ;
 int FUNC_2 (int *,struct rdma_ah_attr*) ;
 scalar_t__ FUNC_3 (int ,struct rdma_ah_attr*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,struct rdma_ah_attr*,struct rvt_ah*) ;

int FUNC_7(struct ib_ah *VAR_2, struct rdma_ah_attr *VAR_3,
    u32 VAR_4, struct ib_udata *VAR_5)
{
 struct rvt_ah *VAR_6 = FUNC_1(VAR_2);
 struct rvt_dev_info *VAR_7 = FUNC_0(VAR_2->device);
 unsigned long VAR_8;

 if (FUNC_3(VAR_2->device, VAR_3))
  return -VAR_0;

 FUNC_4(&VAR_7->n_ahs_lock, VAR_8);
 if (VAR_7->n_ahs_allocated == VAR_7->dparms.props.max_ah) {
  FUNC_5(&VAR_7->n_ahs_lock, VAR_8);
  return -VAR_1;
 }

 VAR_7->n_ahs_allocated++;
 FUNC_5(&VAR_7->n_ahs_lock, VAR_8);

 FUNC_2(&VAR_6->attr, VAR_3);

 if (VAR_7->driver_f.notify_new_ah)
  VAR_7->driver_f.notify_new_ah(VAR_2->device, VAR_3, VAR_6);

 return 0;
}
