
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {scalar_t__ mode; int mask; } ;
struct rdma_port_counter {TYPE_2__ mode; } ;
struct rdma_counter {int kref; } ;
struct ib_qp {struct ib_device* device; } ;
struct ib_device {TYPE_1__* port_data; } ;
struct TYPE_3__ {struct rdma_port_counter port_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rdma_counter*,struct ib_qp*) ;
 int FUNC_1 (struct rdma_counter*,struct ib_qp*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 struct rdma_counter* FUNC_3 (struct ib_device*,size_t,scalar_t__) ;
 int FUNC_4 (struct rdma_counter*) ;
 int FUNC_5 (struct rdma_counter*,struct ib_qp*) ;
 struct rdma_counter* FUNC_6 (struct ib_qp*,size_t) ;
 int FUNC_7 (struct ib_device*,size_t) ;

int FUNC_8(struct ib_qp *VAR_4, u8 VAR_5)
{
 struct rdma_port_counter *VAR_6;
 struct ib_device *VAR_7 = VAR_4->device;
 struct rdma_counter *VAR_8;
 int VAR_9;

 if (!FUNC_7(VAR_7, VAR_5))
  return -VAR_0;

 VAR_6 = &VAR_7->port_data[VAR_5].port_counter;
 if (VAR_6->mode.mode != VAR_2)
  return 0;

 VAR_8 = FUNC_6(VAR_4, VAR_5);
 if (VAR_8) {
  VAR_9 = FUNC_0(VAR_8, VAR_4);
  if (VAR_9) {
   FUNC_2(&VAR_8->kref, VAR_3);
   return VAR_9;
  }
 } else {
  VAR_8 = FUNC_3(VAR_7, VAR_5, VAR_2);
  if (!VAR_8)
   return -VAR_1;

  FUNC_1(VAR_8, VAR_4, VAR_6->mode.mask);

  VAR_9 = FUNC_0(VAR_8, VAR_4);
  if (VAR_9) {
   FUNC_4(VAR_8);
   return VAR_9;
  }

  FUNC_5(VAR_8, VAR_4);
 }

 return 0;
}
