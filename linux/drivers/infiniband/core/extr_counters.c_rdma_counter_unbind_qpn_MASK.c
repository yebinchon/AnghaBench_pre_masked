
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ mode; } ;
struct rdma_port_counter {TYPE_3__ mode; } ;
struct ib_qp {scalar_t__ port; int res; TYPE_2__* counter; } ;
struct ib_device {TYPE_1__* port_data; } ;
struct TYPE_5__ {scalar_t__ id; } ;
struct TYPE_4__ {struct rdma_port_counter port_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ib_qp* FUNC_0 (struct ib_device*,scalar_t__) ;
 int FUNC_1 (struct ib_qp*,int) ;
 scalar_t__ FUNC_2 (struct ib_device*,scalar_t__) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ib_device *VAR_3, u8 VAR_4,
       u32 VAR_5, u32 VAR_6)
{
 struct rdma_port_counter *VAR_7;
 struct ib_qp *VAR_8;
 int VAR_9;

 if (!FUNC_2(VAR_3, VAR_4))
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_3, VAR_5);
 if (!VAR_8)
  return -VAR_1;

 if (FUNC_2(VAR_3, VAR_8->port) && (VAR_8->port != VAR_4)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_7 = &VAR_3->port_data[VAR_4].port_counter;
 if (!VAR_8->counter || VAR_8->counter->id != VAR_6 ||
     VAR_7->mode.mode != VAR_2) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_1(VAR_8, 0);

out:
 FUNC_3(&VAR_8->res);
 return VAR_9;
}
